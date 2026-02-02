//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveBattleDurationItem, MMFinderLiveConnectMicPkSelectionModel, MMUIButton, NSString, UITableView;

@interface MMFinderLiveConnectMicAudioRoomPkSelectPageSheet
{
    CDUnknownBlockType _selectAction;
    UITableView *_tableView;
    MMUIButton *_confirmButton;
    MMFinderLiveConnectMicPkSelectionModel *_model;
    unsigned long long _selectedBattleMode;
    MMFinderLiveBattleDurationItem *_selectedDuration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveBattleDurationItem *selectedDuration; // @synthesize selectedDuration=_selectedDuration;
@property(nonatomic) unsigned long long selectedBattleMode; // @synthesize selectedBattleMode=_selectedBattleMode;
@property(retain, nonatomic) MMFinderLiveConnectMicPkSelectionModel *model; // @synthesize model=_model;
@property(retain, nonatomic) MMUIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
- (void)updateConfirmButtonEnabled;
- (id)createSelectionResult;
- (void)updateSelection;
- (void)navigateToDurationSelectionPanel;
- (id)dequeueDurationCellForIndexPath:(id)arg1;
- (id)dequeueGenericItemCellForIndexPath:(id)arg1;
- (void)initializeComponents;
- (void)onConfirmed;
- (void)onCanceled;
- (void)onPkDurationSelected:(id)arg1 fromPageSheet:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)initiateSelection;
- (void)updateWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

