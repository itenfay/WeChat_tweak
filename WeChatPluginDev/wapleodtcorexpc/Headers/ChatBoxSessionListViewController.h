//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUILabel, MainFrameFoldReporter, MainSessionEditingLogic, NSString;

@interface ChatBoxSessionListViewController
{
    unsigned long long _lastEnterMainTabTime;
    MainSessionEditingLogic *_sessionEditingLogic;
    MainFrameFoldReporter *_reporter;
    double _cellHeight;
    MMTableView *_tableView;
    MMUILabel *_emptyLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) MainFrameFoldReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) MainSessionEditingLogic *sessionEditingLogic; // @synthesize sessionEditingLogic=_sessionEditingLogic;
@property(nonatomic) unsigned long long lastEnterMainTabTime; // @synthesize lastEnterMainTabTime=_lastEnterMainTabTime;
- (void)registerYReportSdk;
- (void)onChatBoxSessionListChanged;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onSessionChanged:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)openSession:(id)arg1 atIndexPath:(id)arg2;
- (void)onLogicOpenSession:(id)arg1;
- (void)onLogicDeleteSessionByUsername:(id)arg1;
- (void)onLogicHideSession:(id)arg1;
- (long long)logicGetCountForSection:(long long)arg1;
- (void)logicUpdateSession:(id)arg1;
- (id)logicGetCellDataAtIndexPath:(id)arg1;
- (id)logicGetSessionAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)exposeCurrentVisibleCells;
- (void)updateNavBarLeftButton;
- (void)initUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

