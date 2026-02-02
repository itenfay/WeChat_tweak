//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMOnlineDeviceFunctionMsg, NSString;

@protocol IOnlineClientMgrExt <NSObject>

@optional
- (void)onExtDeviceSyncedDeviceNameWithMessage:(MMOnlineDeviceFunctionMsg *)arg1;
- (void)onExtDeviceNotifyUnlockWithMessage:(MMOnlineDeviceFunctionMsg *)arg1;
- (void)onExtDeviceOnlineStatusChanged;
- (void)onMarkTimelineListReadWithTid:(NSString *)arg1 andCreateTime:(unsigned long long)arg2;
- (void)onOnlineInfoUpdated;
- (void)onLogoutWebFailed;
- (void)onLogoutWeb;
- (void)onLoginWeb;
@end

