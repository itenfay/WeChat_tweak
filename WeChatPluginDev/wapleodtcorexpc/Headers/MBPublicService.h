//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSPointerArray, NSString;

@interface MBPublicService
{
    _Bool _invalid;
    _Bool _isPrepared;
    NSString *_alias;
    NSPointerArray *_pendingBizArray;
    NSMutableDictionary *_canvasIdToBizName;
    NSMutableDictionary *_canvasIdToPendingEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *canvasIdToPendingEvent; // @synthesize canvasIdToPendingEvent=_canvasIdToPendingEvent;
@property(retain, nonatomic) NSMutableDictionary *canvasIdToBizName; // @synthesize canvasIdToBizName=_canvasIdToBizName;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(retain, nonatomic) NSPointerArray *pendingBizArray; // @synthesize pendingBizArray=_pendingBizArray;
@property(nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(readonly, copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasFrameChanged:(unsigned int)arg1 view:(id)arg2 frame:(struct CGRect)arg3;
- (void)onCanvasDestroyed:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasCreated:(unsigned int)arg1 view:(id)arg2;
- (id)getBizForCanvasId:(unsigned int)arg1;
- (void)bindCanvas:(unsigned int)arg1 withBiz:(id)arg2;
- (void)receiveMessage:(id)arg1 fromBiz:(id)arg2;
- (void)postMessage:(id)arg1 toBiz:(id)arg2;
- (void)unbindBiz:(id)arg1;
- (void)bindBiz:(id)arg1;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCreated;
- (void)provideMainScript:(CDUnknownBlockType)arg1;
- (void)destroy;
- (id)initWithInfo:(id)arg1 internalImpl:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

