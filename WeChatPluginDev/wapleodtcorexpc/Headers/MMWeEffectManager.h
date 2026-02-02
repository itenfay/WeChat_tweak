//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnRenderContextWrapper, EAGLContext, MMOpenGLContext, NSString, VisEffectRenderContextWrapper, WCLoopMetricsCollector, WeVisLiveEffectMgr, WeeffectRenderContextWrapper, XImageContext;
@protocol WeEffectEnergyController, WeEffectManagerResultDelegate;

@interface MMWeEffectManager : NSObject
{
    MMOpenGLContext *_context;
    XImageContext *_rciContext;
    _Bool _isWeVisEffectMgrCreated;
    _Bool _allowCompressedForRenderingYUV;
    _Bool _allowCompressedForSrc;
    _Bool _enableRci;
    _Bool _enableCropTexture;
    _Bool _needRecordProcessTime;
    _Bool _enableStatsMonitor;
    float _eyeBrightRate;
    int _rotation;
    int _maxTextureImageUnit;
    WeVisLiveEffectMgr *_wevisEffectMgr;
    WCLoopMetricsCollector *_captureMetricsCollector;
    id <WeEffectManagerResultDelegate> _resultDelegate;
    id <WeEffectEnergyController> _energyController;
    CDUnknownBlockType _dataReportCallback;
    double _lastProcessTime;
    double _weVisMgrCreateTime;
    long long _roleType;
    CdnRenderContextWrapper *_shareCdnRenderContext;
    VisEffectRenderContextWrapper *_shareVisRenderContext;
    XImageContext *_renderRciContext;
    unsigned long long _processFrameCount;
    long long _processFps;
    unsigned long long _processFpsStatCnt;
    CDUnknownBlockType _processFpsReport;
}

+ (CDUnknownBlockType)createReportTimer:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType processFpsReport; // @synthesize processFpsReport=_processFpsReport;
@property unsigned long long processFpsStatCnt; // @synthesize processFpsStatCnt=_processFpsStatCnt;
@property long long processFps; // @synthesize processFps=_processFps;
@property unsigned long long processFrameCount; // @synthesize processFrameCount=_processFrameCount;
@property _Bool enableStatsMonitor; // @synthesize enableStatsMonitor=_enableStatsMonitor;
@property int maxTextureImageUnit; // @synthesize maxTextureImageUnit=_maxTextureImageUnit;
@property(readonly, nonatomic) XImageContext *renderRciContext; // @synthesize renderRciContext=_renderRciContext;
@property(retain, nonatomic) VisEffectRenderContextWrapper *shareVisRenderContext; // @synthesize shareVisRenderContext=_shareVisRenderContext;
@property(retain, nonatomic) CdnRenderContextWrapper *shareCdnRenderContext; // @synthesize shareCdnRenderContext=_shareCdnRenderContext;
@property(nonatomic) long long roleType; // @synthesize roleType=_roleType;
@property double weVisMgrCreateTime; // @synthesize weVisMgrCreateTime=_weVisMgrCreateTime;
@property int rotation; // @synthesize rotation=_rotation;
@property double lastProcessTime; // @synthesize lastProcessTime=_lastProcessTime;
@property _Bool needRecordProcessTime; // @synthesize needRecordProcessTime=_needRecordProcessTime;
@property _Bool enableCropTexture; // @synthesize enableCropTexture=_enableCropTexture;
@property(nonatomic) _Bool enableRci; // @synthesize enableRci=_enableRci;
@property(nonatomic) _Bool allowCompressedForSrc; // @synthesize allowCompressedForSrc=_allowCompressedForSrc;
@property(nonatomic) _Bool allowCompressedForRenderingYUV; // @synthesize allowCompressedForRenderingYUV=_allowCompressedForRenderingYUV;
@property _Bool isWeVisEffectMgrCreated; // @synthesize isWeVisEffectMgrCreated=_isWeVisEffectMgrCreated;
@property(copy, nonatomic) CDUnknownBlockType dataReportCallback; // @synthesize dataReportCallback=_dataReportCallback;
@property(readonly, nonatomic) __weak id <WeEffectEnergyController> energyController; // @synthesize energyController=_energyController;
@property(nonatomic) __weak id <WeEffectManagerResultDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
@property(retain, nonatomic) WCLoopMetricsCollector *captureMetricsCollector; // @synthesize captureMetricsCollector=_captureMetricsCollector;
@property(nonatomic) float eyeBrightRate; // @synthesize eyeBrightRate=_eyeBrightRate;
@property(retain, nonatomic) WeVisLiveEffectMgr *wevisEffectMgr; // @synthesize wevisEffectMgr=_wevisEffectMgr;
- (void)liveEffectMgr:(id)arg1 deviceRunPreferByCPU:(_Bool *)arg2;
- (void)liveEffectMgr:(id)arg1 adjustSettings:(void *)arg2;
- (void)liveEffectMgr:(id)arg1 configSettings:(void *)arg2;
- (_Bool)checkNeedBeautyWithFaceTrackRet:(int)arg1;
- (void)onLuaScriptJsonMessageReceived:(id)arg1 fromSourceId:(int)arg2;
- (void)onResourceIDVector:(id)arg1 scene:(unsigned long long)arg2;
- (void)onResourceID:(long long)arg1;
- (void)onResult:(int)arg1;
- (void)updateLastProcessTime;
- (_Bool)isOutputSize:(struct CGSize)arg1 fitForInputSize:(struct CGSize)arg2;
- (void)requireVideoOutputWidth:(int)arg1 outputHeight:(int)arg2;
- (_Bool)enableRender;
- (int)transferUIInterfaceRotationToWeVisRotation:(long long)arg1;
- (void)setNeedMirror:(_Bool)arg1;
- (id)renderEffectGLImpListForRemoteRole:(id)arg1 toOutputSize:(struct CGSize)arg2;
- (id)renderEffectRCIImpListForRemoteRole:(id)arg1 toOutputSize:(struct CGSize)arg2;
- (id)renderEffectImpList:(id)arg1 pixelBufferFlipX:(_Bool)arg2 toOutputSize:(struct CGSize)arg3;
- (id)renderMultiEffects:(id)arg1 pixelBufferFlipX:(_Bool)arg2 toOutputSize:(struct CGSize)arg3;
- (id)renderMultiEffects:(id)arg1 toOutputSize:(struct CGSize)arg2;
- (void)clean;
- (id)renderEffect:(id)arg1 pixelBufferFlipX:(_Bool)arg2;
- (id)renderEffect:(id)arg1;
- (id)renderEffectImp:(id)arg1 pixelBufferFlipX:(_Bool)arg2;
- (id)renderEffectRciImpForRemoteRole:(id)arg1 flipX:(_Bool)arg2;
- (id)renderEffectGLImpForRemoteRole:(id)arg1 flipX:(_Bool)arg2;
- (id)renderEffectGLImpInSegment:(id)arg1 processFaceTrack:(_Bool)arg2;
- (id)renderEffectInSegment:(id)arg1 processFaceTrack:(_Bool)arg2;
- (id)renderEffectGLImp:(id)arg1 flipX:(_Bool)arg2;
- (id)renderEffectRciImp:(id)arg1 flipX:(_Bool)arg2;
- (id)renderEffectImp:(id)arg1;
- (void)stopProcess;
- (void)startProcess;
- (void)setHostClarityInfo:(int)arg1;
- (void)setHostDenoiseInfo:(int)arg1;
- (void)setEnergySavingModeForHand:(_Bool)arg1;
- (_Bool)getFaceRect:(id)arg1;
- (void)setDetectRegion:(struct CGRect)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sendJsonMessage:(id)arg1 toLuaScriptWithObjectId:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeLuaScriptWithObjectId:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addLuaScriptAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setAnimationCallback:(CDUnknownBlockType)arg1 objectId:(long long)arg2;
- (void)clearFaceRectDetectMaterials;
- (void)clearFaceDetectMaterials;
- (void)clearFilters;
- (void)clearStickers;
- (void)clearMakeUp;
- (void)clearAll;
- (void)applyBlusher:(id)arg1;
- (void)applyContours:(id)arg1;
- (void)applyLipStick:(id)arg1;
- (void)applyEyeShadow:(id)arg1;
- (void)applyEyeBrow:(id)arg1;
- (void)applyFrontSticker:(id)arg1;
- (void)applyBackSticker:(id)arg1;
- (void)removeEffectMaterial:(long long)arg1;
- (void)apply2DSticker:(id)arg1;
- (_Bool)getSegmentTexture:(unsigned int *)arg1 textureSize:(struct CGSize *)arg2;
- (void)applyLiveEffectMaterialFolder:(id)arg1 scene:(unsigned long long)arg2;
- (void)removeMakeupFilter;
- (void)setMakeupFilterRate:(float)arg1;
- (void)setMakeupDetail:(long long)arg1 rate:(float)arg2;
- (void)clearMakeupMaterials;
- (void)applyMakeupMaterialsFolder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)applyFilterWithConfig:(id)arg1 alpha:(double)arg2;
- (void)applyFilter:(id)arg1 alpha:(double)arg2;
- (void)applyEyeBiggerV2:(float)arg1;
- (void)applyMouthMorph:(float)arg1;
- (void)applyRemoveSmileFolds:(float)arg1;
- (void)applyRemoveEyePouch:(float)arg1;
- (void)applyTeethBright:(float)arg1;
- (void)applySharpenFilter:(float)arg1;
- (void)applyEyeBright:(float)arg1;
- (void)applyEyeBigger:(float)arg1;
- (void)applyEyeBiggerForFinderLive:(float)arg1;
- (void)applyFaceThin:(float)arg1;
- (void)setSkinSmooth:(float)arg1;
- (void)setSkinBright:(float)arg1;
- (void)setSkinSegSetting:(_Bool)arg1;
- (void)reloadSettings;
- (void)initWeVisEffectMgr:(long long)arg1 isAllowFp16:(_Bool)arg2 globalContext:(void *)arg3 modelKeyArray:(id)arg4 beautyAssetsDirectory:(id)arg5;
- (void)onProcessCostTimeUpdate:(double)arg1 scene:(long long)arg2;
- (void)onSceneProcessEnd:(long long)arg1;
- (void)onSceneProcessBegin:(long long)arg1;
- (int)getMaxTextureImageUnit;
- (void)updateStatsMonitorEnabled:(_Bool)arg1;
- (void)checkNeedSkipProcess:(_Bool *)arg1 skipFaceTrack:(_Bool *)arg2 forFpsLimitWithTriggerFps:(int)arg3 lastProcessedFrame:(id)arg4;
- (unsigned int)currFaceTrackSkipFrameCnt;
- (void)updateFaceTrackSkipFrameCnt:(unsigned int)arg1;
- (double)getWeVisMgrCreateTime;
- (void)runSyncOnWeEffectThread:(CDUnknownBlockType)arg1;
- (void)runAsyncOnWeEffectThread:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool handModelAvailable;
@property(readonly, nonatomic) _Bool luaRuntimeAvailable;
@property(readonly, nonatomic) XImageContext *rciContext;
@property(readonly, nonatomic) EAGLContext *openGLContext;
@property(readonly, nonatomic) MMOpenGLContext *context;
@property(readonly, nonatomic) WeeffectRenderContextWrapper *renderContext;
- (void)dealloc;
- (_Bool)isShareVisRenderContextCanUsed:(id)arg1;
- (_Bool)isShareCdnRenderContextCanUsed:(id)arg1;
- (void)initRenderContextWithShareContext:(id)arg1;
- (_Bool)isRCIEnableForRole:(long long)arg1;
- (void)enableFaceLandsDebugging;
- (id)initWithSceneType:(long long)arg1 roleType:(long long)arg2 energyController:(id)arg3 dataReportCallback:(CDUnknownBlockType)arg4 shareRenderContext:(id)arg5 globalContext:(void *)arg6 isAllowFp16:(_Bool)arg7 enableRci:(_Bool)arg8 modelKeyArray:(id)arg9 beautyAssetsDirectory:(id)arg10;
- (id)initWithSceneType:(long long)arg1 roleType:(long long)arg2 energyController:(id)arg3 dataReportCallback:(CDUnknownBlockType)arg4 isAllowFp16:(_Bool)arg5 enableRci:(_Bool)arg6 beautyAssetsDirectory:(id)arg7;
- (void)updateProcessFps:(int)arg1;
- (void)logForProcessStatIfNeed;
- (void)increaseProcessFpsStatCnt;
- (void)increaseProcessFrameCnt;
- (CDUnknownBlockType)createProcessFpsReporter;
- (void)clearProcessStats;
- (void)updateProcessStats;
- (void)initProcessStatsIfNeed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

