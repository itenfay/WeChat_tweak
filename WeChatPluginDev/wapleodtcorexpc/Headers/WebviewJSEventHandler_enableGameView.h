//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WebviewJSEventHandler_enableGameView
{
    int m_gameOrientation;
    NSString *m_url;
    NSString *m_gameAppid;
    _Bool m_hideBottomBar;
}

- (void).cxx_destruct;
- (void)webViewReturn:(id)arg1;
- (void)onGameViewClosed;
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

