//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString, WCFinderFeedFlowView, WCFinderWXInteractiveFlowViewModel, WCFinderWXInteractiveHeaderView;

@interface WCFinderWXInteractiveFlowViewController
{
    WCFinderFeedFlowView *_feedFlowView;
    NSMutableSet *_exposedTags;
    unsigned long long _enterTime;
    WCFinderWXInteractiveFlowViewModel *_flowViewModel;
    WCFinderWXInteractiveHeaderView *_headerView;
    long long _initSelectType;
}

- (void).cxx_destruct;
@property(nonatomic) long long initSelectType; // @synthesize initSelectType=_initSelectType;
@property(nonatomic) __weak WCFinderWXInteractiveHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCFinderWXInteractiveFlowViewModel *flowViewModel; // @synthesize flowViewModel=_flowViewModel;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) NSMutableSet *exposedTags; // @synthesize exposedTags=_exposedTags;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onLimitedClicked;
- (void)onSearchClicked;
- (void)onClickHeaderType:(long long)arg1;
- (void)onFlowViewModelTabLocalLoaded;
- (void)onFlowViewModelTabChanged;
- (void)onFlowViewModelFetchBegin;
- (void)onFlowViewModelFetchFail;
- (void)onFlowViewModelDeleteDataItemTid:(id)arg1;
- (void)onFlowViewModelLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onFlowViewModelFetchSuc;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 layout:(id)arg2 pinHeaderToVisibleBoundsAtSection:(unsigned long long)arg3;
- (void)registerYReportSdk;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onClickCoverContact:(id)arg1 dataItem:(id)arg2;
- (void)WCFinderFavFeedListVMfetchDataFailed;
- (void)WCFinderFavFeedListVMfetchDataSucceesful;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (void)reloadDataWrap;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (void)favListViewModelDeleteDataItemTid:(id)arg1;
- (void)removeContentVM:(id)arg1 indexPath:(id)arg2;
- (void)onFinderFeedFlowViewDelete:(id)arg1 indexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (void)reload;
- (void)setupSubViews;
- (_Bool)useBlackStatusbar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)setUpFeedFlowView;
- (void)updateRightBarButtonItems;
- (void)viewDidLoad;
- (id)init;
- (id)initWithSelectTabType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

