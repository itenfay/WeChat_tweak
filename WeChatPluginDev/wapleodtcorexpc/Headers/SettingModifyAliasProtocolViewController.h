//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAcceptAgreementCommonHeadView, MMWebViewController, NSString, SettingModifyAliasLogic, UIButton;
@protocol SettingModifyAliasViewControllerDelegate;

@interface SettingModifyAliasProtocolViewController
{
    UIButton *m_modifyAliasButton;
    SettingModifyAliasLogic *m_modifyAliasCheckAccountLogic;
    MMWebViewController *m_webViewController;
    NSString *m_checkCanSetAliasTicket;
    NSString *m_setAliasHumanFaceTicket;
    NSString *m_ssesionID;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    id <SettingModifyAliasViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SettingModifyAliasViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)copyText:(id)arg1;
- (void)onHeadViewTitleLabelLongPress:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onSettingModifyAliasSuccess;
- (void)pushResultViewControllerWithTicket;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)onCheckCanSetAlias:(id)arg1 verifyType:(unsigned int)arg2 verifyUrl:(id)arg3 ticket:(id)arg4 withResult:(unsigned int)arg5 errorMsg:(id)arg6;
- (void)reportSettingAccountModifyAlias:(id)arg1 withResult:(unsigned int)arg2;
- (void)onBackButtonClicked:(id)arg1;
- (void)OnSettingAccountModifyAlias;
- (void)layoutModifyAliasButton;
- (void)layoutCommonHeadView;
- (void)layoutView;
- (void)viewWillLayoutSubviews;
- (void)initData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

