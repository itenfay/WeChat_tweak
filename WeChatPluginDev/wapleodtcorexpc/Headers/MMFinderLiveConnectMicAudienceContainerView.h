//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicAudienceTableViewDataModel, MMFinderLiveMicInviteAudienceViewModel, MMFinderLivePaidConnectMicAnchorOperationPanelInfo, MMTableView, NSArray, NSString, UIView;

@interface MMFinderLiveConnectMicAudienceContainerView
{
    _Bool _isAudiencePkEnable;
    _Bool _isKTVSectionReported;
    NSArray *connectMicUserList;
    MMFinderLiveConnectMicAudienceTableViewDataModel *_tableViewDataModel;
    MMTableView *_tableView;
    double _cellDrawingWidth;
    UIView *_headerContainerView;
    NSArray *_connectedMicUserList;
    NSArray *_applyingMicUserList;
    MMFinderLiveMicInviteAudienceViewModel *_inviteAudienceViewModel;
    NSArray *_connectedMicUserListForPaidMic;
    NSArray *_applyingMicUserListForPaidMic;
    MMFinderLivePaidConnectMicAnchorOperationPanelInfo *_panelInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isKTVSectionReported; // @synthesize isKTVSectionReported=_isKTVSectionReported;
@property(retain, nonatomic) MMFinderLivePaidConnectMicAnchorOperationPanelInfo *panelInfo; // @synthesize panelInfo=_panelInfo;
@property(retain, nonatomic) NSArray *applyingMicUserListForPaidMic; // @synthesize applyingMicUserListForPaidMic=_applyingMicUserListForPaidMic;
@property(retain, nonatomic) NSArray *connectedMicUserListForPaidMic; // @synthesize connectedMicUserListForPaidMic=_connectedMicUserListForPaidMic;
@property(retain, nonatomic) MMFinderLiveMicInviteAudienceViewModel *inviteAudienceViewModel; // @synthesize inviteAudienceViewModel=_inviteAudienceViewModel;
@property(retain, nonatomic) NSArray *applyingMicUserList; // @synthesize applyingMicUserList=_applyingMicUserList;
@property(retain, nonatomic) NSArray *connectedMicUserList; // @synthesize connectedMicUserList=_connectedMicUserList;
@property(nonatomic) _Bool isAudiencePkEnable; // @synthesize isAudiencePkEnable=_isAudiencePkEnable;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(nonatomic) double cellDrawingWidth; // @synthesize cellDrawingWidth=_cellDrawingWidth;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMFinderLiveConnectMicAudienceTableViewDataModel *tableViewDataModel; // @synthesize tableViewDataModel=_tableViewDataModel;
@property(retain, nonatomic) NSArray *connectMicUserList; // @synthesize connectMicUserList;
- (void)checkTableViewCellDrawingWidthForPaidConnectMic;
- (_Bool)isPaidConnectMic;
- (void)updatePanelInfoUserListWithRemovedUserList:(id)arg1;
- (void)onMMFinderLiveMicInviteAudienceViewModelUserListUpdated;
- (id)audienceApplySeatIntroWithMicUser:(id)arg1;
- (_Bool)showApplicantSeatName;
- (id)tableView:(id)arg1 connectMicUserCellAtIndex:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)mainScrollView;
- (void)reloadContent;
- (void)layoutTableView;
- (void)layoutContentView;
- (void)scrollListToTopAnimated:(_Bool)arg1;
- (void)checkAndUpdateAfterMicConditionChanged;
- (id)getPanelInfo;
- (void)updateWithPanelInfo:(id)arg1;
- (void)updateWithConnectMicUserList:(id)arg1 invitedMicAudienceDict:(id)arg2;
- (void)updateConnectingUserList:(id)arg1 invalidUserList:(id)arg2 invitedMicAudienceDict:(id)arg3 recentRemovedUserList:(id)arg4;
- (void)updateWithConnectMicUserList:(id)arg1;
- (void)updateTableViewDataModelAndReload;
- (void)rebuildUserListForPaidMicWithConnectingUserIfNeeded:(id)arg1;
- (void)updateTableViewDataModel;
- (id)getFinderLiveTask;
- (id)initWithFrame:(struct CGRect)arg1 taskId:(id)arg2 isAudiencePkEnable:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

