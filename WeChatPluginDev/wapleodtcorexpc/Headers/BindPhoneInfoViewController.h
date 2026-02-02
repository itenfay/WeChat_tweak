//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString, UIButton, UIImageView, WCAccountBindPhoneControlLogic;
@protocol VerifyPhoneDelegate;

@interface BindPhoneInfoViewController
{
    UIImageView *m_bindImageView;
    UIButton *m_unChangeButton;
    UIButton *m_inviteFriendButton;
    id <VerifyPhoneDelegate> m_delegate;
    MMTableViewInfo *m_tableViewInfo;
    unsigned int m_uiFromScene;
    NSString *m_nsOldPhone;
    WCAccountBindPhoneControlLogic *m_bindLogic;
    _Bool _showFullPhoneNum;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showFullPhoneNum; // @synthesize showFullPhoneNum=_showFullPhoneNum;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene;
@property(nonatomic) __weak id <VerifyPhoneDelegate> m_delegate; // @synthesize m_delegate;
- (void)dealloc;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateView;
- (void)showBindedView;
- (void)updateInviteFriendBtnTitle;
- (void)OnOperate;
- (void)showNoBindView;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onPrivacy;
- (void)onUnBind;
- (void)onChange;
- (void)onBind;
- (void)startSyncAddressBook;
- (void)onUnBindAccount;
- (void)unBoundSucess;
- (void)showInviteFriendView;
- (id)getBoundPhone;
- (_Bool)hasBound;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

