//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMIotNavigateInfo, MMIotWordingInfo, SSVMiniAppRedirectInfo, WCDevice;

@protocol MsgToDeviceDelegate <NSObject>
- (void)onMsgToDeviceSending:(WCDevice *)arg1 progress:(double)arg2;
- (void)onMsgToDeviceFail:(WCDevice *)arg1 type:(long long)arg2 errorInfo:(MMIotWordingInfo *)arg3;
- (void)onMsgToDeviceSuccess:(WCDevice *)arg1;

@optional
- (void)onMsgToDeviceSuccessToSSV:(SSVMiniAppRedirectInfo *)arg1;
- (void)onMsgToDeviceSuccessToWeApp:(MMIotNavigateInfo *)arg1;
@end

