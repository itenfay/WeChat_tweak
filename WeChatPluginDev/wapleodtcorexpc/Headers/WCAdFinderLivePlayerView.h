//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFeedPreviewLogic, MMFinderLiveSnsAdStreamInfo, MMLiveCDNPlayerView, MMTimer, MMUIView, NSString, SightIconView, WCAdFinderLiveStreamInfo, WCAdURLImageView, WCDataItem;

@interface WCAdFinderLivePlayerView
{
    _Bool _bTimelineScene;
    _Bool _intentToPlay;
    _Bool _playerPlayBeginFlag;
    _Bool _liveJoinedFlag;
    _Bool _shutdownFlag;
    int _displayType;
    WCDataItem *_dataItem;
    WCAdFinderLiveStreamInfo *_adLiveStreamInfo;
    MMFinderLiveSnsAdStreamInfo *_currentFinderLiveStreamInfo;
    MMUIView *_bgView;
    WCAdURLImageView *_thumbView;
    MMLiveCDNPlayerView *_streamPlayer;
    SightIconView *_playIconView;
    WCAdURLImageView *_brandWallpaperView;
    WCAdURLImageView *_brandFrontImageView;
    MMTimer *_checkJoinLiveTimer;
    MMFinderLiveFeedPreviewLogic *_finderLivePreviewLogic;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shutdownFlag; // @synthesize shutdownFlag=_shutdownFlag;
@property(retain, nonatomic) MMFinderLiveFeedPreviewLogic *finderLivePreviewLogic; // @synthesize finderLivePreviewLogic=_finderLivePreviewLogic;
@property(retain, nonatomic) MMTimer *checkJoinLiveTimer; // @synthesize checkJoinLiveTimer=_checkJoinLiveTimer;
@property(nonatomic) _Bool liveJoinedFlag; // @synthesize liveJoinedFlag=_liveJoinedFlag;
@property(nonatomic) _Bool playerPlayBeginFlag; // @synthesize playerPlayBeginFlag=_playerPlayBeginFlag;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) _Bool intentToPlay; // @synthesize intentToPlay=_intentToPlay;
@property(retain, nonatomic) WCAdURLImageView *brandFrontImageView; // @synthesize brandFrontImageView=_brandFrontImageView;
@property(retain, nonatomic) WCAdURLImageView *brandWallpaperView; // @synthesize brandWallpaperView=_brandWallpaperView;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) MMLiveCDNPlayerView *streamPlayer; // @synthesize streamPlayer=_streamPlayer;
@property(retain, nonatomic) WCAdURLImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) MMUIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) MMFinderLiveSnsAdStreamInfo *currentFinderLiveStreamInfo; // @synthesize currentFinderLiveStreamInfo=_currentFinderLiveStreamInfo;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) WCAdFinderLiveStreamInfo *adLiveStreamInfo; // @synthesize adLiveStreamInfo=_adLiveStreamInfo;
@property(nonatomic) _Bool bTimelineScene; // @synthesize bTimelineScene=_bTimelineScene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)onCanvasPageViewAnimationSetContentHidden:(_Bool)arg1;
- (void)onPlayChangeSize:(struct CGSize)arg1;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayBegin;
- (void)onPlayLiveConnectSuccessful;
- (_Bool)isBrandWallpaperDisplayType;
- (id)fetchFinderLiveStreamReportInfo;
- (void)updateStreamPlayerFrame;
- (void)hidePlayIcon;
- (void)showPlayIconWithPlayType;
- (void)showPlayIconWithLoadingType;
- (void)checkAndNotifyLiveStatusChanged:(id)arg1;
- (_Bool)isLiveStatusAndLiveStreamSame;
- (_Bool)isFinderLiving:(id)arg1;
- (void)cleanOnLiveEnd;
- (void)onFinderLiveStreamInfoResponse:(id)arg1;
- (void)requestFinderLiveStreamInfoFromServer;
- (void)checkAndRefreshFinderLiveStreamInfo;
- (id)fetchLocalFinderLiveStreamInfo;
- (void)checkJoinLive;
- (void)stopCheckJoinLiveTimer;
- (void)startCheckJoinLiveTimer;
- (void)realStartPlayer:(id)arg1;
- (void)shutdown;
- (void)pause;
- (void)play;
- (void)initData;
- (id)fetchThumbUrl;
- (id)createImageView:(id)arg1;
- (void)initView;
- (void)onWillEnterForeground;
- (void)addNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 bTimelineScene:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

