//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <WebKit/WKWebView.h>

@interface WKWebView (YYWKGameScheme)
+ (void)markShouldHookContext:(_Bool)arg1;
+ (_Bool)isInShouldHookContext;
+ (_Bool)mmgame_handlesURLScheme:(id)arg1;
+ (_Bool)isSchemeHttpOrHttps:(id)arg1;
+ (_Bool)mmgame_enableCustomScheme;
@end

