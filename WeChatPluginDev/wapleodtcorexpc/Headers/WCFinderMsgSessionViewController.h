//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBaseSessionCellData, MMTableView, NSString, WCFinderMsgSessionCellDataSource, WCFinderMsgSessionListReporter, WCFinderProcessTimeRecorder;

@interface WCFinderMsgSessionViewController
{
    WCFinderMsgSessionCellDataSource *_cellDataSource;
    MMTableView *_tableView;
    WCFinderMsgSessionListReporter *_reporter;
    MMBaseSessionCellData *_systemCellData;
    NSString *_currentFinderUsername;
    WCFinderProcessTimeRecorder *_processTimeRecarder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProcessTimeRecorder *processTimeRecarder; // @synthesize processTimeRecarder=_processTimeRecarder;
@property(retain, nonatomic) NSString *currentFinderUsername; // @synthesize currentFinderUsername=_currentFinderUsername;
@property(retain, nonatomic) MMBaseSessionCellData *systemCellData; // @synthesize systemCellData=_systemCellData;
@property(retain, nonatomic) WCFinderMsgSessionListReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCFinderMsgSessionCellDataSource *cellDataSource; // @synthesize cellDataSource=_cellDataSource;
- (void)onClickMentionSwitchAction;
- (void)reportPageOut;
- (void)registerYReportSdk;
- (void)reloadViewData;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (_Bool)enableDisplayBadgeGroupView;
- (id)getSystemCellData;
- (_Bool)canShowSystemCellData;
- (id)getSessionIdForIndexPath:(id)arg1;
- (void)onFinderMsgSessionUpdated;
- (void)onFinderPrivateMsgContactExtInfoUpdatedWithSessionId:(id)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)reportFinderTeamMsgWithEventType:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)commentScene;
- (void)reloadTableView;
- (void)onWillQuitSessionViewController;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setUpRightNav;
- (void)viewDidLoad;
- (_Bool)canShowPrivate;
- (void)configReportInfoWithReporter:(id)arg1;
- (id)initWithSessionCellDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

