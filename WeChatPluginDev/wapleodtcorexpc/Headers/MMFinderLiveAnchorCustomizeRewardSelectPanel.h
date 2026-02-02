//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveAnchorCustomizeRewardModifyPanel, MMFinderLiveAnchorCustomizeRewardViewModel, MMFinderLiveTaskId, NSString, UITableView;

@interface MMFinderLiveAnchorCustomizeRewardSelectPanel
{
    CDUnknownBlockType _didDismissCallback;
    MMFinderLiveTaskId *_taskId;
    UITableView *_rewardListTableView;
    MMFinderLiveAnchorCustomizeRewardViewModel *_viewModel;
    MMFinderLiveAnchorCustomizeRewardModifyPanel *_anchorCustomizeRewardModifyPanel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardModifyPanel *anchorCustomizeRewardModifyPanel; // @synthesize anchorCustomizeRewardModifyPanel=_anchorCustomizeRewardModifyPanel;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITableView *rewardListTableView; // @synthesize rewardListTableView=_rewardListTableView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType didDismissCallback; // @synthesize didDismissCallback=_didDismissCallback;
- (void)pageSheetDidDismiss;
- (void)navigateToAnchorCustomizeRewardModifyPanelForItem:(id)arg1;
- (void)navigateToFansGroupCustomizeRewardPanelForItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configurationAnchorCustomizeRewardCell:(id)arg1 atIndex:(long long)arg2;
- (id)createAnchorCustomizeRewardCellWithTableView:(id)arg1 index:(long long)arg2;
- (void)configurationFansGroupCustomizeRewardCell:(id)arg1 atIndex:(long long)arg2;
- (id)createFansGroupCustomizeRewardCellWithTableView:(id)arg1 index:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onAnchorCustomizeRewardModifyPanelDismiss;
- (void)giftItemUpdated:(id)arg1 byCustomizationPanel:(id)arg2;
- (void)onCustomizeRewardDataFetchingEndWithErrorMsg:(id)arg1;
- (void)onCustomizeRewardDataFetchingBegin;
- (id)getAnchorCustomizeRewardItemAtIndex:(long long)arg1;
- (id)getFansGroupCustomizeRewardItemAtIndex:(long long)arg1;
- (unsigned long long)getCustomizeRewardItemTypeAtIndex:(long long)arg1;
- (long long)customizeRewardItemsCount;
- (void)showWithAnimated:(_Bool)arg1;
- (double)giftItemRowHeight;
- (double)contentHeight;
- (double)contentWidth;
- (void)initViewModel;
- (void)initReusableComponentsForTableView;
- (void)initDetailView;
- (void)initPageSheetConfig;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

