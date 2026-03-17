//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSURLResponse, WAApptaskPublicResLogic, WKWebView;

@protocol WAVConsoleWebLogicControllerDelegate <NSObject>
- (WAApptaskPublicResLogic *)fetchPublicResLogic;
- (void)webViewControllerDidFinishLoad:(WKWebView *)arg1 dic:(NSDictionary *)arg2;
- (void)webViewControllerDidRecieveResponse:(NSURLResponse *)arg1 webview:(WKWebView *)arg2 isMainFrame:(_Bool)arg3;
- (void)webViewControllerDidStartLoad:(WKWebView *)arg1;
@end

