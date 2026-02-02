//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAdaptiveLabel, MMImageGridView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SightIconView, UIButton, WCAdCommonInteractionLogic, WCAdLiveDisplayView, WCMediaItem;

@interface WCContentItemViewTemplateGrid
{
    MMAdaptiveLabel *_descriptionView;
    MMImageGridView *_imageGridView;
    UIButton *_moreButton;
    UIButton *_moreImageButton;
    WCMediaItem *m_currentMediaItem;
    NSMutableArray *m_arrMediaItem;
    NSMutableSet *_setViewMediaIndex;
    unsigned long long _viewInitIndex;
    NSMutableSet *_setScaleOutMediaIndex;
    NSMutableSet *_setScaleInMediaIndex;
    unsigned int _loadedStartTime;
    unsigned int _loadedEndTime;
    NSMutableDictionary *_dicMediaStartTime;
    NSMutableDictionary *_dicMediaEndTime;
    NSMutableArray *_arrNeedLogMediaID;
    NSMutableArray *_arrPreloadMediaID;
    NSMutableArray *_arrDownloadMediaID;
    SightIconView *_playIconView;
    WCAdCommonInteractionLogic *_commonInteractionLogic;
    WCAdLiveDisplayView *_liveDisplayView;
    unsigned long long _currentFullScreenDisplayMediaIndex;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
+ (double)heightForDataItem:(id)arg1 showDetail:(_Bool)arg2;
+ (struct CGSize)fetchImageSizeForAdWithPlayIcon:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentFullScreenDisplayMediaIndex; // @synthesize currentFullScreenDisplayMediaIndex=_currentFullScreenDisplayMediaIndex;
@property(retain, nonatomic) WCAdLiveDisplayView *liveDisplayView; // @synthesize liveDisplayView=_liveDisplayView;
@property(retain, nonatomic) WCAdCommonInteractionLogic *commonInteractionLogic; // @synthesize commonInteractionLogic=_commonInteractionLogic;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
- (void)restoreAccessibilityFocusIfNeeded;
- (_Bool)accessibilityActivate;
- (void)onCloseCanvasPageView;
- (void)onAdCommonInteractionLogicShakeActionFired;
- (unsigned long long)onAdCommonInteractionLogicFetchScene;
- (id)onAdCommonInteractionLogicFetchDataItem;
- (void)initInteractionViewWithDataItem:(id)arg1;
- (id)interactionView;
- (void)onAddDownloadQueue:(id)arg1 downloadType:(long long)arg2;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (id)genLogStrWithIndexSet:(id)arg1;
- (void)tryLogClickBigImage;
- (void)tryLogThumbImageLoadedEffiency:(_Bool)arg1;
- (void)throwUrlMessage;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)hideMenu;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadFailed:(id)arg1;
- (void)onDownloadFinish:(id)arg1;
- (void)onLongPressedWCImage:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onClickWCAdImage:(id)arg1;
- (void)asyncRecordMicroMerchantInteractionIfNeeded:(unsigned long long)arg1 bNeedEdit:(_Bool)arg2;
- (id)currentViewController;
- (void)onClickWCImage:(id)arg1 needEdit:(_Bool)arg2 From3DTouch:(_Bool)arg3 silencePlay:(_Bool)arg4;
- (void)onClickWCImageFrom3DTouch:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)tryToReportAdImageDownload:(id)arg1 isSuccess:(_Bool)arg2 isCancel:(_Bool)arg3;
- (void)onMediaDidScaleIn:(unsigned int)arg1;
- (void)onMediaDidScaleOut:(unsigned int)arg1;
- (void)onViewAnimationFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)onViewAnimationDidHide;
- (void)onViewAnimationWillHide;
- (void)contentItemDidEndDecelerating;
- (void)contentItemBecomeInvisible;
- (void)contentItemWillDisappear;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisplay;
- (void)updateLiveStatus:(int)arg1;
- (_Bool)shouldAdAddLiveDisplayView:(id)arg1;
- (void)recoverImageViewsHiddenState:(id)arg1;
- (_Bool)isFullScreenShowImageView:(id)arg1;
- (void)showAllImageViews;
- (id)imageViewOfIndex:(unsigned long long)arg1;
- (void)updateImageViewFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)behaviourInfoSession;
- (void)recordDetailPageBrowseMediaIfNeeded:(id)arg1;
- (void)recordDetailPageBrowseMediaWithIndexIfNeeded:(unsigned int)arg1;
- (void)startSilencePlayLivePhoto;
- (void)onSilencePlayLivePhoto;
- (void)onImageWebSearch;
- (void)onCircleToSearch;
- (void)startEditImage;
- (void)onEditImage:(id)arg1;
- (_Bool)canEditImage;
- (void)onExposeFromImage:(id)arg1;
- (void)shareToOpenSDK;
- (void)onShareToOpenSDK:(id)arg1;
- (void)addFavorite;
- (void)onFavoriteAdd:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

