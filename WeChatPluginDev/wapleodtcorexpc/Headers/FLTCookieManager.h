//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WKHTTPCookieStore;

@interface FLTCookieManager : NSObject
{
    WKHTTPCookieStore *_httpCookieStore;
}

+ (void)registerWithRegistrar:(id)arg1;
+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) WKHTTPCookieStore *httpCookieStore; // @synthesize httpCookieStore=_httpCookieStore;
- (void)setCookieForResult:(CDUnknownBlockType)arg1 arguments:(id)arg2;
- (void)setCookieForData:(id)arg1;
- (void)setCookiesForData:(id)arg1;
- (void)clearCookies:(CDUnknownBlockType)arg1;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

