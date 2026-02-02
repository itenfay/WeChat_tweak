//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveBattleDurationItem, MMFinderLiveConnectMicPkSelectionModel, MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, MMUIButton, NSMutableArray, NSString, UITableView;

@interface MMFinderLiveConnectMicExtendedPkSelectPageSheet
{
    _Bool _anchorParticipating;
    _Bool _audienceParticipating;
    _Bool _designatedGiftEnabled;
    CDUnknownBlockType _selectAction;
    MMFinderLiveTaskId *_taskId;
    NSString *_micVirtualRoomId;
    UITableView *_tableView;
    MMUIButton *_confirmButton;
    MMFinderLiveConnectMicPkSelectionModel *_model;
    unsigned long long _selectedBattleMode;
    MMFinderLiveRewardGiftItem *_designatedGiftItem;
    unsigned long long _originalLayoutMode;
    unsigned long long _selectedLayoutMode;
    MMFinderLiveBattleDurationItem *_selectedDuration;
    NSMutableArray *_playModeSectionItems;
    NSMutableArray *_pkSettingSectionItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pkSettingSectionItems; // @synthesize pkSettingSectionItems=_pkSettingSectionItems;
@property(retain, nonatomic) NSMutableArray *playModeSectionItems; // @synthesize playModeSectionItems=_playModeSectionItems;
@property(retain, nonatomic) MMFinderLiveBattleDurationItem *selectedDuration; // @synthesize selectedDuration=_selectedDuration;
@property(nonatomic) unsigned long long selectedLayoutMode; // @synthesize selectedLayoutMode=_selectedLayoutMode;
@property(nonatomic) unsigned long long originalLayoutMode; // @synthesize originalLayoutMode=_originalLayoutMode;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *designatedGiftItem; // @synthesize designatedGiftItem=_designatedGiftItem;
@property(nonatomic) _Bool designatedGiftEnabled; // @synthesize designatedGiftEnabled=_designatedGiftEnabled;
@property(nonatomic) _Bool audienceParticipating; // @synthesize audienceParticipating=_audienceParticipating;
@property(nonatomic) _Bool anchorParticipating; // @synthesize anchorParticipating=_anchorParticipating;
@property(nonatomic) unsigned long long selectedBattleMode; // @synthesize selectedBattleMode=_selectedBattleMode;
@property(retain, nonatomic) MMFinderLiveConnectMicPkSelectionModel *model; // @synthesize model=_model;
@property(retain, nonatomic) MMUIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *micVirtualRoomId; // @synthesize micVirtualRoomId=_micVirtualRoomId;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
- (void)updateConfirmButtonEnabled;
- (id)createSelectionResultApplyingFinalDiagnostics:(_Bool)arg1;
- (_Bool)anchorParticipatingOptionApplicable;
- (void)updateSelection;
- (void)navigateToLayoutModeSelectionPanel;
- (void)navigateToDurationSelectionPanel;
- (void)navigateToDesignatedGiftSelectionPanel;
- (id)dequeueLayoutModeCellForIndexPath:(id)arg1;
- (id)dequeueDurationCellForIndexPath:(id)arg1;
- (id)dequeueDesignatedGiftItemCellForIndexPath:(id)arg1;
- (id)dequeueAnchorParticipatingCellForIndexPath:(id)arg1;
- (id)dequeueGenericItemCellForIndexPath:(id)arg1;
- (void)initializeComponents;
- (void)onConfirmed;
- (void)onCanceled;
- (void)onConnectMicAnchorPkLayoutModeChangeConfirmed:(unsigned long long)arg1;
- (void)onSwitchStateChangedTo:(_Bool)arg1 forAnchorParticipatingCell:(id)arg2;
- (void)onPkDurationSelected:(id)arg1 fromPageSheet:(id)arg2;
- (void)onPkDesignatedGiftSelected:(id)arg1 fromPageSheet:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (id)liveTask;
- (_Bool)isCrossRoomPkEnabled;
- (void)initiateSelection;
- (void)fixSelectionOptionsConflict;
- (unsigned long long)lastSelectPlayModeItem;
@property(readonly, nonatomic) _Bool isAnchorPkChangeLayoutEnabled;
- (void)updatePkSettingSectionData;
- (void)updatePlayModeSectionData;
- (void)reloadData;
- (void)updateInitialSelectData;
- (void)updateWithModel:(id)arg1;
- (id)initWithTaskId:(id)arg1 micVirtualRoomId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

