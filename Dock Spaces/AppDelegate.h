//
//  AppDelegate.h
//  Dock Spaces
//
//  Created by SAADA on 1/26/14.
//  Copyright (c) 2014 Mahmoud Saada. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    IBOutlet NSMenu *statusMenu;
    NSStatusItem *statusItem;
    NSImage *statusImage;
}


@end
