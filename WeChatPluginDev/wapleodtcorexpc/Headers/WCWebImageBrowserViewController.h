//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ImageBrowseButton, WCImageSearchEntity, WCWebImageBrowserConfig, WCWebImageButtonsContainerView, WCWebImageSourceInfoButton;

@interface WCWebImageBrowserViewController
{
    WCImageSearchEntity *_searchEntity;
    WCWebImageButtonsContainerView *_bottomBarContainerView;
    ImageBrowseButton *_moreBtn;
    ImageBrowseButton *_downloadImageBtn;
    ImageBrowseButton *_searchBtn;
    ImageBrowseButton *_circleToSearchBtn;
    WCWebImageSourceInfoButton *_imageSourceBtn;
    WCWebImageBrowserConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCWebImageBrowserConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) WCWebImageSourceInfoButton *imageSourceBtn; // @synthesize imageSourceBtn=_imageSourceBtn;
@property(retain, nonatomic) ImageBrowseButton *circleToSearchBtn; // @synthesize circleToSearchBtn=_circleToSearchBtn;
@property(retain, nonatomic) ImageBrowseButton *searchBtn; // @synthesize searchBtn=_searchBtn;
@property(retain, nonatomic) ImageBrowseButton *downloadImageBtn; // @synthesize downloadImageBtn=_downloadImageBtn;
@property(retain, nonatomic) ImageBrowseButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) WCWebImageButtonsContainerView *bottomBarContainerView; // @synthesize bottomBarContainerView=_bottomBarContainerView;
@property(retain, nonatomic) WCImageSearchEntity *searchEntity; // @synthesize searchEntity=_searchEntity;
- (void)onFullScreenItemDragCancel;
- (void)multiImageScrollViewDidEndDecelerating;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateCurrentImageSourceButton;
- (void)onClickCircleToSearchBtn;
- (void)onClickImageSourceBtn;
- (void)onClickSavedPhotosAlbumButton;
- (void)onClickMoreBtn;
- (void)tryReportSimilarImgOperation:(unsigned long long)arg1;
- (void)reportCircleToSearchBtnExposed;
- (void)reportSearchBtnExposed;
- (void)hideBottomBarContainerInAnimation;
- (void)showBottomBarContainerInAnimation;
- (void)relayoutBottomBar;
- (void)initBottomBarForCircleToSearch;
- (void)initBottomBar;
- (void)initImageViewerWithUrls:(id)arg1 current:(id)arg2 appID:(id)arg3 appScene:(unsigned long long)arg4 referer:(id)arg5;
- (id)initWithConfig:(id)arg1;

@end

