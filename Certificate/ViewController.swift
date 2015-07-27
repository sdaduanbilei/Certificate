//
//  ViewController.swift
//  Certificate
//
//  Created by Scorpio on 15/7/20.
//  Copyright (c) 2015年 ch999. All rights reserved.
//

import Cocoa

class ViewController: NSViewController ,StatsDelegate{

    @IBOutlet weak var stats_lable: NSTextField!
    @IBOutlet weak var btn_install: NSButton!
    var prefs:NSUserDefaults! ;
    var cid:String!
    var timerTask:NSTimer!
    
    // API 接口地址
    var BASE_URL:String = "http://www.baidu.com:988/ajax.ashx"
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        prefs = NSUserDefaults.standardUserDefaults()
        self.setup()
        let appDomain = NSBundle.mainBundle().bundleIdentifier!
        
//        prefs.removePersistentDomainForName(appDomain)
        
    }
    
    // 开启定时任务 更新 申请状态
    func Timertask(){
        timerTask = NSTimer.scheduledTimerWithTimeInterval(10, target: self, selector: Selector("checkCert"), userInfo: nil, repeats: true)
        timerTask.fire()
    }
    
    
    // 初始化一些设置
    func setup(){
        cid =  prefs.stringForKey("cid")
        var i = 1 ;
        if cid == nil {
            btn_install.enabled  = false
        }else{
            // 已经申请未安装，检查是否通过审核
            self.checkCert()
            self.Timertask()
        }

        
    }
    
    
    override var representedObject: AnyObject? {
        didSet {
        // Update the view, if already loaded.
        }
    }
    
    
    override func prepareForSegue(segue: NSStoryboardSegue, sender: AnyObject?) {
        if segue.identifier == "getcert" {
            let getViewController = segue.destinationController  as! GetViewController
            getViewController.delegate = self ;
        }
    }
    
    // 接口方法
    func setStatsText(str: String) {
        self.stats_lable.stringValue = "\(str)"
        // 开启定时任务
        self.Timertask()
    }

    
    // 检测ID 是否通过
    func checkCert(){
        let manager = AFHTTPSessionManager();
        manager.responseSerializer.acceptableContentTypes =  NSSet(object: "text/plain") as Set<NSObject>
        cid = prefs.stringForKey("cid")
        let params = ["act":"sslstats","id":cid]
        manager.GET(BASE_URL, parameters: params, success: { (task:NSURLSessionDataTask!, data:AnyObject!) -> Void in
            let json = JSON(data);
            let stats = json["stats"]
            print(json)
            if stats == 1 {
                // 申请成功
                var result = json["msg"].stringValue
                self.stats_lable.stringValue = "\(result)"
                self.btn_install.enabled = true ;
            }else{
                // 申请失败 或者已经安装
                self.btn_install.enabled = false
                var result = json["msg"].stringValue
                self.stats_lable.stringValue = "\(result)"
                if result == "已安装" {
                    self.timerTask.invalidate()
                    self.btn_install.enabled = true 
                }
            }
            
            }) { (task:NSURLSessionDataTask!, error:NSError!) -> Void in
                self.btn_install.enabled = false
                self.showDialog("系统错误")
        }
    }
    
    
    
    
    // 显示dialog
    func  showDialog(str:String){
        let alert = NSAlert()
        alert.messageText = "提示"
        alert.addButtonWithTitle("确定")
        alert.informativeText = str
        alert.beginSheetModalForWindow(self.view.window!,completionHandler: nil)
    }
}

