//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveKSKitMusicSong, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveStorageCleanupPinningToken, MMLiveTaskId, MMTimer, MMUILabel, MMWebImageView, UIButton, UIView, WCFinderAnimationLoadingView;

@interface MMFinderLiveKTVPrepareGuidePanel
{
    _Bool _isSongNotifyToPlay;
    _Bool _isSingSessionPrepared;
    _Bool _isSingSessionConnecting;
    _Bool _isSongResPrepared;
    _Bool _isSongResDownloading;
    _Bool _isGiveUp;
    unsigned int _countDownSecond;
    CDUnknownBlockType _prepareFinishCallback;
    MMFinderLiveKSKitMusicSong *_songData;
    MMLiveTaskId *_taskId;
    UIView *_panelView;
    MMUILabel *_tipLabel;
    MMWebImageView *_songCoverImgView;
    MMUILabel *_songNameLabel;
    MMUILabel *_artistNameLabel;
    MMUILabel *_durationLabel;
    WCFinderAnimationLoadingView *_loadingView;
    MMUILabel *_loadingLabel;
    UIButton *_startButton;
    UIButton *_giveupButton;
    MMTimer *_countDownTimer;
    MMLiveStorageCleanupPinningToken *_songResourcesPinningToken;
}

+ (id)genFormatDuraionTimeStringFrom:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *songResourcesPinningToken; // @synthesize songResourcesPinningToken=_songResourcesPinningToken;
@property(nonatomic) _Bool isGiveUp; // @synthesize isGiveUp=_isGiveUp;
@property(nonatomic) _Bool isSongResDownloading; // @synthesize isSongResDownloading=_isSongResDownloading;
@property(nonatomic) _Bool isSongResPrepared; // @synthesize isSongResPrepared=_isSongResPrepared;
@property(nonatomic) _Bool isSingSessionConnecting; // @synthesize isSingSessionConnecting=_isSingSessionConnecting;
@property(nonatomic) _Bool isSingSessionPrepared; // @synthesize isSingSessionPrepared=_isSingSessionPrepared;
@property(nonatomic) _Bool isSongNotifyToPlay; // @synthesize isSongNotifyToPlay=_isSongNotifyToPlay;
@property(retain, nonatomic) MMTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(nonatomic) unsigned int countDownSecond; // @synthesize countDownSecond=_countDownSecond;
@property(retain, nonatomic) UIButton *giveupButton; // @synthesize giveupButton=_giveupButton;
@property(retain, nonatomic) UIButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) MMUILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) MMUILabel *artistNameLabel; // @synthesize artistNameLabel=_artistNameLabel;
@property(retain, nonatomic) MMUILabel *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) MMWebImageView *songCoverImgView; // @synthesize songCoverImgView=_songCoverImgView;
@property(retain, nonatomic) MMUILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveKSKitMusicSong *songData; // @synthesize songData=_songData;
@property(copy, nonatomic) CDUnknownBlockType prepareFinishCallback; // @synthesize prepareFinishCallback=_prepareFinishCallback;
@property(readonly, nonatomic) _Bool isPrepared;
@property(readonly, nonatomic) unsigned int initCountDownSecond;
@property(readonly, nonatomic) MMFinderLiveTaskId *finderTaskId;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)onSingPrepareResponse;
- (void)startToPrepareSongResource:(id)arg1;
- (void)startToPrepareSingSession:(id)arg1;
- (void)startCgiToPlay:(id)arg1;
- (void)prepareToStartSing;
- (void)refreshUI;
- (void)refreshTipLabel;
- (void)onCountDownFinish;
- (void)stopCountDown;
- (void)onCountDown;
- (void)startCountDown;
- (void)updateDatas;
- (void)onCurrSongNameUpdated;
- (void)onCurrSongItemBasicInfoUpdated;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (_Bool)needShowLoading;
- (void)updateLoadingState;
- (void)layoutLoadingWidgets;
- (_Bool)needShowRetryTip;
- (void)updateStartBtnText;
- (void)startButtonAction;
- (void)layoutStartButton;
- (void)giveupButtonAction;
- (void)layoutGiveupButton;
- (void)updateArtistNameAndDurationLabelsOrigin;
- (void)layoutArtistNameAndDurationLabels;
- (void)updateSongNameLabelOrigin;
- (void)layoutSongNameLabel;
- (void)layoutSongCoverImgView;
- (void)updateTipLabelOrigin;
- (void)updateTipLabelText;
- (void)layoutTipLabel;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutPanelView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initDefaultData;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

@end

