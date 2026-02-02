//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreFootView, MMTableView, ModEmotionRecordCgi, NSMutableArray, NSString;

@interface PurchasedEmoticonViewController
{
    NSMutableArray *m_arrTableData;
    MMTableView *m_tableView;
    EmoticonStoreFootView *m_tailView;
    double labelMaxWidth;
    ModEmotionRecordCgi *_modRecordCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ModEmotionRecordCgi *modRecordCgi; // @synthesize modRecordCgi=_modRecordCgi;
@property(nonatomic) double labelMaxWidth; // @synthesize labelMaxWidth;
@property(retain, nonatomic) EmoticonStoreFootView *m_tailView; // @synthesize m_tailView;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) NSMutableArray *m_arrTableData; // @synthesize m_arrTableData;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)reloadData;
- (void)OnBoughtListChanged:(id)arg1 withRet:(unsigned long long)arg2;
- (void)OnRestoreEmoticonItemFailed;
- (void)OnRestoreEmoticonItemSuccess;
- (void)onSwipeToDelPurchaseRecordAtIndex:(unsigned long long)arg1;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)checkIAPRet:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickNavRightButton:(id)arg1;
- (void)OnStartLoadingAndShowStringBlocked:(id)arg1;
- (void)OnStopLoadingAndShowError:(id)arg1;
- (void)OnStopLoadingAndShowOK:(id)arg1;
- (void)OnStartLoadingAndShowString:(id)arg1;
- (void)initFooterView;
- (void)initTableView;
- (void)initView;
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

