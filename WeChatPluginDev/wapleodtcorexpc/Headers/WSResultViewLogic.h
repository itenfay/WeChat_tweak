//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURLRequest;

@interface WSResultViewLogic
{
    NSString *_lastInputText;
    unsigned long long _lastInputTime;
}

- (void).cxx_destruct;
- (void)frequencyLimitCheck;
- (void)onJsEvaluateError:(id)arg1;
- (void)onWebViewTerminal:(id)arg1;
- (void)onWebViewFailLoad:(id)arg1 withError:(id)arg2;
- (void)onWebViewFinishedLoad:(id)arg1;
- (void)safeSendQueryChangedJSEvent:(id)arg1;
- (void)updateLocalSuggestion:(id)arg1;
- (_Bool)notifyPreCheckQuery:(id)arg1;
- (void)prepareForDetailSearch:(id)arg1;
- (id)urlFromParamsBeforeLoadFile:(id)arg1;
- (void)loadUrlRequest:(id)arg1;
- (void)loadFile:(id)arg1;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSURLRequest",?,R,N

@property(readonly) Class superclass;

@end

