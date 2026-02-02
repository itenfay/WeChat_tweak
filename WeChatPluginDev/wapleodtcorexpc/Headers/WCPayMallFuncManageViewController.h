//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString;
@protocol WCPayMallFuncManageViewControllerDelegate;

@interface WCPayMallFuncManageViewController
{
    id <WCPayMallFuncManageViewControllerDelegate> m_delegate;
    MMTableView *m_tableView;
    NSMutableArray *_updateFuncTypeList;
    NSMutableDictionary *_updateFuncDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *updateFuncDict; // @synthesize updateFuncDict=_updateFuncDict;
@property(retain, nonatomic) NSMutableArray *updateFuncTypeList; // @synthesize updateFuncTypeList=_updateFuncTypeList;
- (void)onBack;
- (_Bool)isUpdate;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)onSwitchChanged:(id)arg1;
- (void)makePayFuncItemCell:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getTableViewHeaderView;
- (id)getTableViewFooterView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onSwipeRight:(id)arg1;
- (void)updateTableView;
- (void)copyData;
- (void)refreshViewWithData:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (_Bool)shouldInteractivePop;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

