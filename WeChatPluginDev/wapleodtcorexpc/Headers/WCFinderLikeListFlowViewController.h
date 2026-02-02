//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UILabel, UIView, WCFinderExtStatsReporter, WCFinderFeedFlowView, WCFinderLikeListFlowViewModel, WCSearchBar;

@interface WCFinderLikeListFlowViewController
{
    _Bool _disableSearch;
    double _topPadding;
    WCFinderLikeListFlowViewModel *_viewModel;
    WCFinderFeedFlowView *_feedFlowView;
    RichTextView *_richTextView;
    WCSearchBar *_searchBar;
    CDUnknownBlockType _dismissBlock;
    double _kWCFinderSafeHeight;
    UIView *_customTitleView;
    UILabel *_subTitleView;
    unsigned long long _enterTime;
    WCFinderExtStatsReporter *_extStatReporter;
}

+ (_Bool)automaticallyNotifiesObserversOfTotalCount;
+ (id)keyPathsForValuesAffectingTotalCount;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderExtStatsReporter *extStatReporter; // @synthesize extStatReporter=_extStatReporter;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) UILabel *subTitleView; // @synthesize subTitleView=_subTitleView;
@property(retain, nonatomic) UIView *customTitleView; // @synthesize customTitleView=_customTitleView;
@property(nonatomic) double kWCFinderSafeHeight; // @synthesize kWCFinderSafeHeight=_kWCFinderSafeHeight;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) WCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) WCFinderLikeListFlowViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) _Bool disableSearch; // @synthesize disableSearch=_disableSearch;
- (void)registerYReportSdk;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onClickCoverContact:(id)arg1 dataItem:(id)arg2;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 reportExtStatsReportAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (void)finderLikeListFLowVMMegaVideoFavStatusChangedRet:(_Bool)arg1 videoId:(id)arg2 isLike:(_Bool)arg3;
- (void)finderLikeListFlowVMfetchDataFailed;
- (void)finderLikeListFLowVMfetchDataSucceesful;
- (void)reloadDataWrap;
- (void)fetchNextPage;
- (void)fetchData;
- (void)reload;
- (void)updateCustomTitleViewLayout;
- (void)updateTitle;
- (void)setupSubViews;
- (id)getTitleViewText;
- (void)setupNavigationBar;
- (_Bool)useBlackStatusbar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) long long totalCount;
- (id)initWithDismissBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

