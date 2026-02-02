//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ImageMessageViewModel, MMAssetICloudLoadingView, MMDragManager, NSString, SightIconView, UIDragInteraction, UIImageView, UIView, YYAsyncImageView;

@interface ImageMessageCellView
{
    YYAsyncImageView *m_imageView;
    UIImageView *m_imageDownloadFailView;
    UIImageView *m_imageLoadingBackgroundView;
    SightIconView *m_imageLoadingView;
    _Bool m_bhasDownloadComplete;
    UIImageView *m_icloudBackground;
    MMAssetICloudLoadingView *m_icloudLoadingView;
    MMDragManager *dragManager;
    UIImageView *tmp_liftingImgView;
    UIDragInteraction *dragInteraction;
    UIView *m_imageMaskView;
}

- (void).cxx_destruct;
- (void)animateShowComponentWithDuration:(double)arg1;
- (void)showComponent;
- (void)hideComponent;
- (id)accessibilityLabel;
- (void)onClickAsRefer;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (id)viewControllerForPreview:(id)arg1;
- (_Bool)canPeek;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)OnDownloadImageOk:(id)arg1;
- (void)onThumbImageSave:(id)arg1;
- (void)liftingImageNeedRemove;
- (id)liftingItemWithImage:(id)arg1 parameters:(id)arg2;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)onTouchEnded;
- (void)onImageForwardToFinder:(id)arg1;
- (void)onCircleToSearch;
- (void)onChatImageSearch;
- (void)onEdit:(id)arg1;
- (void)showImageNeedEdit:(_Bool)arg1;
- (void)showImage;
- (void)onForward:(id)arg1;
- (void)doFavorite;
- (id)operationMenuItems;
- (_Bool)canShowSearchMenuItem;
- (_Bool)canShowEditMenuItem;
- (_Bool)canShowFavoriteMenuItem;
- (_Bool)canShowForwardMenuItem;
- (void)setHighlighted:(_Bool)arg1;
- (void)removeICloudIcon;
- (void)showICloudLoading:(_Bool)arg1;
- (void)stopLoading;
- (void)startLoadingWithUseProgress:(_Bool)arg1;
- (void)startLoading;
- (void)addDownloadFailView;
- (id)getCoverImage;
- (void)initImageView;
- (struct CGRect)showRectForMenuController;
- (id)displayViewForImageBrowser;
- (void)updateStatus;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (void)prepareForReuse;
- (void)updateDragAndDrop;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) ImageMessageViewModel *viewModel; // @dynamic viewModel;

@end

