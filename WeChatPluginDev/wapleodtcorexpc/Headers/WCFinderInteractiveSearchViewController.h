//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedFlowView, WCFinderInteractiveSearchViewModel;

@interface WCFinderInteractiveSearchViewController
{
    CDUnknownBlockType _closeCallback;
    WCFinderInteractiveSearchViewModel *_viewModel;
    WCFinderFeedFlowView *_feedFlowView;
    unsigned long long _searchKey;
    long long _tabType;
}

+ (void)displayOnViewController:(id)arg1 tabType:(long long)arg2 closeCallback:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) unsigned long long searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) WCFinderInteractiveSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
- (void)finderFeedFlowViewWillBeginDragging:(id)arg1 atIndexPath:(id)arg2;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (void)onSearchVMDeleteDataItemTid:(id)arg1;
- (void)onSearchVMSectionLoadingStateChanged:(id)arg1;
- (void)onSearchVMSecitonChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_doSerach:(long long)arg1;
- (void)_delaySearch;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)customSearchBar;
- (double)searchBarHeight;
- (void)onNavigationCancelItemClick;
- (void)_dismiss;
- (id)createFeedFlowView;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

