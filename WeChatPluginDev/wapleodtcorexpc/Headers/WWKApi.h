//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WWKApi : NSObject
{
}

+ (_Bool)sendReq:(id)arg1 appType:(long long)arg2;
+ (_Bool)isAppInstalled:(long long)arg1;
+ (_Bool)p_isAppInstalledWithScheme:(id)arg1;
+ (_Bool)canOpenURL:(id)arg1;
+ (_Bool)openURL:(id)arg1;
+ (_Bool)sendObj:(id)arg1 scheme:(id)arg2;
+ (_Bool)sendObj:(id)arg1;
+ (_Bool)sendReq:(id)arg1;
+ (_Bool)openChatList;
+ (_Bool)openCreateChat;
+ (id)getProtocolVersion;
+ (id)getApiVersion;
+ (id)getAppInstallUrl;
+ (_Bool)isAppSupportUrlDataIsGov:(_Bool)arg1;
+ (_Bool)isAppSupportSendBuffer;
+ (_Bool)isAppSupportSendSeparateMessages;
+ (_Bool)isAppInstalled;
+ (_Bool)handleOpenUrlString:(id)arg1;
+ (_Bool)registerApp:(id)arg1 corpId:(id)arg2 agentId:(id)arg3;
+ (_Bool)registerApp:(id)arg1;
- (_Bool)canOpenURL:(id)arg1;
- (_Bool)openURL:(id)arg1;

@end

