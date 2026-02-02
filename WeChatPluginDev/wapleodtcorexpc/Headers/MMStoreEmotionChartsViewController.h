//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreFootView, MMTableView, NSMutableArray, NSString;

@interface MMStoreEmotionChartsViewController
{
    MMTableView *_chartsTableView;
    NSMutableArray *_chartsItemArray;
    _Bool _isLoadedFromCache;
    unsigned long long _sessionId;
    EmoticonStoreFootView *_tailView;
}

- (void).cxx_destruct;
- (void)OnEmotionChartsCellTapButton:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)OnStoreListChanged:(id)arg1 withRet:(unsigned long long)arg2 withReqType:(unsigned int)arg3 data:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reportEmoticonStoreExposure;
- (void)reloadData;
- (void)initTableFooterView;
- (void)setupTableView;
- (void)setupViews;
- (void)setupData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

