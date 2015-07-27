//
//  GetViewController.swift
//  Certificate
//
//  Created by Scorpio on 15/7/20.
//  Copyright (c) 2015年 ch999. All rights reserved.
//

import Cocoa
import IOKit


class GetViewController: NSViewController {

    @IBOutlet weak var user_name: NSTextField!
    @IBOutlet weak var user_pwd: NSSecureTextField!
    @IBOutlet weak var user_code: NSTextField!
    @IBOutlet weak var user_area: NSTextField!
    @IBOutlet weak var user_addr: NSTextField!
    @IBOutlet weak var user_desc: NSTextField!

    var prefs:NSUserDefaults! ;
    
    var delegate :StatsDelegate!
    
    // API 接口地址
    var BASE_URL:String = "http://www.baidu.com:988/ajax.ashx"

    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do view setup here.
        prefs = NSUserDefaults.standardUserDefaults()
        
        self.getInfo()
    }
    
    func getInfo() -> String{
        var info = NSProcessInfo();
        var systemVersion:String = info.operatingSystemVersionString
        var memory = (info.physicalMemory)/1024
        memory = (memory)/1024
        memory = (memory)/1024
        var physicalMemory:String = String(memory) + "G"
        print(systemVersion + physicalMemory  )
        
        var uuid:String = NSUUID().UUIDString
    
        var peizhi = systemVersion + physicalMemory + uuid
        return peizhi
    }
    
    // 获取ip 地址
    func GetIp() ->String{
            var addresses = [String]()
            // Get list of all interfaces on the local machine:
            var ifaddr : UnsafeMutablePointer<ifaddrs> = nil
            if getifaddrs(&ifaddr) == 0 {
                
                // For each interface ...
                for (var ptr = ifaddr; ptr != nil; ptr = ptr.memory.ifa_next) {
                    let flags = Int32(ptr.memory.ifa_flags)
                    var addr = ptr.memory.ifa_addr.memory
                    
                    // Check for running IPv4, IPv6 interfaces. Skip the loopback interface.
                    if (flags & (IFF_UP|IFF_RUNNING|IFF_LOOPBACK)) == (IFF_UP|IFF_RUNNING) {
                        if addr.sa_family == UInt8(AF_INET) || addr.sa_family == UInt8(AF_INET6) {
                            
                            // Convert interface address to a human readable string:
                            var hostname = [CChar](count: Int(NI_MAXHOST), repeatedValue: 0)
                            if (getnameinfo(&addr, socklen_t(addr.sa_len), &hostname, socklen_t(hostname.count),
                                nil, socklen_t(0), NI_NUMERICHOST) == 0) {
                                    if let address = String.fromCString(hostname) {
                                        addresses.append(address)
                                    }
                            }
                        }
                    }
                }
                freeifaddrs(ifaddr)
            }
        var ip:String = "0"
        if addresses.count > 0 {
            ip = addresses[0]
        }
        print(ip)
        return ip
    }
    
    @IBAction func btn_updata(sender: AnyObject) {
        // 获取配置信息
        var name = user_name.stringValue
        var pwd = user_pwd.stringValue
        var code = user_code.stringValue
        var area = user_area.stringValue
        var addr = user_addr.stringValue
        var desc = user_desc.stringValue
        
        if name.isEmpty || pwd.isEmpty || code.isEmpty || area.isEmpty || addr.isEmpty {
            self.showDialog("请检查填写信息")
        }else{
            postInfo(name, pwd: pwd, code: code, area: area, addr: addr, desc: desc)
        }
        
    }
    @IBAction func btn_cancel(sender: AnyObject) {
        self.dismissController(self)
    }
    
    // 申请证书
    func postInfo(name:String,pwd:String,code:String,area:String,addr:String,desc:String){
        let manager = AFHTTPSessionManager();
        let pwdMd5 = pwd.md5();
        manager.responseSerializer.acceptableContentTypes =  NSSet(object: "text/plain") as Set<NSObject>
        let params = ["act":"addssl","ch999_name":name,"pwd":pwdMd5,"area":area,"weizhi":addr,"comment":desc,"zcid": code ,"ip2":self.GetIp(),"peizhi": self.getInfo()]
        print(params)
        manager.GET(BASE_URL, parameters: params, success: { (task:NSURLSessionDataTask!, data:AnyObject!) -> Void in
            let json = JSON(data);
            let stats = json["stats"]
            print(json)
            if stats == 1 {
                // 存储证书id
                    var cid =  json["id"].stringValue
                
                    self.prefs.setValue(cid, forKey: "cid")
                    self.prefs.setValue(pwd, forKey: "pwd")
                    self.prefs.setValue(name, forKey: "name")
                
                    // 申请成功
                    self.delegate.setStatsText("审核中")
                    self.dismissController(self)
                
                
            }else{
                // 申请失败
               self.showDialog(json["msg"].stringValue)
            }
            
            }) { (task:NSURLSessionDataTask!, error:NSError!) -> Void in

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
