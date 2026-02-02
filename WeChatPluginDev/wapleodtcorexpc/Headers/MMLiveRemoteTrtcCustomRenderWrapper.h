//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveRemoteTrtcCustomRenderWrapperInitParam, MMLiveTaskId, MMVideoRenderView, MMWeEffectManager, NSString, UIView;

@interface MMLiveRemoteTrtcCustomRenderWrapper : NSObject
{
    _Bool _isCustomRenderStart;
    _Bool _isFirstFrameRendered;
    _Bool _isAllowFp16;
    _Bool _isWeVisMgrCreated;
    _Bool _isStopCustomRender;
    CDUnknownBlockType _customRenderStartCallback;
    CDUnknownBlockType _customRenderFirstFrameRenderedCallback;
    CDUnknownBlockType _customRenderWillStopCallback;
    CDUnknownBlockType _customRenderStopCallback;
    CDUnknownBlockType _luaScriptJsonMessageReceiveCallback;
    MMWeEffectManager *_weeffectManager;
    NSString *_userId;
    MMLiveRemoteTrtcCustomRenderWrapperInitParam *_customParam;
    MMLiveTaskId *_taskId;
    MMVideoRenderView *_videoRenderView;
    struct CGRect _renderRect;
}

- (void).cxx_destruct;
@property _Bool isStopCustomRender; // @synthesize isStopCustomRender=_isStopCustomRender;
@property _Bool isWeVisMgrCreated; // @synthesize isWeVisMgrCreated=_isWeVisMgrCreated;
@property(nonatomic) _Bool isAllowFp16; // @synthesize isAllowFp16=_isAllowFp16;
@property(retain, nonatomic) MMVideoRenderView *videoRenderView; // @synthesize videoRenderView=_videoRenderView;
@property(nonatomic) struct CGRect renderRect; // @synthesize renderRect=_renderRect;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMLiveRemoteTrtcCustomRenderWrapperInitParam *customParam; // @synthesize customParam=_customParam;
@property _Bool isFirstFrameRendered; // @synthesize isFirstFrameRendered=_isFirstFrameRendered;
@property _Bool isCustomRenderStart; // @synthesize isCustomRenderStart=_isCustomRenderStart;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) MMWeEffectManager *weeffectManager; // @synthesize weeffectManager=_weeffectManager;
@property(copy, nonatomic) CDUnknownBlockType luaScriptJsonMessageReceiveCallback; // @synthesize luaScriptJsonMessageReceiveCallback=_luaScriptJsonMessageReceiveCallback;
@property(copy, nonatomic) CDUnknownBlockType customRenderStopCallback; // @synthesize customRenderStopCallback=_customRenderStopCallback;
@property(copy, nonatomic) CDUnknownBlockType customRenderWillStopCallback; // @synthesize customRenderWillStopCallback=_customRenderWillStopCallback;
@property(copy, nonatomic) CDUnknownBlockType customRenderFirstFrameRenderedCallback; // @synthesize customRenderFirstFrameRenderedCallback=_customRenderFirstFrameRenderedCallback;
@property(copy, nonatomic) CDUnknownBlockType customRenderStartCallback; // @synthesize customRenderStartCallback=_customRenderStartCallback;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long weffectScene;
@property(readonly, nonatomic) _Bool hasCustomRenderStarted;
@property(readonly, nonatomic) UIView *renderView;
- (void)onWeVisEffectMgrCreateCompleted;
- (void)onResourceIDVector:(id)arg1 scene:(unsigned long long)arg2;
- (void)onResourceID:(long long)arg1;
- (void)onResult:(int)arg1;
- (void)onWeEffectLuaScriptJsonMessageReceived:(id)arg1 fromSourceId:(int)arg2;
- (void)effectMgr:(id)arg1 adjustSettings:(void *)arg2;
- (void)effectMgr:(id)arg1 configSettings:(void *)arg2;
- (void)checkIsPrepareToCustomRender;
- (void)createVideoRenderView;
- (void)createWeEffectMananger;
- (void)checkFirstFrameRendered;
- (void)tagFrameRendered;
- (void)onRenderVideoFrame:(id)arg1 userId:(id)arg2;
- (void)clearData;
- (void)onCustomRenderStopFinished;
- (void)stopCustomRenderWithDelay:(_Bool)arg1;
- (void)startCustomRender;
- (void)initDefaultData;
- (id)initWithTaskId:(id)arg1 userId:(id)arg2 renderRect:(struct CGRect)arg3 param:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

