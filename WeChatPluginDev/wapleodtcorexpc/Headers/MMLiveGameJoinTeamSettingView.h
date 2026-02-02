//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMTableView, MMUIButton, MMUILabel, NSString, OrderedDictionary, UIView;
@protocol MMLiveGameJoinTeamSettingViewDelegate;

@interface MMLiveGameJoinTeamSettingView
{
    unsigned int _lastJoinTeamMode;
    unsigned int _curJoinTeamMode;
    unsigned int _curCoinValue;
    id <MMLiveGameJoinTeamSettingViewDelegate> _operationDelegate;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    UIView *_topAreaView;
    MMUIButton *_leftButton;
    MMUILabel *_titleLabel;
    MMTableView *_joinTeamModeTableView;
    OrderedDictionary *_joinTeamQualifications;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int curCoinValue; // @synthesize curCoinValue=_curCoinValue;
@property(nonatomic) unsigned int curJoinTeamMode; // @synthesize curJoinTeamMode=_curJoinTeamMode;
@property(nonatomic) unsigned int lastJoinTeamMode; // @synthesize lastJoinTeamMode=_lastJoinTeamMode;
@property(retain, nonatomic) OrderedDictionary *joinTeamQualifications; // @synthesize joinTeamQualifications=_joinTeamQualifications;
@property(retain, nonatomic) MMTableView *joinTeamModeTableView; // @synthesize joinTeamModeTableView=_joinTeamModeTableView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *topAreaView; // @synthesize topAreaView=_topAreaView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveGameJoinTeamSettingViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (id)liveTask;
- (id)getCurrentLeftButton;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)showChooseCoinView;
- (void)leftButtonAction;
- (void)setExtraCellLineHidden:(id)arg1;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (void)initDefaultData;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 curJoinTeamMode:(unsigned int)arg2 curCoinValue:(unsigned int)arg3;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

