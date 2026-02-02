//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSArray, NSString, UILabel, UITableView, UIView, WCFinderCollectionDetailListViewModel, WCFinderMaskButton, WCFinderRefreshTableFooterView, WCFinderStreamProfileDragBarView;
@protocol WCFinderMemberShipIntroduceCollectionListViewControllerDelegate;

@interface WCFinderMemberShipIntroduceCollectionListViewController
{
    int _commentScene;
    id <WCFinderMemberShipIntroduceCollectionListViewControllerDelegate> _previewDelegate;
    UITableView *_tableView;
    NSArray *_collectionList;
    WCFinderCollectionDetailListViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    MMUIButton *_emptyTipsRetryButton;
    UILabel *_titleLabel;
    WCFinderMaskButton *_confirmButton;
    unsigned long long _entranceSource;
    WCFinderStreamProfileDragBarView *_dragBarView;
    UIView *_topViewContainer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topViewContainer; // @synthesize topViewContainer=_topViewContainer;
@property(retain, nonatomic) WCFinderStreamProfileDragBarView *dragBarView; // @synthesize dragBarView=_dragBarView;
@property(nonatomic) unsigned long long entranceSource; // @synthesize entranceSource=_entranceSource;
@property(retain, nonatomic) WCFinderMaskButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *emptyTipsRetryButton; // @synthesize emptyTipsRetryButton=_emptyTipsRetryButton;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderCollectionDetailListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSArray *collectionList; // @synthesize collectionList=_collectionList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) __weak id <WCFinderMemberShipIntroduceCollectionListViewControllerDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(_Bool)arg2;
- (void)dragBarViewWillBegin:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderCollectionDetailListEndLoading;
- (void)finderCollectionDetailListStartLoading;
- (void)finderCollectionDetailListRequestFailed;
- (void)finderCollectionDetailListDataChangedWithContinueFlag:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)_setupReportWithCell:(id)arg1 collection:(id)arg2 indexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onClickConfirm;
- (double)getMaxHalfScreenHeight;
- (void)retryButtonClicked:(id)arg1;
- (void)hideEmptyTips;
- (void)showEmptyTips:(id)arg1 canRetry:(_Bool)arg2;
- (void)bindPageReport;
- (void)configureTableView;
- (void)setupSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 entranceSource:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

