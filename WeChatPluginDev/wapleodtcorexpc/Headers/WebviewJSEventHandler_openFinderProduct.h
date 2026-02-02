//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAAppIdToUsernameTransfer;

@interface WebviewJSEventHandler_openFinderProduct
{
    WAAppIdToUsernameTransfer *_appIDTransfer;
}

- (void).cxx_destruct;
- (void)openFinderProductWithUserName:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5 adUxInfo:(id)arg6 productParam:(id)arg7;
- (void)openFinderProductWithAppID:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5 adUxInfo:(id)arg6 productParam:(id)arg7;
- (void)endWithOK;
- (void)endErrorWithMessage:(id)arg1;
- (id)jsapiName;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

