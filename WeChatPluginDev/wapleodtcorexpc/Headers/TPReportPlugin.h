//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TPBufferedRecord, TPDefaultReportInfo, TPDiskReadWrite, TPDownloadRecord, TPLiveRecord, TPMediaRecord, TPPlayerRecord, TPReportParamsCommon, TPReportParamsLive, TPReportParamsStep302, TPReportParamsStepFirstRendered, TPReportParamsStepGetCdnIp, TPReportParamsStepInit, TPReportParamsStepLoadSubTitle, TPReportParamsStepPlayComplete, TPReportParamsStepSecondBuffered, TPReportParamsStepSeek, TPReportParamsStepVideoPrepared, TPReportParamsVodEx, TPReportStepInner, TPSeekRecord, TPWorkerQueue;
@protocol ITPReportWrapper;

@interface TPReportPlugin : NSObject
{
    _Bool _hasReportedComplete;
    _Bool _needReportToBeacon;
    id <ITPReportWrapper> _beaconReporter;
    TPDefaultReportInfo *_infoGetter;
    TPWorkerQueue *_reportQueue;
    long long _playType;
    long long _playerId;
    TPReportParamsCommon *_commonParams;
    TPReportParamsStepInit *_stepInit;
    TPReportParamsStepGetCdnIp *_stepGetCdn;
    TPReportParamsStepVideoPrepared *_stepPrepared;
    TPReportParamsStepFirstRendered *_stepFirstRendered;
    TPReportParamsStepLoadSubTitle *_stepLoadSubtitle;
    TPReportParamsStep302 *_step302;
    TPReportParamsStepSecondBuffered *_stepSecondBuffered;
    TPReportParamsStepSeek *_stepSeek;
    TPReportParamsStepPlayComplete *_stepPlayComplete;
    TPReportParamsVodEx *_vodExParams;
    TPReportParamsLive *_liveParams;
    TPReportStepInner *_currentStep;
    NSString *_playFlowId;
    unsigned long long _playScene;
    TPPlayerRecord *_playerRecord;
    TPDownloadRecord *_downloadRecord;
    TPMediaRecord *_mediaRecord;
    NSString *_errorCode;
    double _playedDuration;
    TPBufferedRecord *_bufferedRecord;
    TPSeekRecord *_seekRecord;
    TPLiveRecord *_liveRecord;
    TPDiskReadWrite *_diskReadWrite;
    double _samplingRate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needReportToBeacon; // @synthesize needReportToBeacon=_needReportToBeacon;
@property(nonatomic) double samplingRate; // @synthesize samplingRate=_samplingRate;
@property(retain, nonatomic) TPDiskReadWrite *diskReadWrite; // @synthesize diskReadWrite=_diskReadWrite;
@property(retain, nonatomic) TPLiveRecord *liveRecord; // @synthesize liveRecord=_liveRecord;
@property(retain, nonatomic) TPSeekRecord *seekRecord; // @synthesize seekRecord=_seekRecord;
@property(retain, nonatomic) TPBufferedRecord *bufferedRecord; // @synthesize bufferedRecord=_bufferedRecord;
@property(nonatomic) double playedDuration; // @synthesize playedDuration=_playedDuration;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) TPMediaRecord *mediaRecord; // @synthesize mediaRecord=_mediaRecord;
@property(retain, nonatomic) TPDownloadRecord *downloadRecord; // @synthesize downloadRecord=_downloadRecord;
@property(retain, nonatomic) TPPlayerRecord *playerRecord; // @synthesize playerRecord=_playerRecord;
@property(nonatomic) _Bool hasReportedComplete; // @synthesize hasReportedComplete=_hasReportedComplete;
@property(nonatomic) unsigned long long playScene; // @synthesize playScene=_playScene;
@property(retain, nonatomic) NSString *playFlowId; // @synthesize playFlowId=_playFlowId;
@property(retain, nonatomic) TPReportStepInner *currentStep; // @synthesize currentStep=_currentStep;
@property(retain, nonatomic) TPReportParamsLive *liveParams; // @synthesize liveParams=_liveParams;
@property(retain, nonatomic) TPReportParamsVodEx *vodExParams; // @synthesize vodExParams=_vodExParams;
@property(retain, nonatomic) TPReportParamsStepPlayComplete *stepPlayComplete; // @synthesize stepPlayComplete=_stepPlayComplete;
@property(retain, nonatomic) TPReportParamsStepSeek *stepSeek; // @synthesize stepSeek=_stepSeek;
@property(retain, nonatomic) TPReportParamsStepSecondBuffered *stepSecondBuffered; // @synthesize stepSecondBuffered=_stepSecondBuffered;
@property(retain, nonatomic) TPReportParamsStep302 *step302; // @synthesize step302=_step302;
@property(retain, nonatomic) TPReportParamsStepLoadSubTitle *stepLoadSubtitle; // @synthesize stepLoadSubtitle=_stepLoadSubtitle;
@property(retain, nonatomic) TPReportParamsStepFirstRendered *stepFirstRendered; // @synthesize stepFirstRendered=_stepFirstRendered;
@property(retain, nonatomic) TPReportParamsStepVideoPrepared *stepPrepared; // @synthesize stepPrepared=_stepPrepared;
@property(retain, nonatomic) TPReportParamsStepGetCdnIp *stepGetCdn; // @synthesize stepGetCdn=_stepGetCdn;
@property(retain, nonatomic) TPReportParamsStepInit *stepInit; // @synthesize stepInit=_stepInit;
@property(retain, nonatomic) TPReportParamsCommon *commonParams; // @synthesize commonParams=_commonParams;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
@property(nonatomic) long long playType; // @synthesize playType=_playType;
@property(retain, nonatomic) TPWorkerQueue *reportQueue; // @synthesize reportQueue=_reportQueue;
@property(retain, nonatomic) TPDefaultReportInfo *infoGetter; // @synthesize infoGetter=_infoGetter;
@property(retain, nonatomic) id <ITPReportWrapper> beaconReporter; // @synthesize beaconReporter=_beaconReporter;
- (void)onLivePeroidReport;
- (void)invalidPeroidTimer;
- (void)pauseLivePeroidTimer;
- (void)startLivePeroidTimer;
- (void)updateSeekAndSecondBufferedTotalDuration;
- (void)resetPlayerStates;
- (long long)currentTime;
- (long long)getCurrentTimeWithUserInfo:(id)arg1;
- (id)generateFlowId;
- (void)setCurrentReportStep:(unsigned long long)arg1;
- (void)resetRecorders;
- (void)setupParams;
- (void)reportStepImpl:(unsigned long long)arg1 withParam:(id)arg2;
- (void)reportLiveWithStep:(unsigned long long)arg1;
- (void)reportVodWithStep:(unsigned long long)arg1 withParam:(id)arg2;
- (void)reportUnknowPlayTypeWithStep:(unsigned long long)arg1 withParam:(id)arg2;
- (void)reportStep:(unsigned long long)arg1 withParam:(id)arg2;
- (void)updateLiveParamsWithStep:(unsigned long long)arg1 shouldUpdateFromBiz:(_Bool)arg2;
- (void)updateVodExParamsWithStep:(unsigned long long)arg1 shouldUpdateFromBiz:(_Bool)arg2;
- (void)updateCommonParamFromBusiness:(_Bool)arg1;
- (void)updateCommonParamsWithStep:(unsigned long long)arg1 shouldUpdateFromBiz:(_Bool)arg2;
- (void)handleLiveDoneWithUserInfo:(id)arg1 endReason:(unsigned long long)arg2;
- (void)handleVodDoneWithUserInfo:(id)arg1 endReason:(unsigned long long)arg2;
- (void)handlePlayerDoneWithUserInfo:(id)arg1 endReason:(unsigned long long)arg2;
- (void)reportStepCompleteWithUserInfo:(id)arg1 endReason:(unsigned long long)arg2;
- (void)handleApplicationWillEnterForegroundWithUserInfo:(id)arg1;
- (void)handleApplicationDidEnterBackgroundWithUserInfo:(id)arg1;
- (void)handlePlayerCheckIsPlayingWithUserInfo:(id)arg1;
- (void)handleProtocolInfoUpdateWithUserInfo:(id)arg1;
- (void)handleCdnUrlInfoUpdateWithUserInfo:(id)arg1;
- (void)handleDownloadProgressUpdateWithUserInfo:(id)arg1;
- (void)handleSwitchDefinitionEndWithUserInfo:(id)arg1;
- (void)handleSwitchDefinitionStartWithUserInfo:(id)arg1;
- (void)handleFirstClipOpenedWithUserInfo:(id)arg1;
- (void)handleFirstPacketReadWithUserInfo:(id)arg1;
- (void)handleDeselectSubtitleEndWithUserInfo:(id)arg1;
- (void)handleSelectSubtitleEndWithUserInfo:(id)arg1;
- (void)handleSelectSubtitleWithUserInfo:(id)arg1;
- (void)handleOnHlsPrivateTagWithUserInfo:(id)arg1;
- (void)handleSetPlaySpeedWithUserInfo:(id)arg1;
- (void)handleBufferingEndWithUserInfo:(id)arg1;
- (void)handleBufferingStartWithUserInfo:(id)arg1;
- (void)handleResetWithUserInfo:(id)arg1;
- (void)handlePlayerReleaseWithUserInfo:(id)arg1;
- (void)handlePlayCompleteWithUserInfo:(id)arg1;
- (void)handleSeekCompleteWithUserInfo:(id)arg1;
- (void)handleSeekStartWithUserInfo:(id)arg1;
- (void)handlePlayerErrorWithUserInfo:(id)arg1;
- (void)handleStopWithUserInfo:(id)arg1;
- (void)handleFirstFrameRenderedWithUserInfo:(id)arg1;
- (void)handlePrepareDoneWithUserInfo:(id)arg1;
- (void)handlePrepareStartWithUserInfo:(id)arg1;
- (void)handleCreateDoneWithUserInfo:(id)arg1;
- (void)handleCreateStartWithUserInfo:(id)arg1;
- (id)logTag;
- (id)handlerInvocationWithSEL:(SEL)arg1 eventInfo:(id)arg2;
- (void)onEvent:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (void)onDetach;
- (void)onAttatch;
- (void)setReportSamplingRate:(double)arg1;
- (void)reportEvent:(unsigned long long)arg1 withParams:(id)arg2;
- (void)setReportInfoGetter:(id)arg1;
- (_Bool)doReportSampling;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

