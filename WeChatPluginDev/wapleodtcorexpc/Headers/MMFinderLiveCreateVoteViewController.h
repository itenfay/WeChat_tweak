//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FixTitleColorButton, MMFinderLiveCreateVoteHeaderTableViewCell, MMFinderLiveLiveVoteChoice, MMFinderLiveLiveVoteItem, MMFinderLiveTaskId, MMFinderLiveVoteDurationPickerView, MMTableView, NSIndexPath, NSString, UIView;

@interface MMFinderLiveCreateVoteViewController
{
    MMTableView *_tableView;
    UIView *_tableViewHeaderBackgroundView;
    MMFinderLiveLiveVoteItem *_voteItem;
    MMFinderLiveLiveVoteChoice *_editingChoice;
    MMFinderLiveLiveVoteChoice *_deletingChoice;
    NSIndexPath *_indexPathToActivate;
    MMFinderLiveCreateVoteHeaderTableViewCell *_headerCell;
    FixTitleColorButton *_confirmButton;
    double _keyboardHeight;
    MMFinderLiveTaskId *_taskId;
    UIView *_sectionRoundView;
    CDUnknownBlockType _successBlock;
    MMFinderLiveVoteDurationPickerView *_durationPickerView;
}

+ (id)createVoteViewControllerWithTaskId:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
+ (void)presentCreateVoteInViewController:(id)arg1 taskId:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLiveVoteDurationPickerView *durationPickerView; // @synthesize durationPickerView=_durationPickerView;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) UIView *sectionRoundView; // @synthesize sectionRoundView=_sectionRoundView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) FixTitleColorButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak MMFinderLiveCreateVoteHeaderTableViewCell *headerCell; // @synthesize headerCell=_headerCell;
@property(retain, nonatomic) NSIndexPath *indexPathToActivate; // @synthesize indexPathToActivate=_indexPathToActivate;
@property(retain, nonatomic) MMFinderLiveLiveVoteChoice *deletingChoice; // @synthesize deletingChoice=_deletingChoice;
@property(retain, nonatomic) MMFinderLiveLiveVoteChoice *editingChoice; // @synthesize editingChoice=_editingChoice;
@property(retain, nonatomic) MMFinderLiveLiveVoteItem *voteItem; // @synthesize voteItem=_voteItem;
@property(retain, nonatomic) UIView *tableViewHeaderBackgroundView; // @synthesize tableViewHeaderBackgroundView=_tableViewHeaderBackgroundView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)liveVoteDurationPickerView:(id)arg1 didSelectDuration:(unsigned long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onConfirmButtonClicked;
- (void)onBackButtonClicked:(id)arg1;
- (void)onHistoryButtonClick;
- (void)resignAllActiveCells;
- (id)indexPathForChoice:(id)arg1;
- (id)editingChoiceIndexPath;
- (void)updateConfirmButtonEnableState:(id)arg1;
- (id)createRoundedSectionHeaderView;
- (void)createVoteHeaderCellDidClickDurationLimitButton:(id)arg1;
- (void)createVoteHeaderCellDidClickSelectionTypeButton:(id)arg1;
- (void)createVoteHeaderCellWillBeginEditing:(id)arg1;
- (void)createVoteHeaderCell:(id)arg1 didUpdateQuestion:(id)arg2;
- (void)addNewChoice:(_Bool)arg1;
- (void)deleteItem:(id)arg1 correspondingIndexPath:(id)arg2;
- (void)handleItemEndEditing:(id)arg1;
- (void)handleItemDeletingChanged:(id)arg1 deleting:(_Bool)arg2;
- (_Bool)handleItemShouldBeginEditing:(id)arg1;
- (void)handleTableViewPan:(id)arg1;
- (_Bool)mmTableView:(id)arg1 shouldPassHitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)initConfirmButton;
- (void)initTableView;
- (id)navigationBarBackgroundColor;
- (void)initNavBar;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)layoutYAxisForConfirmButtonAndTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

