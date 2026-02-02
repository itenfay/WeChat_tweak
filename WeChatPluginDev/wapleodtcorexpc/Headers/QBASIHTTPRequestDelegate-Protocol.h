//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSURL, QBASIHTTPRequest;

@protocol QBASIHTTPRequestDelegate <NSObject>

@optional
- (void)proxyAuthenticationNeededForRequest:(QBASIHTTPRequest *)arg1;
- (void)authenticationNeededForRequest:(QBASIHTTPRequest *)arg1;
- (void)request:(QBASIHTTPRequest *)arg1 didReceiveData:(NSData *)arg2;
- (void)requestRedirected:(QBASIHTTPRequest *)arg1;
- (void)requestFailed:(QBASIHTTPRequest *)arg1;
- (void)requestFinished:(QBASIHTTPRequest *)arg1;
- (void)request:(QBASIHTTPRequest *)arg1 willRedirectToURL:(NSURL *)arg2;
- (void)request:(QBASIHTTPRequest *)arg1 didReceiveResponseHeaders:(NSDictionary *)arg2;
- (void)requestStarted:(QBASIHTTPRequest *)arg1;
@end

