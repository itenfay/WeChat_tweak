//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat25WCPayLedgerViewController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *dateFormatter;
    MISSING_TYPE *logicContext;
    MISSING_TYPE *dataSource;
    MISSING_TYPE *categoryelectModal;
    MISSING_TYPE *datePicker;
    MISSING_TYPE *isLoadingRecords;
    MISSING_TYPE *isClose;
    MISSING_TYPE *kChangeGroupModeLink;
    MISSING_TYPE *$__lazy_storage_$_categoryFilter;
    MISSING_TYPE *kLastMonthRecordsEntryLink;
    MISSING_TYPE *$__lazy_storage_$_lastMonthRecordsEntry;
    MISSING_TYPE *$__lazy_storage_$_modeFilter;
    MISSING_TYPE *$__lazy_storage_$_expenseIncomeView;
    MISSING_TYPE *$__lazy_storage_$_expenseLabel;
    MISSING_TYPE *$__lazy_storage_$_incomeLabel;
    MISSING_TYPE *$__lazy_storage_$_tableView;
    MISSING_TYPE *$__lazy_storage_$_loadMoreFooter;
    MISSING_TYPE *$__lazy_storage_$_separator;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)handleClose;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)useTransparentNavibar;
- (id)navigationBarBackgroundColor;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)showNavigationBarSepLine;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

