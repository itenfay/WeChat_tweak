//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDragManager, NSString, SessionForwardRecordLogic, SharePreConfirmView, SightIconView, UIDragInteraction, UIImage, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer, WCDataItem, WCMediaItem, WCMomentsPlayerSourceController, WCMomentsScrollActionSheet, WCPlayerConfigControlView, WCPlayerConfigFullScreenViewController, WCPlayerView;
@protocol WCSNSNodeVideoViewDelegate;

@interface WCSNSNodeVideoView
{
    _Bool _isImageReady;
    _Bool _bIgnoreLongPress;
    _Bool _isVodeoPlayContinueInFullScreen;
    _Bool _haveMaterialButton;
    _Bool _isBufferingViewLoading;
    _Bool _hasPendingVideoComposition;
    unsigned int _switchingVideoCompositionSeed;
    id <WCSNSNodeVideoViewDelegate> _delegate;
    WCDataItem *_dataItem;
    WCMediaItem *_mediaData;
    NSString *_sightPath;
    NSString *_cpKey;
    unsigned long long _scene;
    SightIconView *_playIconView;
    WCPlayerView *_playerView;
    WCPlayerConfigFullScreenViewController *_videoPlayerVC;
    UIImage *_thumbImage;
    UIImageView *_thumbImageView;
    MMDragManager *_dragManager;
    UIImageView *_tmp_liftingImgView;
    UIDragInteraction *_dragInteraction;
    WCMomentsPlayerSourceController *_playerSourceController;
    WCPlayerConfigControlView *_playerConfigControlView;
    NSString *_materialFileExt;
    UITapGestureRecognizer *_singleGestureRecognizer;
    UILongPressGestureRecognizer *_longGestureRecognizer;
    SharePreConfirmView *_sharePreConfirmView;
    WCMomentsScrollActionSheet *_actionSheet;
    SessionForwardRecordLogic *_forwardRecordLogic;
    CDUnknownBlockType _videoCompositionConfigurationHandler;
    CDUnknownBlockType _videoCompositionCompletionHandler;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int switchingVideoCompositionSeed; // @synthesize switchingVideoCompositionSeed=_switchingVideoCompositionSeed;
@property(copy, nonatomic) CDUnknownBlockType videoCompositionCompletionHandler; // @synthesize videoCompositionCompletionHandler=_videoCompositionCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType videoCompositionConfigurationHandler; // @synthesize videoCompositionConfigurationHandler=_videoCompositionConfigurationHandler;
@property(nonatomic) _Bool hasPendingVideoComposition; // @synthesize hasPendingVideoComposition=_hasPendingVideoComposition;
@property(retain, nonatomic) SessionForwardRecordLogic *forwardRecordLogic; // @synthesize forwardRecordLogic=_forwardRecordLogic;
@property(retain, nonatomic) WCMomentsScrollActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) SharePreConfirmView *sharePreConfirmView; // @synthesize sharePreConfirmView=_sharePreConfirmView;
@property(nonatomic) _Bool isBufferingViewLoading; // @synthesize isBufferingViewLoading=_isBufferingViewLoading;
@property(retain, nonatomic) UILongPressGestureRecognizer *longGestureRecognizer; // @synthesize longGestureRecognizer=_longGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *singleGestureRecognizer; // @synthesize singleGestureRecognizer=_singleGestureRecognizer;
@property(retain, nonatomic) NSString *materialFileExt; // @synthesize materialFileExt=_materialFileExt;
@property(nonatomic) _Bool haveMaterialButton; // @synthesize haveMaterialButton=_haveMaterialButton;
@property(retain, nonatomic) WCPlayerConfigControlView *playerConfigControlView; // @synthesize playerConfigControlView=_playerConfigControlView;
@property(nonatomic) _Bool isVodeoPlayContinueInFullScreen; // @synthesize isVodeoPlayContinueInFullScreen=_isVodeoPlayContinueInFullScreen;
@property(retain, nonatomic) WCMomentsPlayerSourceController *playerSourceController; // @synthesize playerSourceController=_playerSourceController;
@property(retain, nonatomic) UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property(retain, nonatomic) UIImageView *tmp_liftingImgView; // @synthesize tmp_liftingImgView=_tmp_liftingImgView;
@property(retain, nonatomic) MMDragManager *dragManager; // @synthesize dragManager=_dragManager;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) WCPlayerConfigFullScreenViewController *videoPlayerVC; // @synthesize videoPlayerVC=_videoPlayerVC;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool bIgnoreLongPress; // @synthesize bIgnoreLongPress=_bIgnoreLongPress;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(retain, nonatomic) NSString *sightPath; // @synthesize sightPath=_sightPath;
@property(nonatomic) _Bool isImageReady; // @synthesize isImageReady=_isImageReady;
@property(retain, nonatomic) WCMediaItem *mediaData; // @synthesize mediaData=_mediaData;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCSNSNodeVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleClickWeAppOpenMaterial:(id)arg1;
- (void)handleClickWeAppListOpenMaterial;
- (_Bool)addWAOpenWxMaterialButton:(id)arg1;
- (void)tryAddWAOpenWxMaterialButtonWhenPopMenu:(_Bool)arg1;
- (void)refreshWAWxMaterialAppInfo:(id)arg1;
- (void)updateDebugInfoInPlayerView:(id)arg1;
- (void)updateDebugInfoIfNeeded;
- (void)templateFullScreenViewControllerDidClose:(id)arg1;
- (void)templateFullScreenViewControllerWillClose:(id)arg1;
- (void)templateFullScreenViewController:(id)arg1 forwardSuccess:(id)arg2;
- (void)templateFullScreenViewController:(id)arg1 didCancelForward:(id)arg2;
- (void)handleCloseFullScreenComplete;
- (void)templateFullScreenViewController:(id)arg1 closeFullScreenComplete:(id)arg2;
- (void)openTemplateFullScreenWithTask:(id)arg1 isMuted:(_Bool)arg2 fromViewController:(id)arg3;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (id)generateShareInfo;
- (_Bool)canShareForMiaoJianApp;
- (_Bool)disableShareAndProgress;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)playerSourceController:(id)arg1 didChangeSourceStatus:(long long)arg2;
- (id)currentPlayerViewForPlayerSourceController:(id)arg1;
- (void)onTapAttachButton:(id)arg1;
- (void)onExistPlayAnimationFinish;
- (void)onCloseFullScreenPlayComplete:(id)arg1;
- (void)handleWillCloseFullScreen;
- (void)onCloseFullScreenPlay:(id)arg1;
- (void)handleForwardSuccess:(id)arg1;
- (void)onForwardSuccess:(id)arg1;
- (void)handleForwardCancel:(id)arg1;
- (void)onForwardCancle:(id)arg1;
- (id)generateForwardUserInfoWithMediaWrap:(id)arg1;
- (id)generateFavWithMediaWrap:(id)arg1;
- (id)generateMsgWithMediaWrap:(id)arg1;
- (void)updateActionSheetIfNeeded;
- (id)createRecentForwardView;
- (void)setupActionSheetItem;
- (void)setupActionSheet;
- (void)onLongPress:(id)arg1;
- (void)onMuteForExternalPlaybackMode:(id)arg1;
- (void)onWillResumePlay:(id)arg1;
- (void)onPlayerCreated;
- (void)vc:(id)arg1 playNewVideo:(id)arg2 silencePlay:(_Bool)arg3;
- (void)vc:(id)arg1 continuePlayVideo:(id)arg2 silencePlay:(_Bool)arg3;
- (void)switchPlayerSourceToHDIfNeeded;
- (void)playInFullScreen:(_Bool)arg1;
- (void)silencePauseAtCurrentScreen;
- (void)onVoiceOverClick;
- (void)clearPlayerResource;
- (void)silenceStopAtCurrentScreen;
- (void)silencePlayAtCurrentScreen;
- (void)currentAutoPlayVideoWillChange;
- (void)silencePlay;
- (void)LongPressEvents:(id)arg1;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (_Bool)_isDownloadArgsMatched:(id)arg1;
- (id)generateConfig;
- (id)genPlayerConfigControlView;
- (id)getPlayerInfoWithMuted:(_Bool)arg1 isFullScreen:(_Bool)arg2 dataItem:(id)arg3 mediaItem:(id)arg4;
- (void)updateThumbImage:(id)arg1;
- (void)asyncRecordMicroMerchantInteractionIfNeeded;
- (void)onClickWCSight:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateDataItem:(id)arg1 mediaItem:(id)arg2;
- (id)initWithDataItem:(id)arg1 mediaItem:(id)arg2 withFrame:(struct CGRect)arg3;
- (id)initWithDataItem:(id)arg1 mediaItem:(id)arg2;
- (void)initDataItem:(id)arg1 mediaItem:(id)arg2;
- (void)liftingImageNeedRemove;
- (id)liftingItemWithImage:(id)arg1 parameters:(id)arg2;
- (void)showViewWhenCloseFullScreenAnimationEnd;
- (void)hideViewWhenShowFullScreenAnimationEnd;
- (long long)browseScene;
- (void)reloadSightPreviewImage;
- (id)getImage;
- (_Bool)isSightVideoExist;
- (void)WCPlayer_onPlayerCreated;
- (void)_resetVideoComposition;
- (void)_switchVideoCompositionWithConfigurationHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearPendingVideoComposition;
- (void)switchPendingVideoCompositionIfNeeded;
- (void)resetVideoComposition;
- (void)switchVideoCompositionWithConfigurationHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

