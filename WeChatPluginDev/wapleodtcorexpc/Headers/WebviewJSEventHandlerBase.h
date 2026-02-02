//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString;
@protocol WebviewJSEventHandlerBaseDelegate;

@interface WebviewJSEventHandlerBase
{
    id <WebviewJSEventHandlerBaseDelegate> m_delegate;
    JSEvent *_currentEvent;
    long long _vcScene;
}

- (void).cxx_destruct;
@property(nonatomic) long long vcScene; // @synthesize vcScene=_vcScene;
@property(retain, nonatomic) JSEvent *currentEvent; // @synthesize currentEvent=_currentEvent;
@property(nonatomic) __weak id <WebviewJSEventHandlerBaseDelegate> m_delegate; // @synthesize m_delegate;
- (void)dealloc;
- (id)mmWebViewController;
- (id)wxBaseWebViewController;
- (id)webviewController;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)gameGetAppIdFromdict:(id)arg1;
@property(nonatomic) _Bool isFromJsCore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

