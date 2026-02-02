//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoIPTokenIDkeyReport : NSObject
{
}

+ (void)reportAuthStatus:(id)arg1;
+ (void)tokenRegisterCacheTokenNil;
+ (void)tokenRegisterUsingCacheToken;
+ (void)tokenRegisterCgiResponseOk;
+ (void)tokenRegisterCgiResponseError;
+ (void)tokenRegisterCgiResponseEmpty;
+ (void)tokenRegisterCgiConnectTimeout;
+ (void)tokenRegisterCgiCallbackEmpty;
+ (void)tokenRegisterCgiSent;
+ (void)tokenRegisterCgiCreateError;
+ (void)tokenRegisterSettingSandbox;
+ (void)tokenRegisterSettingAppStore;
+ (void)tokenRegisterCertWC;
+ (void)tokenRegisterCertAppStore;
+ (void)tokenRegisterTokenEmpty;
+ (void)pushReceiveBroadcast;
+ (void)pushReceiveCmdEmpty;
+ (void)pushReceiveCmdTypeError;
+ (void)pushReceiveContentEmpty;
+ (void)tokenCallbackTokenInvaildate;
+ (void)tokenCallbackTokenTypeOk;
+ (void)tokenCallbackTokenNotVoipType;
+ (void)tokenCallbackNotVoipType;
+ (void)registerPushKit;
+ (void)reportId:(int)arg1 Key:(int)arg2;

@end

