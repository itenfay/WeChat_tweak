//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString;

@interface WCScheduleManageViewController
{
    MMTableView *_tableView;
    NSMutableArray *_todoItemArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *todoItemArr; // @synthesize todoItemArr=_todoItemArr;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)OnUpdateItems:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)makeScheduleItemCell:(id)arg1 item:(id)arg2;
- (void)makeNoRecentCell:(id)arg1;
- (void)makeCell:(id)arg1 indexPath:(id)arg2;
- (unsigned long long)getCellTypeWithIndexPath:(id)arg1;
- (_Bool)isItem:(id)arg1 EqualToItem:(id)arg2;
- (void)getContactsFromServerIfNecessary;
- (void)onReturn;
- (void)updateNavigationItems;
- (void)initNavigationBar;
- (void)removeSchedule:(id)arg1;
- (void)initView;
- (_Bool)retrieveScheduleData;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

