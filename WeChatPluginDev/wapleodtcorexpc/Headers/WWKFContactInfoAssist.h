//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ContactRelatedGroupLogic, MMTableViewInfo, MMURLHandler, NSString, WCFinderContactFinderAssist;
@protocol ContactInfoAssistDelegate;

@interface WWKFContactInfoAssist
{
    _Bool m_bFirstBecomeFriend;
    MMTableViewInfo *m_tableViewInfo;
    CContact *m_chatContact;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForChatRoomDisplayName;
    NSString *m_cpKeyForSignature;
    NSString *m_cpKeyForOpenIMDesc;
    _Bool m_isNickNameUnsafe;
    _Bool m_isChatRoomDisplayNameUnsafe;
    _Bool m_isSignatureUnsafe;
    _Bool m_isOpenIMDescUnsafe;
    ContactRelatedGroupLogic *m_relatedGroupLogic;
    NSString *m_InviteUserName;
    MMURLHandler *m_urlHandler;
    WCFinderContactFinderAssist *m_finderAssist;
    id <ContactInfoAssistDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactInfoAssistDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onRestoreCPLabel:(id)arg1;
- (void)updateCPState;
- (void)onShareMyFriendDone:(id)arg1;
- (void)onShareToFriend;
- (void)reportOnOpenIMNormalClicked:(id)arg1;
- (void)onOpenIMNormalClicked:(id)arg1;
- (void)initFooterView;
- (void)reloadTableView;
- (id)makeOpenIMInfoSection;
- (void)makeDisclosureIndicatorCell:(id)arg1 CellInfo:(id)arg2;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2 phoneList:(id)arg3 autoresizingMask:(unsigned long long)arg4;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeOpenIMPhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeOpenIMNormalCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeLeftValueCell:(id)arg1 CellInfo:(id)arg2;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 height:(double)arg3 userInfo:(id)arg4;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 userInfo:(id)arg3;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 actionSel:(SEL)arg3;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 actionSel:(SEL)arg3 height:(double)arg4 userInfo:(id)arg5;
- (id)getProfileHeadView;
- (id)getPermissionView;
- (id)getPermissionIconsView;
- (double)getMaxProfileIntroViewTitleWidthWithMaxLabelWidth:(double)arg1;
- (id)getProfileIntroView;
- (void)makeHeadCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeHeadSmallTitleLabel:(id)arg1;
- (id)makeHeadSmallLabel:(id)arg1 cpKey:(id)arg2 inUnsafe:(_Bool)arg3 withPrefixTitle:(id)arg4 maxWidth:(double)arg5;
- (void)onFinderAssistClickFinder;
- (void)finderAssistDidUpdate;
- (void)introCellClick;
- (void)tryCall:(id)arg1;
- (void)tryHandleLink:(id)arg1;
- (void)onKFContactShareToFriend;
- (void)showContactSetting;
- (void)updateNavigationBarRightButton;
- (void)initTableView;
- (id)getTagNameList;
- (void)addOpenIMKefuIntroSection;
- (void)addOpenIMKefuFinderSection:(id)arg1;
- (void)addOpenIMKefuInfoSection:(id)arg1;
- (void)initData;
- (id)navigationBarBackgroundColor;
- (id)currentViewController;
- (id)GetTableView;
- (void)onWWKFContactUpdated:(id)arg1;
- (void)onGetOpenImResourceDone:(id)arg1;
- (void)onHDHeadImageDidDisappear;
- (void)onHDHeadImageWillAppear;
- (id)initWithContact:(id)arg1 andChatContact:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

