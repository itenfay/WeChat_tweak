//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupAnchorEditFansNoticeInfo, MMFinderLiveFansGroupAnchorEditViewModel, MMFinderLiveTaskId, NSArray, NSString, UITableView;
@protocol MMFinderLiveFansGroupAnchorEditPanelDelegate, MMFinderLiveFansGroupOperationReportDelegate;

@interface MMFinderLiveFansGroupAnchorEditPanel
{
    _Bool _cardDebugSwitch;
    id <MMFinderLiveFansGroupAnchorEditPanelDelegate> _delegate;
    id <MMFinderLiveFansGroupOperationReportDelegate> _reportDelegate;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveFansGroupAnchorEditViewModel *_viewModel;
    UITableView *_tableView;
    MMFinderLiveFansGroupAnchorEditFansNoticeInfo *_noticeInfo;
    NSArray *_sectionTypes;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cardDebugSwitch; // @synthesize cardDebugSwitch=_cardDebugSwitch;
@property(retain, nonatomic) NSArray *sectionTypes; // @synthesize sectionTypes=_sectionTypes;
@property(retain, nonatomic) MMFinderLiveFansGroupAnchorEditFansNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMFinderLiveFansGroupAnchorEditViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveFansGroupOperationReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(nonatomic) __weak id <MMFinderLiveFansGroupAnchorEditPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fansGroupAnchorEditSwitchCell:(id)arg1 switchValueDidChange:(_Bool)arg2;
- (void)handleCardSwitchChange:(_Bool)arg1 cell:(id)arg2;
- (void)handleNoticeSwitchChange:(_Bool)arg1 cell:(id)arg2;
- (_Bool)isCurrentCardShow;
- (_Bool)isCurrentNoticeOn;
- (void)_doOpenFansNoticeModifyPanel;
- (void)handleSelectAnchorCardEdit;
- (void)handleSelectFansNoticeEdit;
- (void)navigateToGiftCustomizationPanelForGift:(id)arg1;
- (void)navigateToNameModifyPanel;
- (void)configCellCornersAndSepLine:(id)arg1 withIndexPath:(id)arg2 maxRowCount:(unsigned long long)arg3;
- (id)anchorCardCellWithContact:(id)arg1 forTableView:(id)arg2 withIndexPath:(id)arg3;
- (id)fansNoticeCellWithInfo:(id)arg1 forTableView:(id)arg2 withIndexPath:(id)arg3;
- (id)giftItemCellWithGiftItem:(id)arg1 forTableView:(id)arg2 withIndexPath:(id)arg3;
- (id)groupNameCellWithName:(id)arg1 forTableView:(id)arg2;
- (void)preloadCustomGiftAnimations;
- (void)registerReusableComponentsForTableView:(id)arg1;
- (void)setupPageSheetConfig;
- (id)sectionIndexFromType:(unsigned long long)arg1;
- (unsigned long long)sectionTypeWithIndex:(long long)arg1;
- (unsigned long long)getCurrentAnchorCardVisibility;
- (_Bool)hasAnchorCardSection;
- (_Bool)hasEditFansNoticeSection;
- (_Bool)hasCustomGiftSection;
- (id)currentLiveTask;
- (void)toggleAnchorCardEnabled:(_Bool)arg1 visiblity:(unsigned long long)arg2;
- (void)anchorCardEditPanelDidFinishWithVisiblity:(unsigned long long)arg1;
- (void)fansNoticeModifyPanel:(id)arg1 didFinishEditingWithInfo:(id)arg2;
- (void)giftItemUpdated:(id)arg1 byCustomizationPanel:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetSections;
- (void)updateContentHeightIfNeeded;
- (double)calcDetailViewHeight;
- (void)pageSheetWillAppear;
- (void)layoutSubviews;
- (id)initWithTaskId:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

