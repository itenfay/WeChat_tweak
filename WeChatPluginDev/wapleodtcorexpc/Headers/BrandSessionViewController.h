//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableDictionary, NSString;

@interface BrandSessionViewController
{
    MMTableView *m_tableView;
    unsigned int m_stayTimeStart;
    NSMutableDictionary *m_brandExposed;
    unsigned int _sessionId;
    unsigned long long _source;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
- (id)queryOfUrl:(id)arg1;
- (id)getIdxFromMessage:(id)arg1;
- (id)getMidFromMessage:(id)arg1;
- (void)reportBrandExpose;
- (void)endRecordSessionListStayTime;
- (void)abortRecordSessionListStayTime;
- (void)startRecordSessionListStayTime;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)initSearchBar;
- (void)onBrandSessionAllDeleted;
- (void)handleAllBrandSessionDeleted;
- (void)handleAllBrandSessionDeletedStep2;
- (void)onBrandSessionsChanged;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)reportUnfollowSubscribe:(id)arg1 andUnread:(unsigned int)arg2;
- (void)handleBrandUnsubscribe:(id)arg1;
- (void)unsubscribeOnTableView:(id)arg1 IndexPath:(id)arg2;
- (void)handleDeleteSession:(id)arg1;
- (void)deleteSessionOnTableView:(id)arg1 indexPath:(id)arg2;
- (void)updateTopSessionCellStarMark:(id)arg1 withCellData:(id)arg2;
- (void)updateTopSessionCellBackgroundColor:(id)arg1 withCellData:(id)arg2;
- (void)updateSessionCellMenu:(id)arg1 withCellData:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initTableView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

