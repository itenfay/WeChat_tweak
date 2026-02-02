//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TPDownloadProxy, TPLock;
@protocol ITPPlayerProxyDelegate, TPProxyPlayDelegate;

@interface TPProxyPlayManager : NSObject
{
    _Bool _initialized;
    _Bool _active;
    _Bool _enableAdaptive;
    _Bool _enableSuggestedBitrateCallBack;
    _Bool _enableMultiNetwork;
    _Bool _canUseProxy;
    int _serviceType;
    int _playId;
    id <ITPPlayerProxyDelegate> playerProxyDelegate;
    id <TPProxyPlayDelegate> _delegate;
    TPDownloadProxy *_downloadProxy;
    long long _maxBitrateBps;
    TPLock *_definitionTaskLock;
    TPLock *_trackTaskLock;
    NSMutableArray *_definitionTaskArray;
    NSMutableDictionary *_trackTaskMap;
    long long _initializeTryCount;
    long long _startPosMs;
    long long _skipEndMs;
    NSMutableSet *_resourceloaderSet;
    long long _playState;
}

- (void).cxx_destruct;
@property(nonatomic) long long playState; // @synthesize playState=_playState;
@property(retain, nonatomic) NSMutableSet *resourceloaderSet; // @synthesize resourceloaderSet=_resourceloaderSet;
@property(nonatomic) long long skipEndMs; // @synthesize skipEndMs=_skipEndMs;
@property(nonatomic) long long startPosMs; // @synthesize startPosMs=_startPosMs;
@property(nonatomic) _Bool canUseProxy; // @synthesize canUseProxy=_canUseProxy;
@property(nonatomic) _Bool enableMultiNetwork; // @synthesize enableMultiNetwork=_enableMultiNetwork;
@property(nonatomic) _Bool enableSuggestedBitrateCallBack; // @synthesize enableSuggestedBitrateCallBack=_enableSuggestedBitrateCallBack;
@property(nonatomic) _Bool enableAdaptive; // @synthesize enableAdaptive=_enableAdaptive;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) long long initializeTryCount; // @synthesize initializeTryCount=_initializeTryCount;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSMutableDictionary *trackTaskMap; // @synthesize trackTaskMap=_trackTaskMap;
@property(retain, nonatomic) NSMutableArray *definitionTaskArray; // @synthesize definitionTaskArray=_definitionTaskArray;
@property(retain, nonatomic) TPLock *trackTaskLock; // @synthesize trackTaskLock=_trackTaskLock;
@property(retain, nonatomic) TPLock *definitionTaskLock; // @synthesize definitionTaskLock=_definitionTaskLock;
@property(nonatomic) long long maxBitrateBps; // @synthesize maxBitrateBps=_maxBitrateBps;
@property(nonatomic) int playId; // @synthesize playId=_playId;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) TPDownloadProxy *downloadProxy; // @synthesize downloadProxy=_downloadProxy;
@property(nonatomic) __weak id <TPProxyPlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ITPPlayerProxyDelegate> playerProxyDelegate; // @synthesize playerProxyDelegate;
- (id)buildTPProxyConfig;
- (long long)getCurrentPlayOffset;
- (id)getPlayInfo:(id)arg1;
- (long long)getAdvRemainTime;
- (int)getCurrentPlayClipNo;
- (long long)getCurrentPosition;
- (long long)getPlayerBufferLength;
- (void)onDownloadProtocolUpdateWithProtocol:(id)arg1 protocolVer:(id)arg2;
- (void)onDownloadStatusUpdateWithStatusCode:(int)arg1;
- (void)onDownloadCdnUrlExpiredWithKVInfo:(id)arg1;
- (void)onDownloadCdnUrlInfoUpdateWithUrl:(id)arg1 cdnIP:(id)arg2 uIP:(id)arg3 errcodeStr:(id)arg4;
- (void)onDownloadCdnUrlUpdate:(id)arg1;
- (id)onPlayCallbackWithMessageType:(int)arg1 ext1:(id)arg2 ext2:(id)arg3 ext3:(id)arg4 ext4:(id)arg5;
- (void)onDownloadErrorWithModuleId:(int)arg1 errorCode:(int)arg2 extInfo:(id)arg3;
- (void)onDownloadFinish;
- (void)onDownloadProgressUpdateWithPlayableDuration:(int)arg1 downloadSpeedKBs:(int)arg2 currentDownloadSizeByte:(long long)arg3 totalFileSizeByte:(long long)arg4 extInfo:(id)arg5;
- (id)getClipsByMediaAsset:(id)arg1;
- (int)startMediaAssetTaskWithMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (void)stopCurrentPlayingTask;
- (void)stopDownloadWithPlayId:(int)arg1;
- (void)resumeDownloadWithPlayId:(int)arg1;
- (void)pauseDownloadWithPlayId:(int)arg1;
- (_Bool)initializeProxyImpl;
- (_Bool)initialzeProxyIfNeeded;
- (void)updateProxyTaskInfoWithPlayId:(int)arg1;
- (void)setDownloadProxyActiveState:(_Bool)arg1 withPlayId:(int)arg2;
- (void)setUserData;
- (_Bool)isValidPlayId:(int)arg1;
- (id)startSwitchDefinitionTaskWithClipMediaAsset:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3;
- (id)startSwitchDefinitionTaskWithDrmMediaAsset:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3;
- (id)startSwitchDefinitionTaskWithUrlMediaAsset:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3;
- (id)startPlayTaskWithClipMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (id)startPlayTaskWithDrmMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (id)startPlayTaskWithUrlMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (void)setIsActive:(_Bool)arg1;
- (id)getErrorCode;
- (void)updateVideoInfo:(id)arg1;
- (void)pushEvent:(long long)arg1;
- (void)setProxyServiceType:(int)arg1;
- (void)setPlaySpeedRatio:(double)arg1;
- (long long)getProxyPlayState;
- (void)setProxyPlayState:(long long)arg1;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)stopTrackDownloadTaskWithUrl:(id)arg1;
- (void)resetStates;
- (void)resetInitProxyState;
- (void)resetOptionParams;
- (void)resumeTrackDownloadTaskWithUrl:(id)arg1;
- (void)pauseTrackDownloadTaskWithUrl:(id)arg1;
- (id)startTrackDownloadTaskWithUrl:(id)arg1 trackType:(unsigned long long)arg2 downloadParamData:(id)arg3;
- (void)finishSwitchDefinitionTaskWithDefinitionId:(long long)arg1;
- (id)startSwitchDefinitionTaskWithMediaAsset:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3;
- (id)startSwitchDefinitionTaskWithUrl:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3 httpHeader:(id)arg4;
- (void)stopDownload;
- (id)startPlayTaskWithMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (void)cleanResourceloaderWhenFinishSwitchWithDefinitionId:(long long)arg1;
- (void)cleanResourceloader:(id)arg1;
- (void)switchDataSource:(id)arg1 definitionId:(long long)arg2 playInfo:(id)arg3 resourceLoader:(id)arg4 delegateQueue:(id)arg5;
- (void)setDataSource:(id)arg1 playInfo:(id)arg2 resourceLoader:(id)arg3 delegateQueue:(id)arg4;
- (_Bool)isValidResource:(id)arg1 delegate:(id)arg2 playInfo:(id)arg3;
- (id)startPlayTaskWithUrl:(id)arg1 videoInfo:(id)arg2 httpHeader:(id)arg3;
- (void)setPlayerOptionalParam:(id)arg1;
- (_Bool)isPlayIdValid;
- (_Bool)isAvailable;
- (id)logTag;
- (void)dealloc;
- (id)init;
- (id)getDownloadParamWithMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (id)getDownloadParamWithUrl:(id)arg1 videoInfo:(id)arg2 httpHeader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

