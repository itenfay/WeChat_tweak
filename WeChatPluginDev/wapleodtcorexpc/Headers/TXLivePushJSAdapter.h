//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveManger, MMWeEffectManager, NSArray, NSMutableArray, NSNumber, NSString, NSURLSessionDownloadTask, UIView, V2TXLivePusherJSAdapter;
@protocol TXLivePushJSAdapterDelegate;

@interface TXLivePushJSAdapter : NSObject
{
    _Bool _bIsMannualPause;
    _Bool _isVoip;
    _Bool _isDebug;
    _Bool _needEvent;
    _Bool _needBGMEvent;
    _Bool _needNetStatus;
    _Bool _remoteMirror;
    _Bool _enableFrontCamera;
    _Bool _enableTorch;
    _Bool _audioMode;
    _Bool _autoPush;
    _Bool _enableCustomEffect;
    _Bool _enableVideoCustomRender;
    _Bool _isAllowFp16;
    unsigned int _pusherId;
    id <TXLivePushJSAdapterDelegate> _delegate;
    V2TXLivePusherJSAdapter *_v2LivePusher;
    UIView *_previewView;
    NSString *_appId;
    NSString *_orientation;
    NSString *_bgImageUrl;
    NSString *_bgImageMD5;
    NSString *_filterImageUrl;
    NSString *_filterImageMD5;
    NSString *_bgmAudioPath;
    NSURLSessionDownloadTask *_bgmAudioTask;
    NSNumber *_storedMuteStatus;
    NSNumber *_storedEnableMic;
    unsigned long long _localVideoMirrorType;
    long long _videoWidth;
    long long _videoHeight;
    NSString *_pushUrl;
    MMLiveManger *_liveManagerInstance;
    MMWeEffectManager *_weeffectManager;
    NSMutableArray *_weeffectArray;
    NSArray *_weeffectClsArr;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAllowFp16; // @synthesize isAllowFp16=_isAllowFp16;
@property(nonatomic) _Bool enableVideoCustomRender; // @synthesize enableVideoCustomRender=_enableVideoCustomRender;
@property(retain, nonatomic) NSArray *weeffectClsArr; // @synthesize weeffectClsArr=_weeffectClsArr;
@property(retain, nonatomic) NSMutableArray *weeffectArray; // @synthesize weeffectArray=_weeffectArray;
@property(retain, nonatomic) MMWeEffectManager *weeffectManager; // @synthesize weeffectManager=_weeffectManager;
@property(retain, nonatomic) MMLiveManger *liveManagerInstance; // @synthesize liveManagerInstance=_liveManagerInstance;
@property(nonatomic) _Bool enableCustomEffect; // @synthesize enableCustomEffect=_enableCustomEffect;
@property(nonatomic) _Bool autoPush; // @synthesize autoPush=_autoPush;
@property(retain, nonatomic) NSString *pushUrl; // @synthesize pushUrl=_pushUrl;
@property(nonatomic) _Bool audioMode; // @synthesize audioMode=_audioMode;
@property(nonatomic) _Bool enableTorch; // @synthesize enableTorch=_enableTorch;
@property(nonatomic) _Bool enableFrontCamera; // @synthesize enableFrontCamera=_enableFrontCamera;
@property(nonatomic) long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) unsigned long long localVideoMirrorType; // @synthesize localVideoMirrorType=_localVideoMirrorType;
@property(nonatomic) _Bool remoteMirror; // @synthesize remoteMirror=_remoteMirror;
@property(retain, nonatomic) NSNumber *storedEnableMic; // @synthesize storedEnableMic=_storedEnableMic;
@property(retain, nonatomic) NSNumber *storedMuteStatus; // @synthesize storedMuteStatus=_storedMuteStatus;
@property(retain, nonatomic) NSURLSessionDownloadTask *bgmAudioTask; // @synthesize bgmAudioTask=_bgmAudioTask;
@property(retain, nonatomic) NSString *bgmAudioPath; // @synthesize bgmAudioPath=_bgmAudioPath;
@property(retain, nonatomic) NSString *filterImageMD5; // @synthesize filterImageMD5=_filterImageMD5;
@property(retain, nonatomic) NSString *filterImageUrl; // @synthesize filterImageUrl=_filterImageUrl;
@property(retain, nonatomic) NSString *bgImageMD5; // @synthesize bgImageMD5=_bgImageMD5;
@property(retain, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
@property(nonatomic) _Bool needNetStatus; // @synthesize needNetStatus=_needNetStatus;
@property(nonatomic) _Bool needBGMEvent; // @synthesize needBGMEvent=_needBGMEvent;
@property(nonatomic) _Bool needEvent; // @synthesize needEvent=_needEvent;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(retain, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) V2TXLivePusherJSAdapter *v2LivePusher; // @synthesize v2LivePusher=_v2LivePusher;
@property(nonatomic) __weak id <TXLivePushJSAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isVoip; // @synthesize isVoip=_isVoip;
@property(readonly, nonatomic) unsigned int pusherId; // @synthesize pusherId=_pusherId;
- (id)mixListForAudioModule:(id)arg1;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onEnableCustomVideoCapture:(_Bool)arg1 width:(double)arg2 height:(double)arg3;
- (long long)sendVideoPixelBuffer:(struct __CVBuffer *)arg1;
- (long long)sendVideoFrameData:(id)arg1 param:(id)arg2;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 shouldReportCaptureMetrics:(_Bool)arg3;
- (void)weeffectApplicationFinishedWithObject:(id)arg1 error:(id)arg2;
- (void)clearWeEffects;
- (void)parseWeEffect:(id)arg1 operationType:(id)arg2;
- (_Bool)updateTorchForCustomEffect;
- (void)updateMirrorTypeForCustomVideoCapture;
- (void)snapShot:(_Bool)arg1;
- (void)setCameraConfigs;
- (void)onWeVisEffectMgrCreateCompleted;
- (void)onResourceIDVector:(id)arg1 scene:(unsigned long long)arg2;
- (void)onResourceID:(long long)arg1;
- (void)onResult:(int)arg1;
- (void)initializeCustomVideoCapture:(id)arg1;
- (void)audioSessionInterruptionEnd;
- (void)audioSessionInterruptionBegan;
- (void)innerAppAudioInterruptionEnd;
- (void)innerAppAudioInterruptionBegan;
- (void)resumeLivePush;
- (void)pauseLivePush;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)processImageData:(id)arg1 imageUrl:(id)arg2 imageMD5:(id)arg3 finishedBlock:(CDUnknownBlockType)arg4;
- (void)onAudioRecordDidStop;
- (_Bool)onAudioRecordWillUpdate;
- (void)onCameraStateChanged:(_Bool)arg1;
- (void)onRecordStateChanged:(id)arg1;
- (void)onLivePusherError:(long long)arg1 errMsg:(id)arg2 data:(id)arg3;
- (void)onSnapshotComplete:(id)arg1;
- (void)onBGMComplete:(long long)arg1;
- (void)onBGMProgress:(long long)arg1 durationMs:(long long)arg2;
- (void)onBGMStart:(long long)arg1;
- (void)onAudioVolumeEvaluation:(long long)arg1;
- (void)onNetStatus:(id)arg1;
- (void)onPushEvent:(long long)arg1 withParam:(id)arg2;
- (void)onConfigApplied:(_Bool)arg1;
- (void)onMonoServiceRejectMsg;
- (void)loadImageWithURL:(id)arg1 imageMD5:(id)arg2 successed:(CDUnknownBlockType)arg3;
- (id)tryGetImageLocalData:(id)arg1;
- (_Bool)enableCustomVideoCapture;
- (_Bool)setAudioActive:(_Bool)arg1;
- (void)setOrientation;
- (void)parseCustomVideoCaptureConfigs:(id)arg1;
- (void)parseConfigs:(id)arg1;
- (void)handlePushUrl:(_Bool)arg1;
- (void)restoreMicSetting;
- (void)saveAndForceDisableMic;
- (void)foregroundPush;
- (void)backgroundPush:(_Bool)arg1;
- (void)onPushStart;
- (void)stopPush;
- (void)startPush;
- (void)orientationChange;
- (void)enterForeground;
- (void)enterBackgroundThrowingEvent:(_Bool)arg1;
- (void)stopPreview;
- (void)startPreview;
- (void)enablePureAudioPush:(_Bool)arg1;
- (double)cameraZoomMaxRatio;
@property(readonly, nonatomic) _Bool muted;
@property(readonly, nonatomic) _Bool enableMic;
@property(readonly, nonatomic) _Bool isPreviewing;
@property(readonly, nonatomic) _Bool isPublishing;
- (_Bool)operateLivePusherWithType:(id)arg1 param:(id)arg2;
- (void)stopLivePusherBgm;
- (void)loadLivePusherBgm:(id)arg1;
- (id)calcSavePathByUrl:(id)arg1;
- (id)bgmSaveDir;
- (void)playLivePusherBgm:(id)arg1;
- (void)updateLivePusherWithConfigs:(id)arg1;
- (id)initLivePusherWithId:(unsigned int)arg1 configs:(id)arg2 preview:(id)arg3 appId:(id)arg4 delegate:(id)arg5;
- (void)initTorchState;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)onAppWillResignActive:(id)arg1;
- (void)registerNotification;
- (void)destroyLivepusher;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

