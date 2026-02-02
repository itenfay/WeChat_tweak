//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface FBSDKTestUsersManager : NSObject
{
    NSString *_appID;
    NSString *_appSecret;
    NSMutableDictionary *_accounts;
}

+ (id)sharedInstanceForAppID:(id)arg1 appSecret:(id)arg2;
- (void).cxx_destruct;
- (void)fetchExistingTestAccountsWithAfterCursor:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)appAccessToken;
- (id)userIdAndTokenOfExistingAccountWithPermissions:(id)arg1 skip:(id)arg2;
- (id)tokenDataForTokenString:(id)arg1 permissions:(id)arg2 userId:(id)arg3;
- (void)removeTestAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)makeFriendsWithFirst:(id)arg1 second:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)addTestAccountWithPermissions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestTestAccountTokensWithArraysOfPermissions:(id)arg1 createIfNotFound:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithAppID:(id)arg1 appSecret:(id)arg2;

@end

