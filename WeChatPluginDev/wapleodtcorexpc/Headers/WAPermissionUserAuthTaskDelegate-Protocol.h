//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WAPermissionUserAuthInfo, WAPermissionUserAuthTask;

@protocol WAPermissionUserAuthTaskDelegate <NSObject>
- (void)onTransferAuthDidCompelete:(WAPermissionUserAuthTask *)arg1 jsapiName:(NSString *)arg2 transferHandler:(void (^)(NSDictionary *))arg3 result:(NSDictionary *)arg4 scene:(unsigned long long)arg5;
- (void)authTaskComplete:(WAPermissionUserAuthTask *)arg1;
- (void)authFailWithJSAPI:(NSString *)arg1 failHandler:(void (^)(NSString *, unsigned int))arg2 errMsg:(NSString *)arg3 errNo:(unsigned int)arg4 scene:(unsigned long long)arg5;
- (void)authOKWithJSAPI:(NSString *)arg1 handler:(void (^)(void))arg2 scene:(unsigned long long)arg3;
- (void)saveAuthInfo:(WAPermissionUserAuthInfo *)arg1 withJSAPI:(NSString *)arg2;
- (WAPermissionUserAuthInfo *)getAuthInfoWithJSAPI:(NSString *)arg1;
@end

