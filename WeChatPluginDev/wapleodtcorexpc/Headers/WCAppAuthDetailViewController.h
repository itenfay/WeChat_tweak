//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSString, WCAppAuthDataItem, WCAppAuthDetailFooterView, WCAppAuthDetailHeaderView, WCAppAuthLogicController;

@interface WCAppAuthDetailViewController
{
    unsigned int _scene;
    unsigned int _fromIndex;
    MMTableView *_tableView;
    WCAppAuthDetailHeaderView *_tableHeaderView;
    WCAppAuthDetailFooterView *_tableFooterView;
    WCAppAuthLogicController *_logicController;
    WCAppAuthDataItem *_appDataItem;
    NSArray *_arrScopeInfoItem;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int fromIndex; // @synthesize fromIndex=_fromIndex;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSArray *arrScopeInfoItem; // @synthesize arrScopeInfoItem=_arrScopeInfoItem;
@property(retain, nonatomic) WCAppAuthDataItem *appDataItem; // @synthesize appDataItem=_appDataItem;
@property(retain, nonatomic) WCAppAuthLogicController *logicController; // @synthesize logicController=_logicController;
@property(retain, nonatomic) WCAppAuthDetailFooterView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) WCAppAuthDetailHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)logicDeletionAppFail:(id)arg1;
- (void)logicDidFinishDeletionApp:(id)arg1 index:(unsigned int)arg2;
- (void)logicWillStartDeletionApp:(id)arg1;
- (void)onDetailFooterCancelBtnClick;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)layoutTableFooterView;
- (void)layoutTableHeaderView;
- (void)initTableView;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithAppData:(id)arg1 authLogic:(id)arg2 fromScene:(unsigned int)arg3 index:(unsigned int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

