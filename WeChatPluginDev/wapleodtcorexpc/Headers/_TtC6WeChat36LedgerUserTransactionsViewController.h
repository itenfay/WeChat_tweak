//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat36LedgerUserTransactionsViewController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *context;
    MISSING_TYPE *dataSource;
    MISSING_TYPE *username;
    MISSING_TYPE *talkerName;
    MISSING_TYPE *isClose;
    MISSING_TYPE *kLastMonthRecordsEntryLink;
    MISSING_TYPE *$__lazy_storage_$_lastMonthRecordsEntry;
    MISSING_TYPE *categoryelectModal;
    MISSING_TYPE *datePicker;
    MISSING_TYPE *$__lazy_storage_$_tableView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)handleClose;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end

