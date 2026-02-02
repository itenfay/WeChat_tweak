//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMHDHeadImageView, MMHeadImageView, MMLoadingView, NSString, UILabel, UIView;
@protocol ContactInfoAssistDelegate;

@interface CBaseContactInfoAssist
{
    UIView *m_headerView;
    UIView *m_footerView;
    MMHeadImageView *m_headView;
    MMHDHeadImageView *m_HDHeadView;
    MMLoadingView *m_loadingView;
    CContact *m_contact;
    UILabel *m_displayNameLabel;
    UILabel *m_userNameLabel;
    id <ContactInfoAssistDelegate> m_delegate;
    unsigned int _m_uiFromScene;
    NSString *_reportSessionId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
@property(retain, nonatomic) NSString *reportSessionId; // @synthesize reportSessionId=_reportSessionId;
@property(retain, nonatomic) MMHeadImageView *m_headView; // @synthesize m_headView;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) __weak id <ContactInfoAssistDelegate> m_delegate; // @synthesize m_delegate;
- (long long)transferFromSceneToSourceScene;
- (double)getTableViewTopInset;
- (_Bool)isChatRoom;
- (_Bool)isInteractivePopEnabled;
- (_Bool)isSeachActive;
- (void)reportContactInfoViewEnter;
- (_Bool)shouldFobidPopWhenDeleteContact;
- (_Bool)shouldForceHideNavigationBarSepLine;
- (id)navigationBarItemColor;
- (id)navigationBarBackgroundColor;
- (void)baseViewWillBePoped;
- (void)onContactUpdated;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)makeContactIntroCell:(id)arg1 text:(id)arg2;
- (double)getSignatureWidth;
- (void)dealloc;
- (id)GetMainScrollView;
- (id)GetTableView;
- (void)stopLoading;
- (void)contactAddContactOk:(id)arg1;
- (void)handleAddedContact;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)onAddToContacts;
- (void)modifyVerifyContactWrap:(id)arg1;
- (void)doAddContact;
- (_Bool)isInMyContactList;
- (void)reloadView;
- (void)reloadNavigationBarItem;
- (void)reloadTableView;
- (void)initNickNameLabel;
- (void)initUserNameLabel;
- (id)getUserNameCol;
- (void)updateInstallStateAndReloadTableView;
- (void)onShareMyFriendDone:(id)arg1;
- (void)opShareMyFriend;
- (void)profileDestory;
- (void)updateFooterView;
- (void)updateNickNameLabel;
- (void)viewDidAppear;
- (void)viewDidLayoutSubviews;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

