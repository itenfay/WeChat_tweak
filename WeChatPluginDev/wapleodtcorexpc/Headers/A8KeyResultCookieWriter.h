//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSHTTPCookie, NSString, UIView;

@interface A8KeyResultCookieWriter
{
    NSString *_domain;
    UIView *_webView;
    CDUnknownBlockType _block;
    int _waitCookieCount;
    _Bool _hasWriteCompleteMarker;
    NSHTTPCookie *_checkAndRetryCookie;
    unsigned int _a8KeyCookieExpireTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int a8KeyCookieExpireTime; // @synthesize a8KeyCookieExpireTime=_a8KeyCookieExpireTime;
- (void)reportWriteA8KeyCookieWithResult:(_Bool)arg1;
- (id)buildHttpCookieWithValue:(id)arg1 forKey:(id)arg2 httpOnly:(_Bool)arg3;
- (void)callCompletedBlock:(_Bool)arg1;
- (void)handleCheckCookieWrong;
- (void)handleWriteWKCookieComplete:(id)arg1;
- (void)writeCompleteMarker;
- (void)doWriteCookie:(id)arg1;
- (void)writeCookieValue:(id)arg1 forKey:(id)arg2 needCheckAndRetry:(_Bool)arg3;
- (void)writeCookieValue:(id)arg1 forKey:(id)arg2;
- (id)initWithDomain:(id)arg1 weakWebView:(id)arg2 andCompleteBlock:(CDUnknownBlockType)arg3;

@end

