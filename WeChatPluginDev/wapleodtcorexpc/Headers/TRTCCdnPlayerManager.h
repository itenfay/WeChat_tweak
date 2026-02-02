//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnRenderViewBase, CustomPlayerConfig, MMLivePixelBuffer, MMLiveTask, MMWeEffectManager, NSMutableArray, NSString, TRTCCdnPlayerConfig, TXLivePlayer, UIView;
@protocol OS_dispatch_semaphore, TRTCCdnPlayerManagerDelegate, TXLivePlayListener;

@interface TRTCCdnPlayerManager : NSObject
{
    _Bool _enableRci;
    _Bool _disableCustomDNSResolve;
    _Bool _useCdnRenderer;
    _Bool _forbidRenderPixel;
    _Bool _hasSetWavejbmParam;
    _Bool _needCacheRecentCdnPixelBuffer;
    _Bool _isLebPlayer;
    _Bool _isProcessByWeffect;
    _Bool _needPrintRenderFps;
    _Bool _forbidRenderPixelCompletely;
    int _cdnRenderParam;
    int _customrenderInfo;
    TXLivePlayer *_player;
    TRTCCdnPlayerConfig *_config;
    id <TXLivePlayListener> _delegate;
    id <TRTCCdnPlayerManagerDelegate> _cdnPlayerDelegate;
    unsigned long long _enhanceOptions;
    CdnRenderViewBase *_renderView;
    CdnRenderViewBase *_barrageMaskRenderView;
    UIView *_containView;
    long long _customrenderMode;
    long long _wavejbm_factory;
    CustomPlayerConfig *_customPlayerCfg;
    MMLivePixelBuffer *_currLivePixelBuffer;
    MMLivePixelBuffer *_prePixelBuffer;
    long long _maxStandardFps;
    long long _maxSupportFps;
    long long _fpsCounter;
    long long _thermalState;
    MMLiveTask *_liveTask;
    NSString *_playUrl;
    NSString *_playUrlResolved;
    MMWeEffectManager *_weeffectManager;
    NSMutableArray *_tempARGBColorRequestTaskList;
    NSMutableArray *_tempYUVColorRequestTaskList;
    NSObject<OS_dispatch_semaphore> *_tempARGBReqTaskLock;
    NSObject<OS_dispatch_semaphore> *_tempYUVReqTaskLock;
    NSObject<OS_dispatch_semaphore> *_forbidRenderPixelChangedLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *forbidRenderPixelChangedLock; // @synthesize forbidRenderPixelChangedLock=_forbidRenderPixelChangedLock;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *tempYUVReqTaskLock; // @synthesize tempYUVReqTaskLock=_tempYUVReqTaskLock;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *tempARGBReqTaskLock; // @synthesize tempARGBReqTaskLock=_tempARGBReqTaskLock;
@property(retain, nonatomic) NSMutableArray *tempYUVColorRequestTaskList; // @synthesize tempYUVColorRequestTaskList=_tempYUVColorRequestTaskList;
@property(retain, nonatomic) NSMutableArray *tempARGBColorRequestTaskList; // @synthesize tempARGBColorRequestTaskList=_tempARGBColorRequestTaskList;
@property(nonatomic) _Bool forbidRenderPixelCompletely; // @synthesize forbidRenderPixelCompletely=_forbidRenderPixelCompletely;
@property _Bool needPrintRenderFps; // @synthesize needPrintRenderFps=_needPrintRenderFps;
@property _Bool isProcessByWeffect; // @synthesize isProcessByWeffect=_isProcessByWeffect;
@property __weak MMWeEffectManager *weeffectManager; // @synthesize weeffectManager=_weeffectManager;
@property(retain, nonatomic) NSString *playUrlResolved; // @synthesize playUrlResolved=_playUrlResolved;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(nonatomic) _Bool isLebPlayer; // @synthesize isLebPlayer=_isLebPlayer;
@property(nonatomic) __weak MMLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(nonatomic) long long thermalState; // @synthesize thermalState=_thermalState;
@property(nonatomic) long long fpsCounter; // @synthesize fpsCounter=_fpsCounter;
@property(nonatomic) long long maxSupportFps; // @synthesize maxSupportFps=_maxSupportFps;
@property(nonatomic) long long maxStandardFps; // @synthesize maxStandardFps=_maxStandardFps;
@property(retain) MMLivePixelBuffer *prePixelBuffer; // @synthesize prePixelBuffer=_prePixelBuffer;
@property(retain) MMLivePixelBuffer *currLivePixelBuffer; // @synthesize currLivePixelBuffer=_currLivePixelBuffer;
@property _Bool needCacheRecentCdnPixelBuffer; // @synthesize needCacheRecentCdnPixelBuffer=_needCacheRecentCdnPixelBuffer;
@property(nonatomic) CustomPlayerConfig *customPlayerCfg; // @synthesize customPlayerCfg=_customPlayerCfg;
@property _Bool hasSetWavejbmParam; // @synthesize hasSetWavejbmParam=_hasSetWavejbmParam;
@property long long wavejbm_factory; // @synthesize wavejbm_factory=_wavejbm_factory;
@property(nonatomic) _Bool forbidRenderPixel; // @synthesize forbidRenderPixel=_forbidRenderPixel;
@property(nonatomic) int customrenderInfo; // @synthesize customrenderInfo=_customrenderInfo;
@property(nonatomic) long long customrenderMode; // @synthesize customrenderMode=_customrenderMode;
@property int cdnRenderParam; // @synthesize cdnRenderParam=_cdnRenderParam;
@property _Bool useCdnRenderer; // @synthesize useCdnRenderer=_useCdnRenderer;
@property(retain) UIView *containView; // @synthesize containView=_containView;
@property __weak CdnRenderViewBase *barrageMaskRenderView; // @synthesize barrageMaskRenderView=_barrageMaskRenderView;
@property(retain) CdnRenderViewBase *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) _Bool disableCustomDNSResolve; // @synthesize disableCustomDNSResolve=_disableCustomDNSResolve;
@property(nonatomic) _Bool enableRci; // @synthesize enableRci=_enableRci;
@property(nonatomic) unsigned long long enhanceOptions; // @synthesize enhanceOptions=_enhanceOptions;
@property(nonatomic) __weak id <TRTCCdnPlayerManagerDelegate> cdnPlayerDelegate; // @synthesize cdnPlayerDelegate=_cdnPlayerDelegate;
@property(nonatomic) __weak id <TXLivePlayListener> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TRTCCdnPlayerConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) TXLivePlayer *player; // @synthesize player=_player;
- (void)onMatrixPerfWarning:(id)arg1;
- (void)addPerfWarningObserve;
- (int)getSharpenInfo;
- (int)getCustomRenderMode;
- (int)getCustomRenderEnable;
- (void)setMaxMinHalfFOVVer:(float)arg1 MaxVal:(float)arg2;
- (void)setMaxMinHalfFOVHor:(float)arg1 MaxVal:(float)arg2;
- (void)resetPitchAndYaw;
- (void)setSensorControlFlag:(_Bool)arg1 keepLastSensor:(_Bool)arg2;
- (void)setTouchControlFlag:(_Bool)arg1;
- (void)handleGesturesOperation:(id)arg1;
- (void)onRenderFpsUpdate:(int)arg1;
- (void)onOutputWeEffectProcessedRenderFrame:(id)arg1;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)appendCustomerPlayReport:(id)arg1 withParams:(id)arg2;
- (void)appendCustomerPlayReportInterval:(id)arg1;
- (void)appendCustomerPlayReportEnd:(id)arg1;
- (void)appendCustomerPlayReportBegin:(id)arg1;
- (void)enableReportStreamRspInfo;
- (id)currLiveTask;
- (_Bool)forbidAdjustCDNEnhanceOptions;
- (void)updatePlayerAudioJitterBufferConfig:(unsigned int)arg1 wavejbmMode:(unsigned int)arg2 wavejbmMinSpeedRate:(double)arg3 wavejbmMaxSpeedRate:(double)arg4;
- (void)updatePlayerCache;
- (void)setLEBPlayerCache:(float)arg1 maxCache:(float)arg2;
- (void)callExperimentalAPI:(id)arg1;
- (void)setCustomRenderParam:(id)arg1;
- (void)setCloseHWDecoder;
- (void)setEnableMessage:(_Bool)arg1;
- (void)setConnectRetryInterval:(int)arg1;
- (void)setConnectRetryCount:(int)arg1;
- (void)setLowDelayMode:(unsigned int)arg1 initialdelay:(unsigned int)arg2;
- (void)setCacheConfig:(unsigned int)arg1 wavejbmMode:(unsigned int)arg2 wavejbmMinSpeedRate:(double)arg3 wavejbmMaxSpeedRate:(double)arg4;
- (void)initCacheConfig;
- (void)configAdaptiveVolumeEQ:(_Bool)arg1 baseLevel:(int)arg2;
- (void)setDefaultPlayerConfig;
- (void)setGameAppId:(id)arg1;
- (void)setCacheType:(unsigned long long)arg1 minCache:(int)arg2 maxCache:(int)arg3 lebMinCache:(int)arg4 lebMaxCache:(int)arg5;
- (void)setRenderMode:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setDebugLogEnabled:(_Bool)arg1;
- (void)updateNeedPrintRenderFps:(_Bool)arg1;
- (void)updateMaxSupportFps:(long long)arg1;
- (_Bool)needProcessByWeffect;
- (void)updateNeedProcessByWeffect:(_Bool)arg1;
- (void)configCdnWeEffectManager:(id)arg1;
- (id)getCdnRenderContext;
- (void)updateBarrageMaskRenderView:(id)arg1;
- (void)updateNeedCacheRecentCdnPixelBuffer:(_Bool)arg1;
- (struct __CVBuffer *)getCurrentLivePixelBufferRef;
- (void)updateCurrentLivePixelBuffer:(struct __CVBuffer *)arg1;
- (void)enableMetalRender:(_Bool)arg1;
- (_Bool)isCurrentEnableCdnRenderPixelBuffer;
- (void)enableCdnRenderPixelBuffer;
- (void)disableCdnRenderPixelBuffer:(_Bool)arg1;
@property(readonly, nonatomic) float currentVideoDisplayScale;
- (void)requestYUVColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(struct CGSize)arg2 callback:(CDUnknownBlockType)arg3;
- (void)requestARGBColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(struct CGSize)arg2 callback:(CDUnknownBlockType)arg3;
- (void)enableBackgroundDecoding:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (_Bool)isPlaying;
- (void)resume;
- (void)pause;
- (void)stopPlay;
- (void)removeRenderer;
- (void)resetRenderViewStats;
- (int)switchStream:(id)arg1;
- (void)restartPlayDisableCustomDNSResolve;
- (_Bool)isPlayingUsingCustomDNSResolve;
- (void)startPlay:(id)arg1;
- (void)configRender;
- (void)setMaskRender;
- (void)setRenderer;
- (void)configCallbacksForCdnRenderView:(id)arg1;
- (void)setupRenderer;
- (void)applyConfigToPlayer;
- (void)presentRenderFrame:(id)arg1 atView:(id)arg2;
- (double)getMaxRenderTimeIntervalWithMaxFps:(long long)arg1;
- (_Bool)checkNeedSkipRenderFrameWithMaxTimeInterval:(double)arg1;
- (long long)frameIntervalForMaxFps:(long long)arg1;
- (_Bool)checkNeedSkipRenderFrame;
- (_Bool)shallLimitForMaxSupportFps;
- (_Bool)shallLimitForMaxStandardFps;
- (long long)getCurrentMaxFps;
- (_Bool)onPlayerPixelBuffer:(struct __CVBuffer *)arg1;
- (void)dealloc;
- (void)thermalStateDidChange;
- (void)liveTaskChanged:(id)arg1;
- (_Bool)isOverMaxStandardFpsLimit;
- (void)setupRenderInfo;
- (void)initDefaultData;
- (id)initWithContainerView:(id)arg1 delegate:(id)arg2 liveVrType:(int)arg3;
- (CDStruct_77932685)readYUVColorInPixelPoint:(struct CGPoint)arg1 pixelBuffer:(struct __CVBuffer *)arg2 ret:(_Bool *)arg3;
- (CDStruct_abf36e01)readARGBColorInPixelPoint:(struct CGPoint)arg1 pixelBuffer:(struct __CVBuffer *)arg2 ret:(_Bool *)arg3;
- (struct CGPoint)convertNormalizedCoordinate:(struct CGPoint)arg1 toPointInPixelBuffer:(struct __CVBuffer *)arg2 pixelBufferDisplayNormalizedFrame:(struct CGRect)arg3;
- (struct CGRect)convertNormalizedDisplayFrameFromPixelBuffer:(struct __CVBuffer *)arg1 withDisplaySize:(struct CGSize)arg2;
- (void)extractPixelColorWithRequestTaskList:(id)arg1 fromPixelBufferIfNeeded:(struct __CVBuffer *)arg2;
- (void)checkTempARGBColorRequestTaskListOverLimit;
- (void)checkTempYUVColorRequestTaskListOverLimit;
- (void)extractPixelColorInfoFromPixelBufferIfNeeded:(struct __CVBuffer *)arg1;
- (void)addTempYUVColorRequestTask:(id)arg1;
- (void)addTempARGBColorRequestTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

