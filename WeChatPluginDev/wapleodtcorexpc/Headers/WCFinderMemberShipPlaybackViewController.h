//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderMemberShipPlaybackTabViewModel;

@interface WCFinderMemberShipPlaybackViewController
{
    WCFinderMemberShipPlaybackTabViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMemberShipPlaybackTabViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)finderMemberShipZonePlaybackTabViewDeleteDataItemVM;
- (void)finderMemberShipZonePlaybackTabViewFetchListFail;
- (void)finderMemberShipZonePlaybackTabViewFetchListSuc;
- (void)finderMemberShipZonePlaybackTabViewNoMoreData;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
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

