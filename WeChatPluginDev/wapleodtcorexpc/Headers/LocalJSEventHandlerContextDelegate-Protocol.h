//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LocalJSEventHandler_BaseEvent, NSDictionary, NSString, WKWebView;
@protocol WSWebViewPluginableProtocol, YYWebViewInterface;

@protocol LocalJSEventHandlerContextDelegate <NSObject>
- (id <WSWebViewPluginableProtocol>)getWebViewOwner;
- (unsigned long long)getLocalJSBusinessType;
- (WKWebView<YYWebViewInterface> *)webView;
- (void)sendEvent:(NSString *)arg1 handler:(LocalJSEventHandler_BaseEvent *)arg2 result:(NSDictionary *)arg3;
- (void)eventEndWithHandler:(LocalJSEventHandler_BaseEvent *)arg1 result:(NSDictionary *)arg2;

@optional
- (void)handlerEndWithEvent:(NSString *)arg1 handler:(LocalJSEventHandler_BaseEvent *)arg2 result:(NSDictionary *)arg3;
@end

