//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ICFlowModel, ICFlowTableView, NSString;

@interface ICFlowTableViewController
{
    ICFlowModel *_model;
    ICFlowTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICFlowTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) ICFlowModel *model; // @synthesize model=_model;
- (void)flowModel:(id)arg1 deleteDataSectionsAt:(id)arg2;
- (void)flowModel:(id)arg1 insertDataSectionsAt:(id)arg2;
- (void)flowModel:(id)arg1 deleteDataItemsAt:(id)arg2;
- (void)flowModel:(id)arg1 insertDataItemsAt:(id)arg2;
- (void)flowModelReloadDataItems:(id)arg1;
- (void)flowModel:(id)arg1 didCancelLoadMore:(id)arg2;
- (void)flowModel:(id)arg1 didFinishLoadMore:(id)arg2 error:(id)arg3;
- (void)flowModelWillLoadMore:(id)arg1;
- (void)flowModel:(id)arg1 didFinishLoadNew:(id)arg2 error:(id)arg3;
- (void)flowModelWillLoadNew:(id)arg1;
- (void)startBatchFetching:(id)arg1;
- (_Bool)shouldBeginBatchFetching;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)reloadWithModel:(id)arg1;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

