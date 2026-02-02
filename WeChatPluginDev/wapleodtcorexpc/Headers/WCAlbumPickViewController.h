//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIImageView, MMUILabel, MMUIView, NSMutableArray, NSString, UIButton, UICollectionView, UICollectionViewFlowLayout, UIImageView, UIView, WCAlbumPickViewModel, WCAlbumPickerFooterView, WCFinderSnsPostProcessMgr;
@protocol WCAlbumPickViewControllerDelegate;

@interface WCAlbumPickViewController
{
    _Bool _isOriginalImageForSend;
    _Bool _needThumbImage;
    _Bool _isNoMoreData;
    _Bool _m_hasClickSendButton;
    long long _homepageType;
    NSMutableArray *_imageDictionaries;
    UIImageView *_bottomBar;
    MMUIButton *_previewButton;
    double _realBottomBarHeight;
    double _assetWidth;
    NSString *_sendButtonWording;
    id <WCAlbumPickViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    WCAlbumPickerFooterView *_footerView;
    MMUILabel *_noDataLabel;
    NSString *_username;
    WCAlbumPickViewModel *_viewModel;
    UIButton *_sendButton;
    MMUIView *_bgView;
    MMUIView *_blurView;
    MMUIView *_dimmingView;
    UIImageView *_shadowImageView;
    UIView *_tableContainerView;
    MMUILabel *_tipsLabel;
    MMUIImageView *_originSelectIconView;
    UIView *_navBarBlurView;
    UIView *_accessLimitTipView;
    UIView *_bottomBarBlurView;
    WCFinderSnsPostProcessMgr *_finderPostMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSnsPostProcessMgr *finderPostMgr; // @synthesize finderPostMgr=_finderPostMgr;
@property(retain, nonatomic) UIView *bottomBarBlurView; // @synthesize bottomBarBlurView=_bottomBarBlurView;
@property(retain, nonatomic) UIView *accessLimitTipView; // @synthesize accessLimitTipView=_accessLimitTipView;
@property(retain, nonatomic) UIView *navBarBlurView; // @synthesize navBarBlurView=_navBarBlurView;
@property(retain, nonatomic) MMUIImageView *originSelectIconView; // @synthesize originSelectIconView=_originSelectIconView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) _Bool m_hasClickSendButton; // @synthesize m_hasClickSendButton=_m_hasClickSendButton;
@property(retain, nonatomic) UIView *tableContainerView; // @synthesize tableContainerView=_tableContainerView;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) MMUIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) MMUIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) MMUIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) WCAlbumPickViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) MMUILabel *noDataLabel; // @synthesize noDataLabel=_noDataLabel;
@property(nonatomic) _Bool isNoMoreData; // @synthesize isNoMoreData=_isNoMoreData;
@property(retain, nonatomic) WCAlbumPickerFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCAlbumPickViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *sendButtonWording; // @synthesize sendButtonWording=_sendButtonWording;
@property(nonatomic) double assetWidth; // @synthesize assetWidth=_assetWidth;
@property(nonatomic) _Bool needThumbImage; // @synthesize needThumbImage=_needThumbImage;
@property(nonatomic) _Bool isOriginalImageForSend; // @synthesize isOriginalImageForSend=_isOriginalImageForSend;
@property(nonatomic) double realBottomBarHeight; // @synthesize realBottomBarHeight=_realBottomBarHeight;
@property(retain, nonatomic) MMUIButton *previewButton; // @synthesize previewButton=_previewButton;
@property(retain, nonatomic) UIImageView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) NSMutableArray *imageDictionaries; // @synthesize imageDictionaries=_imageDictionaries;
@property(nonatomic) long long homepageType; // @synthesize homepageType=_homepageType;
- (void)finderPostMgrCancelPostProcess;
- (id)finderPostMgrGetSelectedMediaContent;
- (void)finderPostMgrOnSendMediaWith:(id)arg1;
- (long long)getSelectedMediaType;
- (void)onPreviewPickFinish;
- (void)pickMedia:(id)arg1;
- (_Bool)canSelectMediaInPreview:(id)arg1;
- (long long)indexInSelectedMedia:(id)arg1;
- (unsigned int)selectedMediaInfosCount;
- (void)removeAllSeletedMedia;
- (void)sendSelectedMedia;
- (void)pushToEditViewController;
- (void)onSendMediaList:(id)arg1;
- (void)onQuit;
- (void)onClickCloseAction;
- (void)editPhoto:(id)arg1;
- (void)saveAsset:(_Bool)arg1;
- (void)saveEditedVideo;
- (void)saveEditedImage:(_Bool)arg1;
- (void)previewImageOfSelectedWithIndex:(unsigned int)arg1;
- (void)previewImageWithMedia:(id)arg1;
- (int)pickerScene;
- (void)reloadBottomBar;
- (void)adjustSubviewRects;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)adjustTitleView;
- (void)viewDidLayoutSubviews;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)initTitleView;
- (void)initBottomBar;
- (_Bool)isForbidPageSheet;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (void)onClickAction;
- (void)updateFooterViewState;
- (void)updateTipLabelState;
- (double)getCellWidth;
- (void)setMaxSelectedImagesCount:(unsigned long long)arg1;
- (void)setupData;
- (void)setupUI;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

