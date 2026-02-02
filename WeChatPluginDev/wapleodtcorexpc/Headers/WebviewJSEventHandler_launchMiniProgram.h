//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAAppIdToUsernameTransfer;

@interface WebviewJSEventHandler_launchMiniProgram
{
    WAAppIdToUsernameTransfer *_appIDTransfer;
    _Bool _silentOpen;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool silentOpen; // @synthesize silentOpen=_silentOpen;
- (void)launchMiniProgramWithUserName:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5 adUxInfo:(id)arg6 commonUxInfo:(id)arg7 launchParam:(id)arg8;
- (void)launchMiniProgramWithAppID:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5 adUxInfo:(id)arg6 commonUxInfo:(id)arg7 launchParam:(id)arg8;
- (void)endWithOK;
- (void)endErrorWithMessage:(id)arg1;
- (id)jsapiName;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

