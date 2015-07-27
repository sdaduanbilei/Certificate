//
//  AppDelegate.swift
//  Certificate
//
//  Created by Scorpio on 15/7/20.
//  Copyright (c) 2015年 ch999. All rights reserved.
//

import Cocoa

@NSApplicationMain
class AppDelegate: NSObject, NSApplicationDelegate {
    
    var window:NSWindow!

    func applicationDidFinishLaunching(aNotification: NSNotification) {
        // Insert code here to initialize your application
        var closeButton = self.window.standardWindowButton(NSWindowButton.CloseButton)
    }

    func applicationWillTerminate(aNotification: NSNotification) {
        // Insert code here to tear down your application
    }

    func applicationShouldTerminateAfterLastWindowClosed(sender: NSApplication) -> Bool {
        return true
    }
    
    
    
}

