//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WAPermissionHandlerDelegate <NSObject>
- (void)onUserTransferAuthDidCompeleteWithJSAPIName:(NSString *)arg1 transferHandler:(void (^)(NSDictionary *))arg2 result:(NSDictionary *)arg3 scene:(unsigned long long)arg4;
- (void)onPluginPermissionInfoUpdate;
- (void)onLaunchPermissionInfoUpdate;
- (void)onUserAuthFailWithJSAPI:(NSString *)arg1 failHandler:(void (^)(NSString *, unsigned int))arg2 errMsg:(NSString *)arg3 errNo:(unsigned int)arg4 scene:(unsigned long long)arg5;
- (void)onUserAuthOKWithJSAPI:(NSString *)arg1 handler:(void (^)(void))arg2 scene:(unsigned long long)arg3;
@end

