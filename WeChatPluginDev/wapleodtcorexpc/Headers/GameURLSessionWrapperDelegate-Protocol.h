//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSURLResponse, NSURLSessionDataTask, WKHTTPCookieStore;
@protocol WKURLSchemeTask;

@protocol GameURLSessionWrapperDelegate <NSObject>
- (WKHTTPCookieStore *)webViewCookieStore;

@optional
- (void)urlSessionWrapperWithTask:(id <WKURLSchemeTask>)arg1 didCompleteWithError:(NSError *)arg2;
- (void)urlSessionWrapperWithTask:(id <WKURLSchemeTask>)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveData:(NSData *)arg3;
- (void)urlSessionWrapperWithTask:(id <WKURLSchemeTask>)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveResponse:(NSURLResponse *)arg3;
@end

