//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITableView;
@protocol HoneyPaySelectCardTypeViewControllerDelegate;

@interface HoneyPaySelectCardTypeViewController
{
    id <HoneyPaySelectCardTypeViewControllerDelegate> _delegate;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <HoneyPaySelectCardTypeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)useBlackStatusbar;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupTableHeaderView;
- (void)reloadTableView;
- (id)navigationBarBackgroundColor;
- (void)setupNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

