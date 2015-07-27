//
//  DownloadUtil.swift
//  Certificate
//
//  Created by Scorpio on 15/7/22.
//  Copyright (c) 2015年 ch999. All rights reserved.
//

import Cocoa

class DownloadUtil {
    class func loadFileSync(url: NSURL, completion:(path:String, error:NSError!) -> Void) {
        let documentsUrl =  NSFileManager.defaultManager().URLsForDirectory(.DocumentDirectory, inDomains: .UserDomainMask).first as! NSURL
        let destinationUrl = documentsUrl.URLByAppendingPathComponent(url.lastPathComponent!)
        if NSFileManager().fileExistsAtPath(destinationUrl.path!) {
            println("file already exists [\(destinationUrl.path!)]")
            completion(path: destinationUrl.path!, error:nil)
        } else if let dataFromURL = NSData(contentsOfURL: url){
            if dataFromURL.writeToURL(destinationUrl, atomically: true) {
                println("file saved [\(destinationUrl.path!)]")
                completion(path: destinationUrl.path!, error:nil)
            } else {
                println("error saving file")
                let error = NSError(domain:"Error saving file", code:1001, userInfo:nil)
                completion(path: destinationUrl.path!, error:error)
            }
        } else {
            let error = NSError(domain:"Error downloading file", code:1002, userInfo:nil)
            completion(path: destinationUrl.path!, error:error)
        }
    }
    
    class func loadFileAsync(url: NSURL, completion:(path:String, error:NSError!) -> Void) {
        let documentsUrl =  NSFileManager.defaultManager().URLsForDirectory(.DocumentDirectory, inDomains: .UserDomainMask).first as! NSURL
        let destinationUrl = documentsUrl.URLByAppendingPathComponent(url.lastPathComponent!)
        if NSFileManager().fileExistsAtPath(destinationUrl.path!) {
            println("file already exists [\(destinationUrl.path!)]")
            completion(path: destinationUrl.path!, error:nil)
        } else {
            let sessionConfig = NSURLSessionConfiguration.defaultSessionConfiguration()
            let session = NSURLSession(configuration: sessionConfig, delegate: nil, delegateQueue: nil)
            let request = NSMutableURLRequest(URL: url)
            request.HTTPMethod = "GET"
            let task = session.dataTaskWithRequest(request, completionHandler: { (data: NSData!, response: NSURLResponse!, error: NSError!) -> Void in
                if (error == nil) {
                    if let response = response as? NSHTTPURLResponse {
                        println("response=\(response)")
                        if response.statusCode == 200 {
                            if data.writeToURL(destinationUrl, atomically: true) {
                                println("file saved [\(destinationUrl.path!)]")
                                completion(path: destinationUrl.path!, error:error)
                            } else {
                                println("error saving file")
                                let error = NSError(domain:"Error saving file", code:1001, userInfo:nil)
                                completion(path: destinationUrl.path!, error:error)
                            }
                        }
                    }
                }
                else {
                    println("Failure: \(error.localizedDescription)");
                    completion(path: destinationUrl.path!, error:error)
                }
            })
            task.resume()
        }
    }
}