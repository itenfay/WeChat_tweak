//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavTagSearchFilter, NSMutableSet, NSString, UIView, WCFinderFeedFlowView, WCFinderFeedSearchViewModel;

@interface WCFinderFeedSearchViewController
{
    int _commentScene;
    int _interactionScene;
    unsigned long long _searchScene;
    WCFinderFeedSearchViewModel *_viewModel;
    NSString *_latestTagText;
    NSString *_latestQueryText;
    NSString *_searchSessionID;
    NSMutableSet *_exposedTags;
    UIView *_guideContentView;
    FavTagSearchFilter *_tagFilterView;
    WCFinderFeedFlowView *_resultFeedFlowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedFlowView *resultFeedFlowView; // @synthesize resultFeedFlowView=_resultFeedFlowView;
@property(retain, nonatomic) FavTagSearchFilter *tagFilterView; // @synthesize tagFilterView=_tagFilterView;
@property(retain, nonatomic) UIView *guideContentView; // @synthesize guideContentView=_guideContentView;
@property(retain, nonatomic) NSMutableSet *exposedTags; // @synthesize exposedTags=_exposedTags;
@property(retain, nonatomic) NSString *searchSessionID; // @synthesize searchSessionID=_searchSessionID;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(retain, nonatomic) NSString *latestTagText; // @synthesize latestTagText=_latestTagText;
@property(retain, nonatomic) WCFinderFeedSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) int interactionScene; // @synthesize interactionScene=_interactionScene;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
- (void)resetTypingAttributes;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onClickCoverContact:(id)arg1 dataItem:(id)arg2;
- (void)updateSearchFieldText;
- (void)onUpdateTag:(id)arg1 to:(id)arg2 fromFilter:(id)arg3;
- (void)deselectTag:(id)arg1 fromFilter:(id)arg2;
- (void)selectTag:(id)arg1 fromFilter:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)tryDoSearch;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)onFeedSearchDataChanged;
- (void)exposeTagsReport;
- (void)onFavTopicDataChanged;
- (void)relayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)loadAndFetchFavTopicData;
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

