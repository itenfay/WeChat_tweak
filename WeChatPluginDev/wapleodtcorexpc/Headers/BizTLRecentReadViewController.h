//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BizRecentReadFooter, BizRecentReadTipsBar, GetTimelineSettingResp, MMTableView, MMUILabel, NSMutableArray, NSMutableSet, NSString, RichTextView;

@interface BizTLRecentReadViewController
{
    _Bool _hasLoadAllData;
    _Bool _loadLock;
    int _sessionId;
    unsigned int _state;
    unsigned int _initialUpdatedTimeStamp;
    NSMutableArray *_viewModelList;
    GetTimelineSettingResp *_settingResp;
    NSMutableSet *_clickSet;
    MMTableView *_tableView;
    BizRecentReadTipsBar *_dataTipsLabelBar;
    MMUILabel *_emptyContentLabel;
    RichTextView *_closedLabel;
    BizRecentReadFooter *_footerView;
    double _tableTop;
}

- (void).cxx_destruct;
@property(nonatomic) double tableTop; // @synthesize tableTop=_tableTop;
@property(nonatomic) _Bool loadLock; // @synthesize loadLock=_loadLock;
@property(nonatomic) _Bool hasLoadAllData; // @synthesize hasLoadAllData=_hasLoadAllData;
@property(retain, nonatomic) BizRecentReadFooter *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) RichTextView *closedLabel; // @synthesize closedLabel=_closedLabel;
@property(retain, nonatomic) MMUILabel *emptyContentLabel; // @synthesize emptyContentLabel=_emptyContentLabel;
@property(retain, nonatomic) BizRecentReadTipsBar *dataTipsLabelBar; // @synthesize dataTipsLabelBar=_dataTipsLabelBar;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableSet *clickSet; // @synthesize clickSet=_clickSet;
@property(retain, nonatomic) GetTimelineSettingResp *settingResp; // @synthesize settingResp=_settingResp;
@property(retain, nonatomic) NSMutableArray *viewModelList; // @synthesize viewModelList=_viewModelList;
@property(nonatomic) unsigned int initialUpdatedTimeStamp; // @synthesize initialUpdatedTimeStamp=_initialUpdatedTimeStamp;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) int sessionId; // @synthesize sessionId=_sessionId;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)loadNextPageIfNeed:(id)arg1;
- (void)updateTipsWhenScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)getCellOffset:(id)arg1 cell:(id)arg2;
- (id)getIndex0Cell:(id)arg1;
- (id)getFirstVisibleCell:(id)arg1;
- (void)showRightMoreButton:(_Bool)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showMakeSureCloseSheet;
- (void)onNavigationButtonMoreClicked;
- (void)viewDidLayoutSubviews;
- (_Bool)showNavigationBarSepLine;
- (void)initRefreshControl;
- (void)initVc;
- (void)dealloc;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)handleDataResp:(id)arg1;
- (void)handleDataCgi:(id)arg1;
- (void)loadMoreData;
- (void)runDeleteCgi:(id)arg1;
- (void)onOpen;
- (void)onCloseAndDeleteAllItems;
- (void)onDeleteSingleItem:(id)arg1;
- (void)reportOnClickItem:(id)arg1;
- (void)report27214:(int)arg1;
- (void)dispatchOnViewBePoped;
- (void)handleSettingCgi:(id)arg1;
- (void)runSettingCloseCgi:(_Bool)arg1;
- (void)getUserSetting:(CDUnknownBlockType)arg1;
- (void)onOpenMp:(id)arg1;
- (void)updatePreloadMpData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

