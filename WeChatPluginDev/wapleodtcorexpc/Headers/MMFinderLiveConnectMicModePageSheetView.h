//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicLayoutModeSubtitleWrap, MMFinderLiveConnectMicModePreviewView, MMFinderLiveTaskId, NSArray, NSString, UITableView;
@protocol MMFinderLiveConnectMicModePageSheetViewDelegate;

@interface MMFinderLiveConnectMicModePageSheetView
{
    _Bool _modeSelectionEnabled;
    _Bool _focusEnabled;
    _Bool _modeOrFocusChanged;
    _Bool _autoConnect;
    _Bool _focusOnly;
    id <MMFinderLiveConnectMicModePageSheetViewDelegate> _delegate;
    MMFinderLiveConnectMicModePreviewView *_previewView;
    UITableView *_usersTableView;
    MMFinderLiveTaskId *_taskId;
    unsigned long long _originalMode;
    NSString *_originalFocusedUserId;
    NSArray *_micUsers;
    unsigned long long _anchorMicIndex;
    unsigned long long _selectedMode;
    NSString *_focusedUserId;
    MMFinderLiveConnectMicLayoutModeSubtitleWrap *_micLayoutModeSubtitleWrap;
    unsigned long long _selectedCondition;
    unsigned long long _disabledConditions;
}

+ (id)micUsersSortedByMicIndexOf:(id)arg1;
+ (id)rearrangedMicUserIndicesForLeadModeOf:(id)arg1 anchorMicIndex:(unsigned long long)arg2 anchorSdkUserId:(id)arg3 focusingUserId:(id)arg4;
+ (id)rearrangedMicUserIndicesForGrabModeOf:(id)arg1 anchorMicIndex:(unsigned long long)arg2 anchorSdkUserId:(id)arg3;
+ (id)rearrangedMicUserIndicesForFocusModeOf:(id)arg1 anchorMicIndex:(unsigned long long)arg2 anchorSdkUserId:(id)arg3 focusingUserId:(id)arg4;
+ (id)rearrangedMicUserIndicesForStandardModeOf:(id)arg1 anchorMicIndex:(unsigned long long)arg2 anchorSdkUserId:(id)arg3;
+ (id)rearrangedMicUserIndicesOf:(id)arg1 anchorMicIndex:(unsigned long long)arg2 anchorSdkUserId:(id)arg3 targetMode:(unsigned long long)arg4 targetFocusingUserId:(id)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool focusOnly; // @synthesize focusOnly=_focusOnly;
@property(nonatomic) unsigned long long disabledConditions; // @synthesize disabledConditions=_disabledConditions;
@property(nonatomic) _Bool autoConnect; // @synthesize autoConnect=_autoConnect;
@property(nonatomic) unsigned long long selectedCondition; // @synthesize selectedCondition=_selectedCondition;
@property(retain, nonatomic) MMFinderLiveConnectMicLayoutModeSubtitleWrap *micLayoutModeSubtitleWrap; // @synthesize micLayoutModeSubtitleWrap=_micLayoutModeSubtitleWrap;
@property(nonatomic) _Bool modeOrFocusChanged; // @synthesize modeOrFocusChanged=_modeOrFocusChanged;
@property(retain, nonatomic) NSString *focusedUserId; // @synthesize focusedUserId=_focusedUserId;
@property(nonatomic) _Bool focusEnabled; // @synthesize focusEnabled=_focusEnabled;
@property(nonatomic) unsigned long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) unsigned long long anchorMicIndex; // @synthesize anchorMicIndex=_anchorMicIndex;
@property(retain, nonatomic) NSArray *micUsers; // @synthesize micUsers=_micUsers;
@property(retain, nonatomic) NSString *originalFocusedUserId; // @synthesize originalFocusedUserId=_originalFocusedUserId;
@property(nonatomic) unsigned long long originalMode; // @synthesize originalMode=_originalMode;
@property(nonatomic) _Bool modeSelectionEnabled; // @synthesize modeSelectionEnabled=_modeSelectionEnabled;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) UITableView *usersTableView; // @synthesize usersTableView=_usersTableView;
@property(retain, nonatomic) MMFinderLiveConnectMicModePreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak id <MMFinderLiveConnectMicModePageSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getAnchorSdkUserId;
- (id)liveTask;
- (void)showSelectConnectModePanel;
- (void)showMicConditionChoosePanel;
- (id)conditionTitleForType:(unsigned long long)arg1;
- (id)dequeueGenericCell;
- (void)updatePreview;
- (void)updateTableSelection;
- (void)updateMicUsers;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (id)createRightButton;
- (void)setupPageSheetConfig;
- (void)onMMFinderLiveConnectMicSelectConnectModePanelClosed;
- (void)onMMFinderLiveConnectMicSelectConnectModeUpdateCanAutoConnect:(_Bool)arg1;
- (void)onMMFinderLiveConnectMicConditionClose;
- (void)onMMFinderLiveConnectMicConditionChoose:(unsigned long long)arg1;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)onSwitchToggledForSwitchCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)onConfirmed;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setSelectedMode:(unsigned long long)arg1 focusEnabled:(_Bool)arg2;
- (void)commonInitWithTaskId:(id)arg1 micLayoutMode:(unsigned long long)arg2 focusedUserId:(id)arg3;
- (id)initFocusOnlyPanelWithTaskId:(id)arg1 mode:(unsigned long long)arg2 focusedUserId:(id)arg3;
- (id)initWithTaskId:(id)arg1 condition:(unsigned long long)arg2 incomingAutoConnect:(_Bool)arg3 disabledConditions:(unsigned long long)arg4 mode:(unsigned long long)arg5 focusedUserId:(id)arg6 subtitleWrap:(id)arg7 modeSelectionEnabled:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

