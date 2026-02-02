//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAContactGetter;

@interface WebviewJSEventHandler_openBusinessView
{
    WAContactGetter *_contactGetter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doOpenWeAppWithRequest:(id)arg1 response:(id)arg2 contact:(id)arg3 context:(id)arg4;
- (void)handleAuthorizationForLaunchResponse:(id)arg1;
- (void)requestAuthorizationForLaunch:(id)arg1 queryStr:(id)arg2 referrerAppId:(id)arg3 context:(id)arg4;
- (void)endWithResult:(id)arg1 errCode:(long long)arg2 extraData:(id)arg3;
- (void)endWithSuccessExtraData:(id)arg1;
- (void)endWithError:(id)arg1 errCode:(long long)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

