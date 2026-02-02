//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString;
@protocol WCCardListViewControllerDelegate;

@interface WCCardListViewController
{
    MMTableView *m_tableView;
    id <WCCardListViewControllerDelegate> m_delegate;
    NSMutableArray *_cardDataList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cardDataList; // @synthesize cardDataList=_cardDataList;
@property(nonatomic) __weak id <WCCardListViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)loadCellSubView:(id)arg1 cardIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)OnDataChange;
- (void)dealloc;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onCancel;
- (void)initView;
- (void)initTableView;
- (void)changeDataSource:(id)arg1;
- (void)initData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

