//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveRewardQuotaSwitchInfo, MMTableView, NSString, OrderedDictionary;

@interface WCFinderLivePersonalCenterRewardNoticeAmountViewController
{
    CDUnknownBlockType _onVCWillPop;
    MMTableView *_rewardQuotaOptionTableView;
    OrderedDictionary *_rewardQuotaOptions;
    unsigned long long _curRewardQuota;
    FinderLiveRewardQuotaSwitchInfo *_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveRewardQuotaSwitchInfo *info; // @synthesize info=_info;
@property(nonatomic) unsigned long long curRewardQuota; // @synthesize curRewardQuota=_curRewardQuota;
@property(retain, nonatomic) OrderedDictionary *rewardQuotaOptions; // @synthesize rewardQuotaOptions=_rewardQuotaOptions;
@property(retain, nonatomic) MMTableView *rewardQuotaOptionTableView; // @synthesize rewardQuotaOptionTableView=_rewardQuotaOptionTableView;
@property(copy, nonatomic) CDUnknownBlockType onVCWillPop; // @synthesize onVCWillPop=_onVCWillPop;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initUI;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRewardQuotaSwitchInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

