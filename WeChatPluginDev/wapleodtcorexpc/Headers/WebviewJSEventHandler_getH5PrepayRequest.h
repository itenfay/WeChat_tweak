//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString;

@interface WebviewJSEventHandler_getH5PrepayRequest
{
    NSString *_jsInjectCode;
    JSEvent *m_jsEvent;
    _Bool m_isNativeCashier;
}

- (void).cxx_destruct;
- (void)call:(id)arg1;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doInjectJS;
- (void)getJumpUrl:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)sendResult:(_Bool)arg1 jsEvent:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

