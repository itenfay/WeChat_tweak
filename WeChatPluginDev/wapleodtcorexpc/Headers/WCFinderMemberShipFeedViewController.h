//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderMemberShipFeedTabViewModel, WCFinderProfileCollectionListLayout;

@interface WCFinderMemberShipFeedViewController
{
    WCFinderMemberShipFeedTabViewModel *_viewModel;
    WCFinderProfileCollectionListLayout *_collectionListLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProfileCollectionListLayout *collectionListLayout; // @synthesize collectionListLayout=_collectionListLayout;
@property(retain, nonatomic) WCFinderMemberShipFeedTabViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)headerContainerClickedCollectionMoreButton:(id)arg1;
- (void)headerContainer:(id)arg1 clickedCollectionItemWithInfo:(id)arg2;
- (void)finderMemberShipZoneFeedTabViewChangeStickyTopTo:(_Bool)arg1 contentVM:(id)arg2 success:(_Bool)arg3 errorInfo:(id)arg4;
- (void)finderMemberShipZoneFeedTabViewDeleteDataItemVM;
- (void)finderMemberShipZoneFeedTabViewFetchListFail;
- (void)finderMemberShipZoneFeedTabViewFetchListSuc;
- (void)finderMemberShipZoneFeedTabViewNoMoreData;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (void)updateCollectionListLayout;
- (void)loadView;
- (id)feedFlowView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

