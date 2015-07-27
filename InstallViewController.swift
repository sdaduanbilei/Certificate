//
//  InstallViewController.swift
//  Certificate
//
//  Created by Scorpio on 15/7/21.
//  Copyright (c) 2015年 ch999. All rights reserved.
//

import Cocoa

class InstallViewController: NSViewController {

    @IBOutlet weak var user_name: NSTextField!
    @IBOutlet weak var user_pwd1: NSSecureTextField!
    @IBOutlet weak var user_pwd2: NSSecureTextField!
    
    var name:String!
    var pwd1:String!
    var pwd2:String!
    // API 接口地址
    var BASE_URL:String = "http://www.baidu.com:988/ajax.ashx"
    
    var cid:String!
    var prefs:NSUserDefaults!
    var pwd:String!
    var nametemp:String!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do view setup here.
        prefs = NSUserDefaults.standardUserDefaults()
    }
    
    @IBAction func btn_intalling(sender: AnyObject) {
         // 开始安装
        name = user_name.stringValue
        pwd1 = user_pwd1.stringValue
        pwd2 = user_pwd2.stringValue
        
        if  name.isEmpty || pwd1.isEmpty || pwd2.isEmpty{
            self.showDialog("以上信息不能有空")
        }else{
            // 获取下载地址
            self.getDownURL();
        }
    }
    @IBAction func btn_cancel(sender: AnyObject) {
        self.dismissController(self)
    }
    
    // 获取下载地址并且调整到安装界面
    func getDownURL(){
        pwd = prefs.stringForKey("pwd")
        nametemp = prefs.stringForKey("name")
        
        if pwd == nil && nametemp == nil {
            self.showDialog("未进行申请操作")
        }else{
        
        if pwd == pwd1 && nametemp == name {
            cid = prefs.stringForKey("cid")
            let url = BASE_URL+"?act=ssldown&ch999_name="+name+"&id="+cid+"&pwd=" + pwd1.md5()
        
                let installingViewController = self.storyboard?.instantiateControllerWithIdentifier("InstallingViewController") as! InstallingViewController
                var temp = (pwd2.md5() as NSString).substringToIndex(10)
                installingViewController.pwd = temp ;
                installingViewController.down_url = url
            self.presentViewControllerAsSheet(installingViewController)
        }else{
            showDialog("账号或者密码错误")
            }
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
