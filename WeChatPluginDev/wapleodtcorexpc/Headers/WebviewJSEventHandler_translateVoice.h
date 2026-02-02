//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, VoiceTransHelper;

@interface WebviewJSEventHandler_translateVoice
{
    VoiceTransHelper *_transHelper;
    NSString *_transResult;
    _Bool _isShowProgressTips;
}

- (void).cxx_destruct;
- (void)onVoiceTransFail:(id)arg1 baseResponse:(id)arg2;
- (void)onVoiceTransEnd:(id)arg1 FromCache:(_Bool)arg2;
- (void)onVoiceTransVoiceID:(id)arg1 transResult:(id)arg2;
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

