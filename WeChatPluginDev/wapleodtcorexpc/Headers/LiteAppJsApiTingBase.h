//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WebviewJSEventHandlerTingBase;

@interface LiteAppJsApiTingBase
{
    WebviewJSEventHandlerTingBase *_tingHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WebviewJSEventHandlerTingBase *tingHandler; // @synthesize tingHandler=_tingHandler;
- (id)GetCurrentWebviewViewController;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (id)genTingEventHandler;
- (id)tingEventPlugin;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

@end

