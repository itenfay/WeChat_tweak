//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicModePreviewView, MMFinderLiveTaskId, NSString, UITableView;
@protocol MMFinderLiveConnectMicAnchorPkLayoutModePanelDelegate;

@interface MMFinderLiveConnectMicAnchorPkLayoutModePanel
{
    _Bool _modeChanged;
    id <MMFinderLiveConnectMicAnchorPkLayoutModePanelDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    unsigned long long _originalMode;
    unsigned long long _selectedMode;
    unsigned long long _micLayoutMode;
    MMFinderLiveConnectMicModePreviewView *_previewView;
    UITableView *_modeSettingTableView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool modeChanged; // @synthesize modeChanged=_modeChanged;
@property(retain, nonatomic) UITableView *modeSettingTableView; // @synthesize modeSettingTableView=_modeSettingTableView;
@property(retain, nonatomic) MMFinderLiveConnectMicModePreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) unsigned long long micLayoutMode; // @synthesize micLayoutMode=_micLayoutMode;
@property(nonatomic) unsigned long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) unsigned long long originalMode; // @synthesize originalMode=_originalMode;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveConnectMicAnchorPkLayoutModePanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)onConfirmed;
- (void)dealloc;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)layoutSubviews;
- (id)liveTask;
- (void)updatePreviewViewWithMicUsersInfo:(id)arg1;
- (void)updateTableSelection;
- (id)dequeueGenericCell;
- (id)createRightButton;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 mode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

