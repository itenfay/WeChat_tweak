//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUILabel, NSMutableArray, NSString;
@protocol WCPayGPOrderHistoryControllerDelegate;

@interface WCPayGPOrderHistoryViewController
{
    _Bool _bIsLoadingMore;
    _Bool _bIsDataLoadEnd;
    id <WCPayGPOrderHistoryControllerDelegate> _delegate;
    NSMutableArray *_orderHistory;
    NSString *_h5AARecordUrl;
    unsigned long long _curHistoryScene;
    MMTableView *_tableView;
    MMUILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool bIsDataLoadEnd; // @synthesize bIsDataLoadEnd=_bIsDataLoadEnd;
@property(nonatomic) _Bool bIsLoadingMore; // @synthesize bIsLoadingMore=_bIsLoadingMore;
@property(nonatomic) unsigned long long curHistoryScene; // @synthesize curHistoryScene=_curHistoryScene;
@property(retain, nonatomic) NSString *h5AARecordUrl; // @synthesize h5AARecordUrl=_h5AARecordUrl;
@property(retain, nonatomic) NSMutableArray *orderHistory; // @synthesize orderHistory=_orderHistory;
@property(nonatomic) __weak id <WCPayGPOrderHistoryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)h5RecordEnteranceBtnPress;
- (void)rightBarButtonClick;
- (void)orderHistoryVCCancel;
- (void)genTableFooterViewAfterLoadAllData;
- (id)genTableFooterView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)removeEmptyTipsView;
- (void)setupEmptyTipsView;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)setupData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)refreshViewControllerWhenOrderHistoryError;
- (void)refreshViewControllerWhenOrderHistoryRespBack;
- (void)refreshViewControllerWithOrderHistoryListData:(id)arg1 bIsReloadFromTop:(_Bool)arg2 dataScene:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

