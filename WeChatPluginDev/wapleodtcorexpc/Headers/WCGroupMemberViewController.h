//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString, WCDataItem;

@interface WCGroupMemberViewController
{
    MMTableView *m_tableView;
    WCDataItem *m_dataItem;
    NSMutableArray *m_arrUserName;
}

- (void).cxx_destruct;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)getContact:(id)arg1;
- (id)initWithDataItem:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)updateTitle;
- (void)initTableView;
- (void)initData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

