//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DeviceRankDetailResonse, MMTableView, NSMutableArray, NSString, UILabel;

@interface BraceletFocusListViewController
{
    DeviceRankDetailResonse *_detailResp;
    NSMutableArray *_arrFollowItems;
    MMTableView *_tableView;
    UILabel *_noFocusTipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *noFocusTipsLabel; // @synthesize noFocusTipsLabel=_noFocusTipsLabel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *arrFollowItems; // @synthesize arrFollowItems=_arrFollowItems;
@property(retain, nonatomic) DeviceRankDetailResonse *detailResp; // @synthesize detailResp=_detailResp;
- (void)onDelFollowWithUserName:(id)arg1 error:(int)arg2;
- (void)onAddFollowWithFollowItems:(id)arg1 error:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 AtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onAddFocus:(id)arg1;
- (void)initView;
- (void)reloadData;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

