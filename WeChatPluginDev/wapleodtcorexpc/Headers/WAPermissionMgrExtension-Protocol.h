//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WAPermissionInfo;

@protocol WAPermissionMgrExtension <NSObject>

@optional
- (void)onLaunchPermissionUpdateHistoryList:(NSString *)arg1;
- (void)onGetABTestPermissionInfo:(NSArray *)arg1 isSuccess:(_Bool)arg2 errorCode:(int)arg3;
- (void)onGetPluginPermissionInfo:(NSArray *)arg1 isSuccess:(_Bool)arg2 errorCode:(int)arg3;
- (void)onGetLaunchPermissionInfo:(WAPermissionInfo *)arg1 isSuccess:(_Bool)arg2 errorCode:(int)arg3;
@end

