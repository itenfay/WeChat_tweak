//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSNumber, NSString, UITableView, WAContactGetter;

@interface WASessionNotifySettingViewController
{
    NSNumber *_originGlobalOpenStatus;
    NSArray *_arrOriginCloseItem;
    NSNumber *_operatedGlobalOpenStatus;
    NSMutableArray *_arrOperatedOpenUserName;
    NSString *_askingOpenUserName;
    UITableView *_tableView;
    WAContactGetter *m_contactGetter;
    NSString *_sceneID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (void)onSessionNotifyUpdate;
- (void)checkAndSendNotifyOperationToServer;
- (_Bool)currentGlobalNotifyOpenStatus;
- (void)removeUserNameInClostItemList:(id)arg1;
- (void)updateNotifyData;
- (void)initData;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onClickNotifyOpenButton:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)genHeaderFooterView:(id)arg1 topMargin:(unsigned long long)arg2 bottomMargin:(unsigned long long)arg3;
- (void)onClickGlobalNotifySwitch:(id)arg1;
- (id)makeSessionListCellWithRow:(long long)arg1 tableView:(id)arg2;
- (id)makeGolbalNotifyCell;
- (void)reloadTableView;
- (void)layoutTableView;
- (void)layoutAllSubview;
- (void)initTableView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

