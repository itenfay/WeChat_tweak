//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString;

@interface BraceletRankSourceSettingViewController
{
    NSMutableArray *m_DataSourcList;
    struct map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapSectionType;
    NSMutableArray *m_RowDataList;
    MMTableView *m_tableView;
    NSString *m_nsDataSourceFaqURL;
    NSString *m_nsWatchDataSourceFaqURL;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onAddSportDevice:(id)arg1;
- (_Bool)isM7Device:(id)arg1;
- (id)makeMockAppleWatchDevice;
- (id)makeMockM7Device;
- (void)onGetSportDeviceListEnd:(id)arg1 DataSourceFaqURL:(id)arg2 WatchDataSourceFaqURL:(id)arg3 ErrorCode:(int)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)getTitle:(id *)arg1 detail:(id *)arg2 atIndex:(long long)arg3;
- (void)reloadTableData;
- (void)makeAddPedometerCell:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)updateTableSectionWithStepOnState:(_Bool)arg1;
- (void)resetSection;
- (void)initData;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

