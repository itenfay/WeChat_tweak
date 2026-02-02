//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString, UILabel, UIView, WCFinderCustomImageRichTextView, WCFinderExtStatsReporter, WCFinderFeedFlowView, WCFinderGlobalFavFlowPageViewModel, WCFinderGlobalFavFlowViewModel, WCSearchBar;

@interface WCFinderGlobalFavFlowViewController
{
    _Bool _disableSearch;
    double _topPadding;
    WCFinderGlobalFavFlowViewModel *_viewModel;
    WCFinderGlobalFavFlowPageViewModel *_pageViewModel;
    WCFinderFeedFlowView *_feedFlowView;
    WCSearchBar *_searchBar;
    CDUnknownBlockType _dismissBlock;
    NSMutableSet *_exposedTags;
    WCFinderCustomImageRichTextView *_richTextView;
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
@property(retain, nonatomic) WCFinderCustomImageRichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) NSMutableSet *exposedTags; // @synthesize exposedTags=_exposedTags;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) WCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) WCFinderGlobalFavFlowPageViewModel *pageViewModel; // @synthesize pageViewModel=_pageViewModel;
@property(retain, nonatomic) WCFinderGlobalFavFlowViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) _Bool disableSearch; // @synthesize disableSearch=_disableSearch;
- (void)registerYReportSdk;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onClickCoverContact:(id)arg1 dataItem:(id)arg2;
- (void)WCFinderFavFeedListVMfetchDataFailed;
- (void)WCFinderFavFeedListVMfetchDataSucceesful;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (void)reloadDataWrap;
- (void)finderFeedFlowView:(id)arg1 reportExtStatsReportAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (void)favListViewModelDeleteDataItemTid:(id)arg1;
- (void)removeContentVM:(id)arg1 indexPath:(id)arg2;
- (void)onFinderFeedFlowViewDelete:(id)arg1 indexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (void)reload;
- (void)updateCustomTitleViewLayout;
- (void)updateTitle;
- (void)setupSubViews;
- (id)getTitleViewText;
- (void)setupNavigationBar;
- (_Bool)useBlackStatusbar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
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

