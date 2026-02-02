//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDevice;

@protocol WCLanDeviceKissLogicDelegate <NSObject>
- (void)onDeviceFound:(WCDevice *)arg1;

@optional
- (void)onKissDeviceProgressUpdate:(double)arg1 device:(WCDevice *)arg2;
- (void)onKissDeviceWithDevice:(WCDevice *)arg1 errCode:(int)arg2;
@end

