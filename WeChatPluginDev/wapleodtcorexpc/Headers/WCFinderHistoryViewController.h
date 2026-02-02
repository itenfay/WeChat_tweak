//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedFlowView, WCFinderFeedFlowViewAdapter, WCFinderHistoryViewModel;

@interface WCFinderHistoryViewController
{
    WCFinderHistoryViewModel *_viewModel;
    WCFinderFeedFlowViewAdapter *_flowViewAdapter;
    WCFinderFeedFlowView *_feedFlowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) WCFinderFeedFlowViewAdapter *flowViewAdapter; // @synthesize flowViewAdapter=_flowViewAdapter;
@property(retain, nonatomic) WCFinderHistoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onHistoryShowSearchIconChanged;
- (void)onHistoryRecardDayChanges;
- (int)feedViewControllerScene;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)onClickMore;
- (void)onClickSearch;
- (id)makeMoreBtn;
- (id)makeSearchBtn;
- (void)setupMenuItems;
- (struct WCFinderFeedFlowViewCellMenuComponment)_createMenuComp;
- (void)setupFlowView;
- (_Bool)showNavigationBarSepLine;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

