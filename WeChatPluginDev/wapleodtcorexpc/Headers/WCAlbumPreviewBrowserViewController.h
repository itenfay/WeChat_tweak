//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMAssetSelectCheckButton, MMScrollView, NSMutableArray, NSMutableSet, NSString, UIButton, UIView;
@protocol WCAlbumPreviewBrowserViewControllerDelegate;

@interface WCAlbumPreviewBrowserViewController
{
    int firstVisiblePageIndexBeforeRotation;
    double percentScrolledIntoFirstVisiblePage;
    int m_iNumberOfPages;
    int m_iCurrentPage;
    _Bool m_hideWhenDisappear;
    _Bool m_isTileing;
    _Bool m_scrollViewLayouting;
    _Bool m_orientationRotating;
    _Bool m_isBidirectionalFan;
    _Bool m_backing;
    _Bool m_backEnabled;
    _Bool m_forbidSingleTap;
    _Bool _bIsMoreData;
    _Bool _bIsNoMediaDataOverLimitReq;
    _Bool _bIsLoadingMoreData;
    _Bool _bIsLastDataEmpty;
    _Bool _bIsDirectFreshScrollSize;
    _Bool _bIsShow;
    double _startContentOffsetX;
    double _willEndContentOffsetX;
    double _endContentOffsetX;
    unsigned int _uiMaxContiunePreLoadCount;
    _Bool _isShowingDataItemList;
    _Bool _isNoPrePageLoad;
    CContact *_contact;
    id <WCAlbumPreviewBrowserViewControllerDelegate> _delegate;
    MMScrollView *_pagingScrollView;
    MMAssetSelectCheckButton *_selectCheckButton;
    UIView *_titleBackGroundView;
    UIView *_bottomBar;
    UIView *_blurView;
    UIButton *_sendButton;
    UIButton *_backButton;
    UIButton *_errorInfoBar;
    NSMutableArray *_arrDatas;
    NSMutableSet *_recycledImagePage;
    NSMutableSet *_recycledSightPage;
    NSMutableSet *_visiblePages;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNoPrePageLoad; // @synthesize isNoPrePageLoad=_isNoPrePageLoad;
@property(nonatomic) _Bool isShowingDataItemList; // @synthesize isShowingDataItemList=_isShowingDataItemList;
@property(retain, nonatomic) NSMutableSet *visiblePages; // @synthesize visiblePages=_visiblePages;
@property(retain, nonatomic) NSMutableSet *recycledSightPage; // @synthesize recycledSightPage=_recycledSightPage;
@property(retain, nonatomic) NSMutableSet *recycledImagePage; // @synthesize recycledImagePage=_recycledImagePage;
@property(retain, nonatomic) NSMutableArray *arrDatas; // @synthesize arrDatas=_arrDatas;
@property(retain, nonatomic) UIButton *errorInfoBar; // @synthesize errorInfoBar=_errorInfoBar;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UIView *titleBackGroundView; // @synthesize titleBackGroundView=_titleBackGroundView;
@property(retain, nonatomic) MMAssetSelectCheckButton *selectCheckButton; // @synthesize selectCheckButton=_selectCheckButton;
@property(retain, nonatomic) MMScrollView *pagingScrollView; // @synthesize pagingScrollView=_pagingScrollView;
@property(nonatomic) __weak id <WCAlbumPreviewBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)showErrorInfoBarWithInfo:(id)arg1;
- (_Bool)isMediaSelectable:(id)arg1;
- (void)OnEdit:(id)arg1;
- (void)OnSelectedButtonDone;
- (void)updateBottomBarWithMedia:(id)arg1;
- (void)updateSelectedButtonWithAssetInfo:(id)arg1;
- (void)updateSelectCheckButtonWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadActionButtons;
- (void)initBackBarButton;
- (void)initBottomBar;
- (void)initBackgroundView;
- (void)initSelectCheckButton;
- (void)onLongPressedFullSightView:(id)arg1;
- (void)onClickFullSightView:(id)arg1;
- (void)adjustViewAndNavBarRect;
- (void)goBackAfterSetBackground;
- (void)onTouchEndOnFullScreenView:(id)arg1;
- (_Bool)shouldAnimateFullScreenViewOnShow:(id)arg1;
- (void)updatePhotoatIndex:(unsigned long long)arg1;
- (struct CGPoint)contentOffsetForPagingScrollView;
- (struct CGSize)contentSizeForPagingScrollView;
- (struct CGRect)frameForPageAtIndexForSightView:(unsigned long long)arg1;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForPagingScrollView:(_Bool)arg1;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onSetDataItemPublicFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onSetDataItemPrivateFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadImage:(id)arg1;
- (void)configureSightPage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)configureImagePage:(id)arg1 forIndex:(unsigned long long)arg2;
- (_Bool)isDisplayingPageForIndex:(unsigned long long)arg1;
- (id)dequeueRecycledSightPage;
- (id)dequeueRecycledImagePage;
- (void)tilePages;
- (void)preLoadProcess;
- (void)checkNoMoreData;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (double)buttonWidth:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)onPageChangedWithIndex:(long long)arg1;
- (id)tryUpdateMedia:(long long)arg1;
- (id)getCurrentViewController;
- (void)contactsReturn:(_Bool)arg1 contact:(id)arg2;
- (void)onBackButtonClicked;
- (void)onRightButtonTouchDown:(id)arg1;
- (void)onPresentBackFromViewController;
- (void)onBackFromDetailView;
- (void)onDeleteData;
- (void)onBeforeDeleteData;
- (void)onRestartUpload;
- (void)deleteVisibleCache;
- (void)showLastPictureTips;
- (void)noMoreData;
- (void)clearFakeLoaddingPrePageView;
- (id)getWCMediaItemWraps:(id)arg1;
- (void)initArrData:(id)arg1;
- (unsigned long long)getMediaCount;
- (void)preLoadPrePageFinishiedAndReloadData:(id)arg1;
- (void)preLoadFinishiedAndReloadData:(id)arg1;
- (void)initScrollView;
- (void)layoutScrollView:(_Bool)arg1;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)hideVCAnimation;
- (void)onSingleTapWCImageScrollView;
- (void)handleSingleTap;
- (void)UISplitViewWillChangeSplitMode;
- (void)hideFullScreen:(_Bool)arg1;
- (void)hideFullScreen;
- (void)showFullScreen:(_Bool)arg1;
- (void)showFullScreen;
- (void)willDisappear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillBeInteractivePoped;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)willAppear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)getMediaItemWrapAnywayAt:(unsigned int)arg1;
- (id)getMediaItemWrapAt:(long long)arg1;
- (_Bool)realCanLoadPrePage;
- (_Bool)isMyOwnWC;
- (void)dealloc;
- (id)initWithWCMediaItemWraps:(id)arg1 currentIndex:(unsigned int)arg2;
- (id)initWithDataItems:(id)arg1 currentIndex:(unsigned int)arg2 canAutoLoadNextPage:(_Bool)arg3 canLoadPrePage:(_Bool)arg4;
- (id)initWithDataItems:(id)arg1 currentIndex:(unsigned int)arg2 canAutoLoadNextPage:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

