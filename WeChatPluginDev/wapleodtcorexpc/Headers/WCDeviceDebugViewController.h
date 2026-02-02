//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString;

@interface WCDeviceDebugViewController
{
    NSMutableArray *m_data;
    MMTableView *m_tableView;
    NSString *m_userName;
    int m_lastIndex;
}

- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)makeCell:(id)arg1 forLog:(id)arg2;
- (void)makeCell:(id)arg1 forInfo:(id)arg2;
- (void)makeCell:(id)arg1 forTips:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCellTextAndCaculateHeight:(id)arg1;
- (void)loadMoreLogs;
- (void)onLogClean;
- (void)onLogAdded;
- (void)onCleanClick;
- (void)onFAQClick;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onOperate:(id)arg1;
- (void)initView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

