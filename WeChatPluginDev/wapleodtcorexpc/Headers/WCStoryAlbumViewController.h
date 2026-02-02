//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UICollectionView, UICollectionViewFlowLayout, UIView, WCMomentsPageContext, WCStoryAlbumViewModel, WCStoryCollectionFooterView, WCStoryFloatTopBar;

@interface WCStoryAlbumViewController
{
    _Bool _isNoMoreData;
    WCMomentsPageContext *_pageContext;
    NSString *_username;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    WCStoryFloatTopBar *_floatTopBar;
    WCStoryCollectionFooterView *_footerView;
    UIView *_blankView;
    MMUIButton *_fullTimelineButton;
    MMUILabel *_noDataLabel;
    WCStoryAlbumViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCStoryAlbumViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMUILabel *noDataLabel; // @synthesize noDataLabel=_noDataLabel;
@property(nonatomic) _Bool isNoMoreData; // @synthesize isNoMoreData=_isNoMoreData;
@property(retain, nonatomic) MMUIButton *fullTimelineButton; // @synthesize fullTimelineButton=_fullTimelineButton;
@property(retain, nonatomic) UIView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) WCStoryCollectionFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCStoryFloatTopBar *floatTopBar; // @synthesize floatTopBar=_floatTopBar;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (void)onClickAction;
- (void)updateFooterViewState;
- (void)updateAlbumViewState;
- (void)updateTipLabelState;
- (double)getCellWidth;
- (void)setupData;
- (void)layoutUI;
- (void)setupUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

