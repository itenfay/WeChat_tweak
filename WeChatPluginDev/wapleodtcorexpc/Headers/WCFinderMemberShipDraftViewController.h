//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderMemberShipDraftViewModel;

@interface WCFinderMemberShipDraftViewController
{
    WCFinderMemberShipDraftViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMemberShipDraftViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)postViewControllerStartUpload;
- (void)onMusicView:(id)arg1 exposeMenuAction:(id)arg2 feedVM:(id)arg3;
- (void)onMusicViewDidClickDelete:(id)arg1 feedVM:(id)arg2;
- (void)onMusicViewDidClickRetry:(id)arg1 feedVM:(id)arg2;
- (void)onMusicViewDidSlideDelete:(id)arg1 feedVM:(id)arg2;
- (_Bool)reloadDataWithBatchModify;
- (void)finderMemberShipZoneDraftTabInsertItemAtIdx:(long long)arg1;
- (void)finderMemberShipZoneDraftTabDeleteItemAtIdx:(long long)arg1;
- (void)finderMemberShipZoneDraftTabViewFetchListFail;
- (void)finderMemberShipZoneDraftTabViewFetchListSuc;
- (void)finderMemberShipZoneDraftTabViewNoMoreData;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (id)zoneViewController;
- (_Bool)checkLongVideoFileValid:(id)arg1;
- (void)openFinderEditor:(id)arg1;
- (void)pushVCAnimated:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
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

