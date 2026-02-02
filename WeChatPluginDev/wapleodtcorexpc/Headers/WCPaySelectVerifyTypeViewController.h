//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetRealnameWordingRsp, InternalTask, NSString, UIButton, UIImageView, UILabel, UIView, WCPayJumpRemindControlLogic, WCPayJumpRemindInfo, WCPaySelectVerifyTypeViewV2;
@protocol WCPaySelectVerifyTypeViewControllerDelegate;

@interface WCPaySelectVerifyTypeViewController
{
    id <WCPaySelectVerifyTypeViewControllerDelegate> m_delegate;
    NSString *bindCardTitle;
    NSString *bindCardSubTitle;
    NSString *bindIdTitle;
    NSString *bindIdSubTitle;
    NSString *extralWording;
    _Bool questionAnswerSwitch;
    NSString *questionAnswerUrl;
    _Bool isShowBindCard;
    _Bool isShowRealnameVerify;
    _Bool isShowBindCardVerify;
    NSString *bindCardVerifyTitle;
    NSString *bindCardVerifySubTitle;
    _Bool isNeedShowBindCardVerifyAlertView;
    NSString *bindCardVeifyAlertViewRightButtonText;
    NSString *bindCardVeifyAlertViewContent;
    GetRealnameWordingRsp *_wording;
    InternalTask *_m_internalTask;
    WCPayJumpRemindInfo *_jumpRemindInfo;
    WCPayJumpRemindControlLogic *_jumpRemindControlLogic;
    UIImageView *_m_iconForSafeTips;
    UIButton *_m_buttonForSafeTips;
    UIImageView *_m_arrowForSafeTips;
    UIView *_m_safeTipsBase;
    UILabel *_m_titleLabel;
    WCPaySelectVerifyTypeViewV2 *_layoutV2;
}

- (void).cxx_destruct;
@property(retain) WCPaySelectVerifyTypeViewV2 *layoutV2; // @synthesize layoutV2=_layoutV2;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
@property(retain, nonatomic) UIView *m_safeTipsBase; // @synthesize m_safeTipsBase=_m_safeTipsBase;
@property(retain, nonatomic) UIImageView *m_arrowForSafeTips; // @synthesize m_arrowForSafeTips=_m_arrowForSafeTips;
@property(retain, nonatomic) UIButton *m_buttonForSafeTips; // @synthesize m_buttonForSafeTips=_m_buttonForSafeTips;
@property(retain, nonatomic) UIImageView *m_iconForSafeTips; // @synthesize m_iconForSafeTips=_m_iconForSafeTips;
@property(retain, nonatomic) WCPayJumpRemindControlLogic *jumpRemindControlLogic; // @synthesize jumpRemindControlLogic=_jumpRemindControlLogic;
@property(retain, nonatomic) WCPayJumpRemindInfo *jumpRemindInfo; // @synthesize jumpRemindInfo=_jumpRemindInfo;
@property(retain, nonatomic) InternalTask *m_internalTask; // @synthesize m_internalTask=_m_internalTask;
@property(retain, nonatomic) GetRealnameWordingRsp *wording; // @synthesize wording=_wording;
- (id)onWCPaySelectVerifyTypeViewV2TableViewInfo;
- (void)onWCPaySelectVerifyTypeViewV2ClickRealName;
- (void)onWCPaySelectVerifyTypeViewV2ClickSafeTips;
- (id)navigationBarBackgroundColor;
- (void)clickSafeTips;
- (void)adjustBottomTips;
- (void)updateArrowForSafeTips;
- (void)updateIconForSafeTips;
- (void)onWCPayPrivacyViewControllerClickAgree:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onRightBarButtonClick;
- (void)populateData:(id)arg1;
- (void)getWording;
- (void)realSelectBindCardVerify;
- (void)realSelectRealnameVerify:(id)arg1;
- (void)onContinueSelectRealnameVerify;
- (void)selectRealnameVerify;
- (void)realSelectBindCard;
- (id)createDotLabel;
- (id)headerView;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)OnBack;
- (void)reloadTableView;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

