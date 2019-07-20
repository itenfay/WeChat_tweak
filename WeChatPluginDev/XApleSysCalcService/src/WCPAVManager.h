//
// WCPAVManager.h
//
// Created by dyf on 17/6/9.
// Copyright © 2017 dyf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface WCPAVManager : NSObject

+ (WCPAVManager *)shareManager;

- (void)startCaptureInView:(UIView *)preview;

- (void)stop;

@end
