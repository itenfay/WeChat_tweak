//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WCDevice;

@protocol IWCLanDeviceMsgForwardMgrExt <NSObject>

@optional
- (void)onWCLanDeviceForwardMsgProgressUpdate:(double)arg1 toDevice:(WCDevice *)arg2;
- (void)onWCLanDeviceForwardMsgFinishedWithErrCode:(int)arg1 toDevice:(WCDevice *)arg2;
- (void)onWCLanDeviceFoundDeviceListUpdated:(NSArray *)arg1;
@end

