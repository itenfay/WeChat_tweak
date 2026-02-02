//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicPkPanelModel, MMFinderLiveMicInviteAudienceViewModel, MMFinderLiveTaskId, MMTableView, MMUIButton, NSMutableArray, NSString, UILabel, UITableViewDiffableDataSource;
@protocol MMFinderLiveConnectMicPkPanelMasterViewDelegate;

@interface MMFinderLiveConnectMicPkPanelMasterView : UIView
{
    _Bool _canShowInviteAudienceSection;
    MMFinderLiveConnectMicPkPanelModel *_model;
    id <MMFinderLiveConnectMicPkPanelMasterViewDelegate> _delegate;
    MMTableView *_tableView;
    UITableViewDiffableDataSource *_diffableDataSource;
    NSMutableArray *_sections;
    UIView *_headerView;
    UILabel *_pkModeLabel;
    UILabel *_pkStateLabel;
    MMUIButton *_leftActionButton;
    MMUIButton *_rightActionButton;
    unsigned long long _leftActionType;
    unsigned long long _rightActionType;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveMicInviteAudienceViewModel *_inviteAudienceViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveMicInviteAudienceViewModel *inviteAudienceViewModel; // @synthesize inviteAudienceViewModel=_inviteAudienceViewModel;
@property(nonatomic) _Bool canShowInviteAudienceSection; // @synthesize canShowInviteAudienceSection=_canShowInviteAudienceSection;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long rightActionType; // @synthesize rightActionType=_rightActionType;
@property(nonatomic) unsigned long long leftActionType; // @synthesize leftActionType=_leftActionType;
@property(retain, nonatomic) MMUIButton *rightActionButton; // @synthesize rightActionButton=_rightActionButton;
@property(retain, nonatomic) MMUIButton *leftActionButton; // @synthesize leftActionButton=_leftActionButton;
@property(retain, nonatomic) UILabel *pkStateLabel; // @synthesize pkStateLabel=_pkStateLabel;
@property(retain, nonatomic) UILabel *pkModeLabel; // @synthesize pkModeLabel=_pkModeLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UITableViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MMFinderLiveConnectMicPkPanelMasterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MMFinderLiveConnectMicPkPanelModel *model; // @synthesize model=_model;
- (void)onMMFinderLiveMicInviteAudienceViewModelUserListUpdated;
- (id)liveTask;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)arg1;
- (void)onPkPanelCellRightButtonAction:(unsigned long long)arg1;
- (void)onPkPanelCellQuitMic;
- (void)onPkPanelCellCancel;
- (void)onPkPanelCellAccept;
- (_Bool)showAudienceApplicantSeatName;
- (id)audienceApplySeatIntroWithMicUser:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onButtonAction:(unsigned long long)arg1;
- (void)onRightAction;
- (void)onLeftAction;
- (void)reloadActionButton;
- (void)reloadHeader;
- (void)layoutHeader;
- (void)layoutSubviews;
- (id)buttonIconName:(unsigned long long)arg1;
- (id)buttonWording:(unsigned long long)arg1;
- (void)rebuildSectionDataSource;
- (_Bool)compareSectionsChangesNeedAnimationWithSections:(id)arg1;
- (void)checkAndUpdateAfterMicConditionChanged;
- (void)fetchCanBeInvitedAudienceList;
- (void)updateCanShowInviteAudienceSection:(_Bool)arg1;
- (void)tryUpdateCanBeInvitedAudienceList;
- (void)rebuildDataSourceAndReloadAnimated:(_Bool)arg1;
- (void)updateWithModel:(id)arg1 animated:(_Bool)arg2;
- (void)applyDiffSnapshot:(_Bool)arg1;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 taskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

