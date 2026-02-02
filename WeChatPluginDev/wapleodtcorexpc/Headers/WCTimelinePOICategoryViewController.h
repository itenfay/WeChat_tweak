//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString;
@protocol POICategoryDelegate;

@interface WCTimelinePOICategoryViewController
{
    id <POICategoryDelegate> _delegate;
    MMTableView *m_tableView;
    NSMutableArray *m_categoryArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_categoryArray; // @synthesize m_categoryArray;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(nonatomic) __weak id <POICategoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleCategoriesConfig:(id)arg1;
- (void)onPackageListUpdated:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)initTableHeaderView;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

