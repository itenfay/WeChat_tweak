//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTask, MMFinderLiveTaskId, MMLiveGameJoinTeamSettingCoinValueView, MMTableView, MMUIButton, MMUILabel, NSMutableArray, NSString, UIView;
@protocol MMLiveGameJoinTeamSettingViewDelegate;

@interface MMLiveGameJoinTeamSettingCoinView
{
    id <MMLiveGameJoinTeamSettingViewDelegate> _operationDelegate;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    UIView *_topAreaView;
    MMUIButton *_leftButton;
    MMUIButton *_rightButton;
    MMUILabel *_titleLabel;
    MMTableView *_tableView;
    MMLiveGameJoinTeamSettingCoinValueView *_settingCoinValueView;
    NSMutableArray *_coinValues;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *coinValues; // @synthesize coinValues=_coinValues;
@property(retain, nonatomic) MMLiveGameJoinTeamSettingCoinValueView *settingCoinValueView; // @synthesize settingCoinValueView=_settingCoinValueView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) MMUIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *topAreaView; // @synthesize topAreaView=_topAreaView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveGameJoinTeamSettingViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (double)parentHeight;
- (void)onViewDismissed:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)rightButtonAction;
- (void)leftButtonAction;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 taskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

