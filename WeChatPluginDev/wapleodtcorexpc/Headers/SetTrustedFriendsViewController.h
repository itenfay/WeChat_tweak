//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString, SetTrustedFriendTipsView, TrustedFriendsLogic, WeToast;

@interface SetTrustedFriendsViewController
{
    _Bool _m_isDeleting;
    NSString *_tipWording;
    MMTableViewInfo *_m_tableViewInfo;
    TrustedFriendsLogic *_m_trustedFriendsLogic;
    WeToast *_m_toastView;
    SetTrustedFriendTipsView *_m_tipsView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isDeleting; // @synthesize m_isDeleting=_m_isDeleting;
@property(retain, nonatomic) SetTrustedFriendTipsView *m_tipsView; // @synthesize m_tipsView=_m_tipsView;
@property(retain, nonatomic) WeToast *m_toastView; // @synthesize m_toastView=_m_toastView;
@property(retain, nonatomic) TrustedFriendsLogic *m_trustedFriendsLogic; // @synthesize m_trustedFriendsLogic=_m_trustedFriendsLogic;
@property(retain, nonatomic) MMTableViewInfo *m_tableViewInfo; // @synthesize m_tableViewInfo=_m_tableViewInfo;
@property(copy, nonatomic) NSString *tipWording; // @synthesize tipWording=_tipWording;
- (void)onClose;
- (void)tryShowNotEnoughTips;
- (void)relayoutNaviBarButton:(_Bool)arg1;
- (unsigned long long)getMemberViewColumnCount;
- (void)makeMemListSection:(id)arg1;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)reloadMemberView;
- (void)initMemberView;
- (id)makeHeaderView;
- (void)initTableView;
- (void)initNavigationBar;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)goBackToMySetting;
- (void)didAlertViewWithReason:(unsigned int)arg1 isCancelButton:(_Bool)arg2;
- (void)onPressDoneBtn;
- (_Bool)hasSetTrustedFriend;
- (void)didRemoveTrustedFriendsLocally:(id)arg1 contacts:(id)arg2;
- (void)didAddTrustedFriendsLocally:(id)arg1 contacts:(id)arg2;
- (void)didFinishSyncTrustedFriends:(id)arg1 contacts:(id)arg2;
- (void)didFinishGetTrustedFriends:(id)arg1 contacts:(id)arg2;
- (void)didFailedCGI:(unsigned int)arg1 error:(unsigned int)arg2 msg:(id)arg3;
- (void)didStartCGI:(unsigned int)arg1;
- (void)onDeleteMember:(id)arg1;
- (void)setShowRemoveMember;
- (void)addMember;
- (void)onPressBackBtn;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePresented:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

