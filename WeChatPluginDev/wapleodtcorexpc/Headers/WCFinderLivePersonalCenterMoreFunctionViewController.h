//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveRewardQuotaSwitchInfo, MMTableView, NSMutableArray, NSString;

@interface WCFinderLivePersonalCenterMoreFunctionViewController
{
    _Bool _openRewardLimitNotify;
    MMTableView *_mainTableView;
    NSMutableArray *_items;
    FinderLiveRewardQuotaSwitchInfo *_rewardSwitchInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveRewardQuotaSwitchInfo *rewardSwitchInfo; // @synthesize rewardSwitchInfo=_rewardSwitchInfo;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool openRewardLimitNotify; // @synthesize openRewardLimitNotify=_openRewardLimitNotify;
@property(retain, nonatomic) MMTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
- (_Bool)canDidSelectWithItem:(id)arg1;
- (double)getTitleStringHeightWithItem:(id)arg1;
- (double)getDetailStringHeightWithItem:(id)arg1;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (void)innerUpdateRewardAmounSwitch:(_Bool)arg1 rewardQuota:(unsigned long long)arg2;
- (void)updateRewardAmounSwitch:(_Bool)arg1 rewardQuota:(unsigned long long)arg2;
- (void)reloadData;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)onMMLiveRewardQuotaPolicySheetViewActionButtonClicked:(unsigned long long)arg1 verifyUrl:(id)arg2 secverifyId:(id)arg3 userInfo:(id)arg4;
- (void)onMMLiveRewardQuotaPolicySheetViewCancelButtonClicked;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)moreFunctionIndexPath:(id)arg1 item:(id)arg2 isOn:(_Bool)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initData;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRewardQuotaSwitchInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

