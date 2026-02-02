//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, WCPayPickerView;
@protocol WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate;

@interface WCRedEnvelopesRedEnvelopesHistoryListViewController
{
    id <WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate> m_delegate;
    _Bool m_loadingMoreOrderList;
    MMTableView *m_tableView;
    int m_enWCRedEnvelopesRedEnvelopesHistoryListViewControllerScene;
    _Bool m_bDidBack;
    WCPayPickerView *m_pickerView;
}

- (void).cxx_destruct;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)OnClickedHeaderImageView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)WCPayPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)WCPayPickerViewDidCancel;
- (void)OnSelectYears;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (id)getRecordNickNameAttributedStringWithSuffix:(id)arg1 suffix:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)changeHistoryType;
- (void)setScene:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)commentRedEnvelopes;
- (void)refreshViewWithData:(id)arg1;
- (id)GetHeaderView:(id)arg1;
- (void)initTableView;
- (id)getBottomView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadMoreOrderList;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)OnLeftBarButtonDone;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (id)initWithScene:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

