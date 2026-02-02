//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WKWebView;
@protocol WKURLSchemeTask;

@protocol WKURLSchemeHandler <NSObject>
- (void)webView:(WKWebView *)arg1 stopURLSchemeTask:(id <WKURLSchemeTask>)arg2;
- (void)webView:(WKWebView *)arg1 startURLSchemeTask:(id <WKURLSchemeTask>)arg2;
@end

