//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, MMUIViewController, NSDictionary;
@protocol WXCustomWebViewControllerProtocol;

@protocol JSEventHandler
- (MMUIViewController<WXCustomWebViewControllerProtocol> *)GetCurrentWebviewViewController;
- (void)onEndEvent:(JSEvent *)arg1 withResult:(NSDictionary *)arg2;
@end

