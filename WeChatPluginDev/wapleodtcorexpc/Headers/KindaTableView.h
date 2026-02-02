//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaUITableView, MMRefreshTableFooterView, MMUIActivityIndicatorView, MMVoidCallback, NSMutableArray, NSString, UILabel;

@interface KindaTableView
{
    _Bool _enabledFooterViewRefresh;
    KindaUITableView *_tableView;
    NSMutableArray *_cells;
    MMRefreshTableFooterView *_footerView;
    UILabel *_loadingLabel;
    MMUIActivityIndicatorView *_indicatorView;
    unsigned long long _loadingState;
    MMVoidCallback *_footerRefreshCallback;
    MMVoidCallback *_onScrollCallBack;
    MMVoidCallback *_onScrollBeginBallback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMVoidCallback *onScrollBeginBallback; // @synthesize onScrollBeginBallback=_onScrollBeginBallback;
@property(retain, nonatomic) MMVoidCallback *onScrollCallBack; // @synthesize onScrollCallBack=_onScrollCallBack;
@property(retain, nonatomic) MMVoidCallback *footerRefreshCallback; // @synthesize footerRefreshCallback=_footerRefreshCallback;
@property(nonatomic) _Bool enabledFooterViewRefresh; // @synthesize enabledFooterViewRefresh=_enabledFooterViewRefresh;
@property(nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) MMRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(retain, nonatomic) KindaUITableView *tableView; // @synthesize tableView=_tableView;
- (void)setFooterRefreshViewLoadMoreCallbackImpl:(id)arg1;
- (void)setEnableFooterRefreshView:(_Bool)arg1;
- (id)getView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)setOnBeginScrollCallbackImpl:(id)arg1;
- (void)setOnScrollCallBackImpl:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadTableView;
- (void)setFooterViewNormalState;
- (void)updateIndicator;
- (void)updateLoadingLabel;
- (void)updateFooterView;
- (void)makeCell:(id)arg1 cellManager:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

