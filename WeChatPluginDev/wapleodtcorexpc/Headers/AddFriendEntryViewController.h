//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CrossfadeAnimationController, FindContactSearchViewCellInfo, InviteFriendLogic, MMTableViewInfo, NSString, NewPersonalQRCodeViewController, UIButton, UILabel, UIView;

@interface AddFriendEntryViewController
{
    FindContactSearchViewCellInfo *m_headerSearchView;
    UIView *m_searchFooterView;
    UIButton *m_myQRCodeBtn;
    UILabel *m_myNameLabel;
    NewPersonalQRCodeViewController *m_myQRCodeCard;
    NSString *m_nsUserNameToFind;
    MMTableViewInfo *m_tableViewInfo;
    CrossfadeAnimationController *m_transitionInstance;
    InviteFriendLogic *m_inviteLogic;
    _Bool _m_bShowInvite;
    unsigned int _searchScene;
    unsigned int _inviteScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int inviteScene; // @synthesize inviteScene=_inviteScene;
@property(nonatomic) unsigned int searchScene; // @synthesize searchScene=_searchScene;
@property(nonatomic) _Bool m_bShowInvite; // @synthesize m_bShowInvite=_m_bShowInvite;
@property(retain, nonatomic) NSString *m_nsUserNameToFind; // @synthesize m_nsUserNameToFind;
- (void)registerYReportSdk;
- (void)onFindContactSearchViewSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)onFindContactSearchViewDidPresentSearch:(id)arg1;
- (void)onMainWindowFrameChanged;
- (void)setupDeepLinkConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)onRadarSearchCreateViewShow;
- (void)onRadarSearchViewShow;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)onCancel:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initLeftButton;
- (void)initView;
- (void)initTitle;
- (void)initTableView;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onSelectCell:(id)arg1;
- (_Bool)shouldInteractivePop;
- (void)dealloc;
- (id)init;
- (void)reloadData;
- (void)onClickSearchCell:(id)arg1;
- (void)makeSearchBarCell:(id)arg1;
- (void)initSearchFooterView;
- (void)layoutSearchFooterView;
- (void)onShowInviteList:(id)arg1;
- (void)onShowMyQrCode;
- (void)pluginsChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

