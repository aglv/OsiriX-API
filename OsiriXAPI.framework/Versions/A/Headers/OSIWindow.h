/*=========================================================================
 Program:   OsiriX
 Copyright (c) 2010 - 2018 Pixmeo SARL
 266 rue de Bernex
 CH-1233 Bernex
 Switzerland
 All rights reserved.
 =========================================================================*/

#import <Cocoa/Cocoa.h>

@interface OSIWindow : NSWindow
{
    int protectionMakeKeyAndOrderFront;
}

+ (void) setDontConstrainWindow: (BOOL) v;

@end