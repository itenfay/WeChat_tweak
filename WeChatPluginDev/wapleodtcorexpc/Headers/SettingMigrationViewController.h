//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UITableView;

@interface SettingMigrationViewController
{
    UITableView *_mainTableView;
    NSArray *_iconNameArray;
    NSArray *_titleArray;
    unsigned long long _vcType;
    NSString *_titleString;
}

+ (unsigned int)checkSupportMigratePC;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) unsigned long long vcType; // @synthesize vcType=_vcType;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) NSArray *iconNameArray; // @synthesize iconNameArray=_iconNameArray;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)secondRowTapAction;
- (void)firstRowTapAction;
- (void)showDeviceListView;
- (void)addCloudService;
- (void)addNasDevice;
- (void)backupToDevices;
- (void)backupToPC;
- (void)migrateToMobile;
- (void)migrateToPC;
- (id)getHeaderView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (struct CGRect)getTableViewFrame;
- (id)navigationBarBackgroundColor;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

