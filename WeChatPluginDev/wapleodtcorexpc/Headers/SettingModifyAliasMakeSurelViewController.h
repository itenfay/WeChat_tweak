//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAcceptAgreementCommonHeadView, MMUIButton, MMUILabel, MMUIView, NSString, SettingModifyAliasLogic, UIButton, WCAgreementCheckBox;
@protocol SettingModifyAliasViewControllerDelegate;

@interface SettingModifyAliasMakeSurelViewController
{
    UIButton *m_modifyAliasButton;
    WCAgreementCheckBox *m_agreementCheckBox;
    SettingModifyAliasLogic *m_settingModifyAliasLogic;
    MMUIButton *m_backgroundButton;
    MMUIView *m_contentView;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMUILabel *m_titleView;
    NSString *m_nsAliasName;
    MMUIButton *_closeButton;
    NSString *_m_checkCanSetAliasTicket;
    NSString *_m_setAliasPwdTicket;
    NSString *_m_setAliasHumanFaceTicket;
    NSString *_m_ssesionID;
    id <SettingModifyAliasViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SettingModifyAliasViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *m_ssesionID; // @synthesize m_ssesionID=_m_ssesionID;
@property(retain, nonatomic) NSString *m_setAliasHumanFaceTicket; // @synthesize m_setAliasHumanFaceTicket=_m_setAliasHumanFaceTicket;
@property(retain, nonatomic) NSString *m_setAliasPwdTicket; // @synthesize m_setAliasPwdTicket=_m_setAliasPwdTicket;
@property(retain, nonatomic) NSString *m_checkCanSetAliasTicket; // @synthesize m_checkCanSetAliasTicket=_m_checkCanSetAliasTicket;
- (void)setCloseButton:(id)arg1;
@property(retain, nonatomic) NSString *m_nsAliasName; // @synthesize m_nsAliasName;
- (id)navigationBarBackgroundColor;
- (void)OnModifyAliasWithResult:(unsigned int)arg1 errorMsg:(id)arg2;
- (void)onClickClose:(id)arg1;
- (void)OnSetAliasOK;
- (void)OnSettingAccountModifyAlias;
- (void)layoutModifyAliasButton;
- (void)layoutAgreementCheckBox;
- (void)layoutCommonHeadView;
- (void)layoutTitleView;
- (void)layoutContentView;
- (void)layoutView;
- (id)closeButton;
- (long long)halfViewControllerHeight;
- (void)initData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

