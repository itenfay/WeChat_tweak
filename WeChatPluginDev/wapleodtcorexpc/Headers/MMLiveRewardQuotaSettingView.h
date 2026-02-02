//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMTableView, MMUIButton, MMUILabel, NSString, OrderedDictionary, UIView;
@protocol MMLiveRewardQuotaSettingViewDelegate;

@interface MMLiveRewardQuotaSettingView
{
    unsigned int _curRewardQuota;
    id <MMLiveRewardQuotaSettingViewDelegate> _operationDelegate;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    MMUIButton *_backButton;
    MMUILabel *_titleLabel;
    MMTableView *_rewardQuotaOptionTableView;
    OrderedDictionary *_rewardQuotaOptions;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int curRewardQuota; // @synthesize curRewardQuota=_curRewardQuota;
@property(retain, nonatomic) OrderedDictionary *rewardQuotaOptions; // @synthesize rewardQuotaOptions=_rewardQuotaOptions;
@property(retain, nonatomic) MMTableView *rewardQuotaOptionTableView; // @synthesize rewardQuotaOptionTableView=_rewardQuotaOptionTableView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveRewardQuotaSettingViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)backAction;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)setExtraCellLineHidden:(id)arg1;
- (double)contentViewHeight;
- (id)liveTask;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (void)initDefaultData;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 curRewardQuota:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

