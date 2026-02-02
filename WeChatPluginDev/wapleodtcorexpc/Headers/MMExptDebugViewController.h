//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPickerView, MMTableView, NSString, WCBaseTextFieldItem;

@interface MMExptDebugViewController
{
    MMTableView *_tableView;
    MMPickerView *m_pickerView;
    NSString *_selectedExptId;
    WCBaseTextFieldItem *m_inputExptId;
    WCBaseTextFieldItem *m_inputExptKey;
}

- (void).cxx_destruct;
- (id)genShowView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)MMPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (id)sortedAllExpt;
- (void)onClickDelExpt:(id)arg1;
- (void)onClickReqExpt:(id)arg1;
- (void)onClickSelectExpt:(id)arg1;
- (void)onClickConfirmExptId:(id)arg1;
- (void)onClickConfirmExptKey:(id)arg1;
- (void)onClickReqReport:(id)arg1;
- (void)onClickReqAppExpt:(id)arg1;
- (id)genTableHeaderView;
- (void)onTapEmpty;
- (void)initView;
- (void)onExptItemListChange;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

