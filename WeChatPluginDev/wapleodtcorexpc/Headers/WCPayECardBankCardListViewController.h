//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString;
@protocol WCPayECardBankCardListViewControllerDelegate;

@interface WCPayECardBankCardListViewController
{
    id <WCPayECardBankCardListViewControllerDelegate> _delegate;
    MMTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCPayECardBankCardListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)makeSelectNewCardToVerifyCell:(id)arg1;
- (void)makeBankInfoCell:(id)arg1 bankInfo:(id)arg2 isLastOne:(_Bool)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)setupTableHeaderView;
- (void)reloadTableView;
- (void)leftBarButtonItemClick;
- (void)setupTableView;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

