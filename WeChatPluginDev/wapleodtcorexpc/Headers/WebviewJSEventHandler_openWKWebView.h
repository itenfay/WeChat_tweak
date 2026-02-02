//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class H5GameViewController, NSString;

@interface WebviewJSEventHandler_openWKWebView
{
    _Bool m_bFullScreen;
    NSString *m_orientation;
    NSString *m_url;
    NSString *m_gameAppid;
    H5GameViewController *_gameVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak H5GameViewController *gameVC; // @synthesize gameVC=_gameVC;
- (void)webViewReturn:(id)arg1;
- (void)onGameViewClosed;
- (void)internalEnterGame;
- (void)enterGame;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

