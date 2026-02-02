//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterUserInfo, NSNumber, NSString;

@protocol FlutterAccountHost
- (NSNumber *)isOverseaUserWithError:(id *)arg1;
- (NSNumber *)isTeenModeWithError:(id *)arg1;
- (void)getUserInfoUsername:(NSString *)arg1 hd:(_Bool)arg2 completion:(void (^)(UserInfoResponse *, FlutterError *))arg3;
- (void)removeForwardUserInfo:(FlutterUserInfo *)arg1 error:(id *)arg2;
- (void)getRecentForwardUserInfoMaxCount:(long long)arg1 ignoreChatRoom:(_Bool)arg2 completion:(void (^)(NSArray *, FlutterError *))arg3;
- (void)getAvatarInfoUsername:(NSString *)arg1 hd:(_Bool)arg2 completion:(void (^)(AvatarInfo *, FlutterError *))arg3;
- (NSString *)getDisplayNameUsername:(NSString *)arg1 error:(id *)arg2;
- (NSString *)getUinWithError:(id *)arg1;
- (NSString *)getSelfUsernameWithError:(id *)arg1;
@end

