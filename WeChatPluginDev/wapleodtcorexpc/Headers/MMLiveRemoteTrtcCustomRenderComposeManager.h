//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, CIContext, MMFinderLiveTask, MMLiveRemoteTrtcCustomRenderComposeInitParam, MMLiveRemoteTrtcCustomRenderComposeMetricsMonitor, MMLiveTaskId, MMWeEffectManager, NSMutableDictionary, NSString, UIView;

@interface MMLiveRemoteTrtcCustomRenderComposeManager : NSObject
{
    _Bool _isCustomRenderStart;
    _Bool _isFirstFrameRendered;
    _Bool _isAllowFp16;
    _Bool _isWeVisMgrCreated;
    _Bool _isStopCustomRender;
    _Bool _isRenderPrepareWaitOverTime;
    int _autoInvokeRemainFrame;
    MMWeEffectManager *_weeffectManager;
    double _preferScaleRatio;
    CDUnknownBlockType _startCallback;
    CDUnknownBlockType _firstFrameRenderedCallback;
    CDUnknownBlockType _trtcUserFirstFrameRenderedCallback;
    CDUnknownBlockType _willStopCallback;
    CDUnknownBlockType _stopCallback;
    CDUnknownBlockType _weeffectMsgReceiveCallback;
    CDUnknownBlockType _trtcUserRenderStopCallback;
    CDUnknownBlockType _trtcUserRenderReqRenderSizeCallback;
    CDUnknownBlockType _destroyCallback;
    CDUnknownBlockType _requestDisplayImagesCallback;
    CDUnknownBlockType _checkIsCurrTopPerfLevelCallback;
    CDUnknownBlockType _increasePerfLevelCallback;
    CDUnknownBlockType _decreasePerfLevelCallback;
    CDUnknownBlockType _checkTimeRangeIsFullLoadCallback;
    CDUnknownBlockType _surviveOverTimeCallback;
    CDUnknownBlockType _maxSupportCntChangeCallback;
    CDUnknownBlockType _checkCanSurviveCallback;
    unsigned long long _maxSupportComposeCnt;
    unsigned long long _invokeMode;
    MMLiveTaskId *_liveTaskId;
    MMLiveRemoteTrtcCustomRenderComposeInitParam *_param;
    UIView *_videoRenderView;
    NSMutableDictionary *_remoteTrtcCustomRenderContextDict;
    CADisplayLink *_autoInvokeDisplayLink;
    unsigned long long _renderFrameCnt;
    CIContext *_tranferContext;
    MMLiveRemoteTrtcCustomRenderComposeMetricsMonitor *_metricsMonitor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveRemoteTrtcCustomRenderComposeMetricsMonitor *metricsMonitor; // @synthesize metricsMonitor=_metricsMonitor;
@property(retain, nonatomic) CIContext *tranferContext; // @synthesize tranferContext=_tranferContext;
@property _Bool isRenderPrepareWaitOverTime; // @synthesize isRenderPrepareWaitOverTime=_isRenderPrepareWaitOverTime;
@property unsigned long long renderFrameCnt; // @synthesize renderFrameCnt=_renderFrameCnt;
@property int autoInvokeRemainFrame; // @synthesize autoInvokeRemainFrame=_autoInvokeRemainFrame;
@property(retain, nonatomic) CADisplayLink *autoInvokeDisplayLink; // @synthesize autoInvokeDisplayLink=_autoInvokeDisplayLink;
@property(retain, nonatomic) NSMutableDictionary *remoteTrtcCustomRenderContextDict; // @synthesize remoteTrtcCustomRenderContextDict=_remoteTrtcCustomRenderContextDict;
@property _Bool isStopCustomRender; // @synthesize isStopCustomRender=_isStopCustomRender;
@property _Bool isWeVisMgrCreated; // @synthesize isWeVisMgrCreated=_isWeVisMgrCreated;
@property(nonatomic) _Bool isAllowFp16; // @synthesize isAllowFp16=_isAllowFp16;
@property(retain, nonatomic) UIView *videoRenderView; // @synthesize videoRenderView=_videoRenderView;
@property(retain, nonatomic) MMLiveRemoteTrtcCustomRenderComposeInitParam *param; // @synthesize param=_param;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) unsigned long long invokeMode; // @synthesize invokeMode=_invokeMode;
@property unsigned long long maxSupportComposeCnt; // @synthesize maxSupportComposeCnt=_maxSupportComposeCnt;
@property(copy, nonatomic) CDUnknownBlockType checkCanSurviveCallback; // @synthesize checkCanSurviveCallback=_checkCanSurviveCallback;
@property(copy, nonatomic) CDUnknownBlockType maxSupportCntChangeCallback; // @synthesize maxSupportCntChangeCallback=_maxSupportCntChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType surviveOverTimeCallback; // @synthesize surviveOverTimeCallback=_surviveOverTimeCallback;
@property(copy, nonatomic) CDUnknownBlockType checkTimeRangeIsFullLoadCallback; // @synthesize checkTimeRangeIsFullLoadCallback=_checkTimeRangeIsFullLoadCallback;
@property(copy, nonatomic) CDUnknownBlockType decreasePerfLevelCallback; // @synthesize decreasePerfLevelCallback=_decreasePerfLevelCallback;
@property(copy, nonatomic) CDUnknownBlockType increasePerfLevelCallback; // @synthesize increasePerfLevelCallback=_increasePerfLevelCallback;
@property(copy, nonatomic) CDUnknownBlockType checkIsCurrTopPerfLevelCallback; // @synthesize checkIsCurrTopPerfLevelCallback=_checkIsCurrTopPerfLevelCallback;
@property(copy, nonatomic) CDUnknownBlockType requestDisplayImagesCallback; // @synthesize requestDisplayImagesCallback=_requestDisplayImagesCallback;
@property(copy, nonatomic) CDUnknownBlockType destroyCallback; // @synthesize destroyCallback=_destroyCallback;
@property(copy, nonatomic) CDUnknownBlockType trtcUserRenderReqRenderSizeCallback; // @synthesize trtcUserRenderReqRenderSizeCallback=_trtcUserRenderReqRenderSizeCallback;
@property(copy, nonatomic) CDUnknownBlockType trtcUserRenderStopCallback; // @synthesize trtcUserRenderStopCallback=_trtcUserRenderStopCallback;
@property(copy, nonatomic) CDUnknownBlockType weeffectMsgReceiveCallback; // @synthesize weeffectMsgReceiveCallback=_weeffectMsgReceiveCallback;
@property(copy, nonatomic) CDUnknownBlockType stopCallback; // @synthesize stopCallback=_stopCallback;
@property(copy, nonatomic) CDUnknownBlockType willStopCallback; // @synthesize willStopCallback=_willStopCallback;
@property(copy, nonatomic) CDUnknownBlockType trtcUserFirstFrameRenderedCallback; // @synthesize trtcUserFirstFrameRenderedCallback=_trtcUserFirstFrameRenderedCallback;
@property(copy, nonatomic) CDUnknownBlockType firstFrameRenderedCallback; // @synthesize firstFrameRenderedCallback=_firstFrameRenderedCallback;
@property(copy, nonatomic) CDUnknownBlockType startCallback; // @synthesize startCallback=_startCallback;
@property(nonatomic) double preferScaleRatio; // @synthesize preferScaleRatio=_preferScaleRatio;
@property _Bool isFirstFrameRendered; // @synthesize isFirstFrameRendered=_isFirstFrameRendered;
@property _Bool isCustomRenderStart; // @synthesize isCustomRenderStart=_isCustomRenderStart;
@property(retain, nonatomic) MMWeEffectManager *weeffectManager; // @synthesize weeffectManager=_weeffectManager;
- (_Bool)isRenderViewNeedDisableOpaque;
- (_Bool)useSharedRenderContext;
- (unsigned long long)workingMode;
- (unsigned long long)prepareWaitMaxFrames;
@property(readonly, nonatomic) long long weffectScene;
@property(readonly, nonatomic) _Bool hasCustomRenderStarted;
@property(readonly, nonatomic) UIView *renderView;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (void)onWeVisEffectMgrCreateCompleted;
- (void)onResourceIDVector:(id)arg1 scene:(unsigned long long)arg2;
- (void)onResourceID:(long long)arg1;
- (void)onResult:(int)arg1;
- (void)onWeEffectLuaScriptJsonMessageReceived:(id)arg1 fromSourceId:(int)arg2;
- (void)effectMgr:(id)arg1 adjustSettings:(void *)arg2;
- (void)effectMgr:(id)arg1 configSettings:(void *)arg2;
- (id)getVisRenderContext;
- (long long)autoRefreshFrameRate;
- (_Bool)checkCanSurviveAfterRenderStop;
- (void)onSurviveOverTime;
- (id)getCustomComposeRenderContextWrapper;
- (void)createTransferContextIfNeed;
- (id)transferImageToPixelbuffer:(id)arg1;
- (void)increaseRenderFrame;
- (struct CGSize)getOutputSize;
- (void)_render;
- (double)getScaleRatio;
- (void)onWeeffectFramesProcessCompleted:(id)arg1;
- (_Bool)isCurrentInvokeModeSupportRenderContext:(id)arg1;
- (id)getCurrRenderWeeffectFrames;
- (id)createRenderContextForUser:(id)arg1;
- (void)requestDisplayImagesForUserIdList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createPixelBufferFromDisplaySurfaceForUnValidRenderContext;
- (void)checkRenderPrepareCompleteWaitOverTime;
- (_Bool)checkAllRenderContextPrepareCompleteIfNeed;
- (void)notifyTrtcUsersRenderStop:(id)arg1;
- (void)notifyTrtcUsersFirstFrameRendered:(id)arg1;
- (void)notifyFirstFrameRendered;
- (void)tagFrameRendered:(id)arg1;
- (void)updateMaxSupportComposeCnt;
- (void)createVideoRenderView;
- (void)createWeEffectMananger;
- (void)initWeEffectData;
- (void)autoInvokeWithDisplayLink:(id)arg1;
- (void)stopAutoInvokeDisplayLink;
- (void)startAutoInvokeDisplayLink;
- (_Bool)supportOuterTexture;
- (_Bool)needInvokeByOuter;
- (void)stopAutoInvokeRender;
- (void)startAutoInvokeRender;
- (void)invokeRender;
- (void)onRefreshRenderFrame:(id)arg1 userId:(id)arg2;
- (void)onRefreshPixelBuffer:(struct __CVBuffer *)arg1 userId:(id)arg2;
- (void)prepareForRenderStart;
- (void)clearData;
- (void)cancelCustomRenderStop;
- (void)onCustomRenderStopFinished;
- (double)getWeVisMgrCreateTime;
- (void)destroy;
- (_Bool)stopCustomRenderWithDelay:(_Bool)arg1;
- (_Bool)startCustomRenderWithUserList:(id)arg1;
- (id)getTrtcCustomRenderContextList;
- (id)getTrtcCustomRenderUserIdList;
- (id)getCustomRenderTrtcUser:(id)arg1;
- (_Bool)hasTrtcUserFirstFrameFromCapture;
- (_Bool)isTrtcUserFirstFrameFromCapture:(id)arg1;
- (_Bool)isTrtcUserFirstFrameRendered:(id)arg1;
- (_Bool)checkTrtcCustomComposeOverMaxSupportCnt;
- (_Bool)hasTrtcCustomRenderUser;
- (unsigned long long)getCustomRenderSrcFormatForTrtcUser:(id)arg1;
- (_Bool)isTrtcUserCustomRenderWithUsrName:(id)arg1;
- (_Bool)isTrtcUserCustomRender:(id)arg1;
- (void)removeAllCustomRenderTrtcUsers;
- (void)removeCustomRenderTrtcUser:(id)arg1;
- (_Bool)addTrtcUserToCustomRender:(id)arg1;
- (unsigned long long)addTrtcUserListToCustomRender:(id)arg1;
- (unsigned long long)updateTrtcCustomRenderUserList:(id)arg1;
- (void)initDefaultData;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 initParam:(id)arg2;
- (double)getRecentAverageFootPrintMemoryPercent:(id)arg1;
- (double)getSurviveDuration;
- (void)cancelSurviveCountDown;
- (void)startSurviveCountDown;
- (void)onCustomComposeRenderStop;
- (void)onCustomComposeRenderStart;
- (void)onRenderEnd;
- (void)onRenderBegin;
- (void)initMetricsReportData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

