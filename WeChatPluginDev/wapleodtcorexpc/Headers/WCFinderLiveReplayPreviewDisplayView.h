//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveReplayGreateTimeModel, MMFinderLiveReplayPreviewResolutionRecordInfo, MMFinderLiveReplayTask, MMFinderLiveTaskId, MMLiveStorageCleanupPinningToken, MMWebImageView, NSMutableArray, NSString, WCFinderLiveReplayPreviewImgLoader, WCFinderLiveReplayPreviewPlayerControlView, WCPlayerPlaybackInfo, WCPlayerView;
@protocol WCFinderLiveReplayPreviewDisplayDelegate;

@interface WCFinderLiveReplayPreviewDisplayView : UIView
{
    _Bool _isFetchAllPlayerData;
    _Bool _fixedResolution;
    _Bool _isMainVideoPrepareToPlay;
    _Bool _hasPreDownLoadForLittleStride;
    _Bool _isPreviewPlayerPrepareToPlay;
    _Bool _forbidPreFetchPlayerData;
    _Bool _isPreviewingByImg;
    _Bool _isPreviewingByPlayer;
    _Bool _isStartPreview;
    unsigned int _frameInterval;
    WCFinderLiveReplayPreviewImgLoader *_previewImgLoader;
    id <WCFinderLiveReplayPreviewDisplayDelegate> _previewDelegate;
    double _totalTime;
    MMFinderLiveTaskId *_taskId;
    MMWebImageView *_previewImgView;
    WCPlayerView *_previewPlayer;
    WCFinderLiveReplayPreviewPlayerControlView *_previewControlView;
    NSString *_previewReplayUrl;
    double _currentTime;
    double _currImgPreviewTime;
    double _currImgLoadBackTime;
    double _previewPlayerDuration;
    double _currPlayerInitialPos;
    double _currPlayerPreviewTime;
    double _currPlayerPlayBackTime;
    MMFinderLiveReplayPreviewResolutionRecordInfo *_currPlayerResolutionRecord;
    long long _currentPreviewByMode;
    long long _currentPreviewMode;
    long long _currentPreviewState;
    WCPlayerPlaybackInfo *_mainVideoPlayBackInfo;
    double _playerPreviewInvokeStartTime;
    MMFinderLiveReplayGreateTimeModel *_currGreateTimeModel;
    NSMutableArray *_previewVideoResolutionRecordList;
    MMLiveStorageCleanupPinningToken *_resourcesPinningToken;
    struct CGSize _currPlayerPresentationSize;
}

+ (id)getFixedSectionFromReplayUrl:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken; // @synthesize resourcesPinningToken=_resourcesPinningToken;
@property(nonatomic) _Bool isStartPreview; // @synthesize isStartPreview=_isStartPreview;
@property(retain, nonatomic) NSMutableArray *previewVideoResolutionRecordList; // @synthesize previewVideoResolutionRecordList=_previewVideoResolutionRecordList;
@property(retain, nonatomic) MMFinderLiveReplayGreateTimeModel *currGreateTimeModel; // @synthesize currGreateTimeModel=_currGreateTimeModel;
@property(nonatomic) double playerPreviewInvokeStartTime; // @synthesize playerPreviewInvokeStartTime=_playerPreviewInvokeStartTime;
@property(nonatomic) _Bool isPreviewingByPlayer; // @synthesize isPreviewingByPlayer=_isPreviewingByPlayer;
@property(nonatomic) _Bool isPreviewingByImg; // @synthesize isPreviewingByImg=_isPreviewingByImg;
@property(nonatomic) _Bool forbidPreFetchPlayerData; // @synthesize forbidPreFetchPlayerData=_forbidPreFetchPlayerData;
@property(nonatomic) _Bool isPreviewPlayerPrepareToPlay; // @synthesize isPreviewPlayerPrepareToPlay=_isPreviewPlayerPrepareToPlay;
@property(nonatomic) _Bool hasPreDownLoadForLittleStride; // @synthesize hasPreDownLoadForLittleStride=_hasPreDownLoadForLittleStride;
@property(retain, nonatomic) WCPlayerPlaybackInfo *mainVideoPlayBackInfo; // @synthesize mainVideoPlayBackInfo=_mainVideoPlayBackInfo;
@property(nonatomic) _Bool isMainVideoPrepareToPlay; // @synthesize isMainVideoPrepareToPlay=_isMainVideoPrepareToPlay;
@property(nonatomic) long long currentPreviewState; // @synthesize currentPreviewState=_currentPreviewState;
@property(nonatomic) long long currentPreviewMode; // @synthesize currentPreviewMode=_currentPreviewMode;
@property(nonatomic) long long currentPreviewByMode; // @synthesize currentPreviewByMode=_currentPreviewByMode;
@property(retain, nonatomic) MMFinderLiveReplayPreviewResolutionRecordInfo *currPlayerResolutionRecord; // @synthesize currPlayerResolutionRecord=_currPlayerResolutionRecord;
@property(nonatomic) struct CGSize currPlayerPresentationSize; // @synthesize currPlayerPresentationSize=_currPlayerPresentationSize;
@property(nonatomic) double currPlayerPlayBackTime; // @synthesize currPlayerPlayBackTime=_currPlayerPlayBackTime;
@property(nonatomic) double currPlayerPreviewTime; // @synthesize currPlayerPreviewTime=_currPlayerPreviewTime;
@property(nonatomic) double currPlayerInitialPos; // @synthesize currPlayerInitialPos=_currPlayerInitialPos;
@property(nonatomic) double previewPlayerDuration; // @synthesize previewPlayerDuration=_previewPlayerDuration;
@property(nonatomic) double currImgLoadBackTime; // @synthesize currImgLoadBackTime=_currImgLoadBackTime;
@property(nonatomic) double currImgPreviewTime; // @synthesize currImgPreviewTime=_currImgPreviewTime;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) unsigned int frameInterval; // @synthesize frameInterval=_frameInterval;
@property(nonatomic) _Bool fixedResolution; // @synthesize fixedResolution=_fixedResolution;
@property(retain, nonatomic) NSString *previewReplayUrl; // @synthesize previewReplayUrl=_previewReplayUrl;
@property(retain, nonatomic) WCFinderLiveReplayPreviewPlayerControlView *previewControlView; // @synthesize previewControlView=_previewControlView;
@property(retain, nonatomic) WCPlayerView *previewPlayer; // @synthesize previewPlayer=_previewPlayer;
@property(retain, nonatomic) MMWebImageView *previewImgView; // @synthesize previewImgView=_previewImgView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool isFetchAllPlayerData; // @synthesize isFetchAllPlayerData=_isFetchAllPlayerData;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) __weak id <WCFinderLiveReplayPreviewDisplayDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;
@property(retain, nonatomic) WCFinderLiveReplayPreviewImgLoader *previewImgLoader; // @synthesize previewImgLoader=_previewImgLoader;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)onLoadImageOK:(id)arg1 extraInfo:(id)arg2;
- (double)getPreviewPlayerFrameInterval;
- (_Bool)useImgForFirstFrameIfNeeded:(double)arg1;
@property(readonly, nonatomic) _Bool handleDiscontinuty;
@property(readonly, nonatomic) _Bool isSoftDecodeByThumbPlayer;
@property(readonly, nonatomic) _Bool isCurrEnablePreFetchPlayerData;
@property(readonly, nonatomic) MMFinderLiveReplayTask *replayLiveTask;
- (id)createPlayerControlView;
- (id)saveFilename;
- (id)fileKey;
- (id)videoFormatPath;
- (id)videoSavePath;
- (id)generateDownloadArgsWrap;
- (void)updateResolutionTimeRangeForPlayArgsIfNeeded:(id)arg1;
- (id)createPlayerInfo;
- (void)schedulePreviewByPlayer;
- (_Bool)checkPreviewPlayerShouldIgnorePreviewTime:(double)arg1;
- (_Bool)checkPreviewPlayerEnableToPreviewTime:(double)arg1;
- (void)previewByPlayer;
- (id)getBestPreviewImgResult:(double)arg1;
- (void)schedulePreviewByImg;
- (void)previewByImg;
- (struct _NSRange)getCurrentFixedResolutionTimeRange;
- (void)updatePreviewPlayerDuration:(double)arg1;
- (void)updateIsFetchAllPlayerData:(_Bool)arg1;
- (void)checkCurrPresentationSizeEqualToRecordIfNeeded;
- (void)updatePreviewPlayerPresentationSize:(struct CGSize)arg1;
- (id)getFitResolutionRecordInfo:(double)arg1;
- (struct CGRect)getContentFrameFromResolutionSize:(struct CGSize)arg1 timeOffset:(double)arg2;
- (void)checkEnablePreFetchPlayerData;
- (_Bool)isCurrentEnablePreviewByPlayer;
- (_Bool)isCurrentEnablePreviewByImg;
- (_Bool)updateDisplaySize:(struct CGSize)arg1 mode:(long long)arg2;
- (_Bool)updateCurrentPreviewMode:(long long)arg1;
- (_Bool)updateDisplaySize;
- (_Bool)updatePreviewMode;
- (void)updatePreviewModeAndDisplaySize;
- (void)resetPreviewByPlayer;
- (void)resetPreviewByImg;
- (void)inner_preview:(double)arg1;
- (void)inner_previewAtOnce:(double)arg1;
- (void)tryToPreDownLoadPlayerContentForLittleStrideIfNeeded;
- (void)updateCurrentPreviewState:(long long)arg1;
- (void)updateCurrentPreviewByMode:(long long)arg1;
- (void)updateFrameInterval:(unsigned int)arg1;
- (void)startPreview;
- (_Bool)isSupportOnlyUsePlayerPreviewMode:(double)arg1;
- (_Bool)hasPrepareForPreview;
- (void)onReplayVideoPrepareToPlay:(id)arg1;
- (void)appendPreviewVideoResolutionNodeList:(id)arg1 resolutionSize:(struct CGSize)arg2;
- (void)prepareForLittleStridePreview;
- (void)prepareForLargeStridePreview;
- (void)resetToDefaultStridePreview;
- (void)updateReplayPreviewUrl:(id)arg1 fixedResolution:(_Bool)arg2;
- (void)stopPreview;
- (void)preview:(double)arg1 byMode:(long long)arg2;
- (void)previewWithGreateTime:(id)arg1 byMode:(long long)arg2;
- (void)previewAtOnce:(double)arg1 byMode:(long long)arg2;
- (void)previewAtOnceWithGreateTime:(id)arg1 byMode:(long long)arg2;
- (void)adjustPreviewPlayerFrame;
- (void)reCreatePreviewPlayer;
- (void)changePreviewPlayer;
- (void)destroyPreviewPlayer;
- (void)createPreviewPlayerIfNeeded;
- (void)layoutPreviewPlayer;
- (void)layoutPreviewImgView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1 taskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

