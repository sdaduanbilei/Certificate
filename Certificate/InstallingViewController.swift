//
//  InstallingViewController.swift
//  Certificate
//
//  Created by Scorpio on 15/7/21.
//  Copyright (c) 2015年 ch999. All rights reserved.
//

import Cocoa

class InstallingViewController: NSViewController {
    
    var down_url:String!
    var pwd:String!
    var progress:Double!
    var prefs:NSUserDefaults!
    var cid:String!
    
    // API 接口地址
    var BASE_URL:String = "http://www.baidu.com:988/ajax.ashx"

    @IBOutlet weak var btn_install: NSButton!
    @IBOutlet weak var progressIndicator: NSProgressIndicator!
    @IBOutlet weak var stats: NSTextField!
    @IBOutlet weak var index: NSProgressIndicator!
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do view setup here.
        self.setUp()
        prefs = NSUserDefaults.standardUserDefaults()
    }
    
    var pathUrl: NSURL
        {
            let folder = NSSearchPathForDirectoriesInDomains(.DocumentDirectory, .UserDomainMask, true)[0] as! String
            var name = prefs.stringForKey("cid")
            name = name! + ".pfx"
            let path = folder.stringByAppendingPathComponent(name!)
            let url = NSURL(fileURLWithPath: path)
            return url!
    }
    
    func setUp(){
        progressIndicator.startAnimation(self)
        var str = "开始下载"
        self.stats.stringValue = "\(str)"
        var url = NSURL(string: down_url)
        var request = NSURLRequest(URL: url!)
        var configuraton = NSURLSessionConfiguration.defaultSessionConfiguration()
        var manager = AFURLSessionManager(sessionConfiguration: configuraton)
        
        var downloadTask = manager.downloadTaskWithRequest(request, progress: nil, destination: {(file, responce) in self.pathUrl},
            completionHandler:
            {
                response, localfile, error in
                
                self.progress = 50
                
                if localfile != nil{
                    self.btn_install.enabled = false ;
                    var str = "开始安装"
                    self.stats.stringValue = "\(str)"
                    // 执行安装代码
                    var temp = String(stringInterpolationSegment: localfile)
                    var file = temp.stringByReplacingOccurrencesOfString("file://", withString: "", options: NSStringCompareOptions.LiteralSearch, range: nil)

                    
                    let pfx = CkoCertStore()
                    var success:Bool = pfx.LoadPfxFile(file, password: self.pwd.uppercaseString)
                    print(success)
                    print(file )
                    print(self.pwd)
                    if success == true{
                        self.installPfx(file)
                    }else{
                        print(pfx.LastErrorText)
                        self.showDialog("安装失败，请重试")
                        self.deletPfx(file)
                        self.btn_install.enabled = true
                    }
                    
                   
                }
        })
        
        downloadTask.resume()
    }
    
    func installPfx(file:String){
        
        // 先进行删除操作
        system("security delete-certificate -c ch999 ")
        // 在导入新的pfx 证书
        var command = "security import " + file + " -k ~/Library/Keychains/login.keychain -P " + pwd.uppercaseString
        system(command)
        
        // 通知服务器通过
        let manager = AFHTTPSessionManager();
        manager.responseSerializer.acceptableContentTypes =  NSSet(object: "text/plain") as Set<NSObject>
        cid = prefs.stringForKey("cid")
        let params = ["act":"sslsetup","id":cid]
        manager.GET(BASE_URL, parameters: params, success: { (task:NSURLSessionDataTask!, data:AnyObject!) -> Void in
            let json = JSON(data);
            let stats = json["stats"]
            print(json)
            if stats == 1 {
                // 申请成功
                var result = "安装成功，请重启浏览器"
                self.stats.stringValue = "\(result)"
                self.btn_install.title = "关闭"
                self.btn_install.enabled = true
            }else{
                // 申请失败
                self.showDialog("安装失败，请重试")
                self.btn_install.enabled = true
            }
            
            }) { (task:NSURLSessionDataTask!, error:NSError!) -> Void in
                self.showDialog("系统错误")
                self.btn_install.enabled = true
        }
        self.deletPfx(file)
    }
    
    // 删除文件
    func deletPfx(file:String){
        let fileManager = NSFileManager.defaultManager()
        let homeDirectory = NSHomeDirectory()
        var error:NSErrorPointer = nil
        fileManager.removeItemAtPath(file, error: error)
    }
    
    // 显示dialog
    func  showDialog(str:String){
        let alert = NSAlert()
        alert.messageText = "提示"
        alert.addButtonWithTitle("确定")
        alert.informativeText = str
        alert.beginSheetModalForWindow(self.view.window!,completionHandler: nil)
    }
    
    @IBAction func btn_cancel(sender: AnyObject) {
        
        if self.btn_install.title == "关闭" {
            exit(0)
        }else{
            self.dismissController(self)
        }
    }
}
