//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString, UITableView;

@interface SettingGeneralChatLogViewController
{
    NSArray *_iconArray;
    NSArray *_titleArray;
    NSArray *_tipsArray;
    NSArray *_actionArray;
    NSMutableArray *_cellHeightArr;
    UITableView *_mainTableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) NSMutableArray *cellHeightArr; // @synthesize cellHeightArr=_cellHeightArr;
@property(retain, nonatomic) NSArray *actionArray; // @synthesize actionArray=_actionArray;
@property(retain, nonatomic) NSArray *tipsArray; // @synthesize tipsArray=_tipsArray;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) NSArray *iconArray; // @synthesize iconArray=_iconArray;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)enterMigration;
- (void)showBackupTip;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (struct CGRect)getTableViewFrame;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

