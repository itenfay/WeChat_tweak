//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameWebViewRecord, NSString;

@interface GameWebViewLifeManager
{
    GameWebViewRecord *_webviewRecord;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameWebViewRecord *webviewRecord; // @synthesize webviewRecord=_webviewRecord;
- (id)getTopWebViewController;
- (void)notifyJsCoreStateChange:(id)arg1;
- (void)postMessageToWebView:(id)arg1 msg:(id)arg2;
- (void)dispatchPageState:(id)arg1 pageId:(id)arg2 url:(id)arg3 dispatchEvent:(_Bool)arg4;
- (void)dispatchPageState:(id)arg1 pageId:(id)arg2 url:(id)arg3;
- (void)onWebViewDestroy:(id)arg1 dispatchEvent:(_Bool)arg2;
- (void)onWebViewBackground:(id)arg1 dispatchEvent:(_Bool)arg2;
- (void)onWebViewForeground:(id)arg1 dispatchEvent:(_Bool)arg2;
- (void)onWebViewCreate:(id)arg1 dispatchEvent:(_Bool)arg2;
- (void)removeWebViewRecord:(id)arg1;
- (void)recordWebView:(id)arg1;
- (void)onServiceClearData;
- (id)pageId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

