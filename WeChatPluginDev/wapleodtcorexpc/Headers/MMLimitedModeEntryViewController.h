//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLimitedModeConfigListView, MMLimitedModeGuardianEntryView, MMLimitedModeMaskViewView, MMUILabel, NSData, NSString, UIButton, UIImageView, UIScrollView, UIView, WCAgreementCheckBox;

@interface MMLimitedModeEntryViewController
{
    _Bool _isIndependentVerifyFlag;
    _Bool _isNeverUse;
    _Bool _isSelected;
    long long _scene;
    NSString *_ticket;
    UIScrollView *_contentScrollView;
    UIView *_containerView;
    MMUILabel *_titleLabel;
    UIImageView *_iconImageView;
    MMUILabel *_descLabel;
    MMUILabel *_openTipLabel;
    UIButton *_openButton;
    UIButton *_openButtonNotYet;
    UIButton *_closeButton;
    MMLimitedModeConfigListView *_listView;
    MMLimitedModeGuardianEntryView *_guardianEntryView;
    WCAgreementCheckBox *_agreementCheckBox;
    NSData *_pay_respData;
    NSString *_pay_status;
    MMLimitedModeMaskViewView *_maskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLimitedModeMaskViewView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSString *pay_status; // @synthesize pay_status=_pay_status;
@property(retain, nonatomic) NSData *pay_respData; // @synthesize pay_respData=_pay_respData;
@property(retain, nonatomic) WCAgreementCheckBox *agreementCheckBox; // @synthesize agreementCheckBox=_agreementCheckBox;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) MMLimitedModeGuardianEntryView *guardianEntryView; // @synthesize guardianEntryView=_guardianEntryView;
@property(retain, nonatomic) MMLimitedModeConfigListView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *openButtonNotYet; // @synthesize openButtonNotYet=_openButtonNotYet;
@property(retain, nonatomic) UIButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) MMUILabel *openTipLabel; // @synthesize openTipLabel=_openTipLabel;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) _Bool isNeverUse; // @synthesize isNeverUse=_isNeverUse;
@property(nonatomic) _Bool isIndependentVerifyFlag; // @synthesize isIndependentVerifyFlag=_isIndependentVerifyFlag;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)onClickSetLimitedModeGuardian;
- (id)getViewController;
- (long long)preferredStatusBarStyle;
- (void)onClickLimitedModeEntryProtocolAgreeButton;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onChangeLimitedModeFail;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)deleteAllAndReloadContent;
- (void)onLimitedModeChanged;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)doSetIndependent;
- (void)doClearIndependentPwdVerify;
- (void)doModifyIndependentPwdVerify;
- (void)onMoreAction;
- (void)onOpenNotYetButtonClick;
- (void)onBack;
- (void)onCloseButtonClick;
- (void)onOpenButtonClick;
- (_Bool)onMMLimitedModeBizCellLoadingFor:(long long)arg1;
- (id)onMMLimitedModeBizCellDescFor:(long long)arg1;
- (_Bool)onMMLimitedModeBizCellDynamicDescFor:(long long)arg1;
- (void)onIndependentPasswordClearSuccessTicket:(id)arg1;
- (void)call:(id)arg1;
- (void)onSelectedAtBizCell:(long long)arg1;
- (_Bool)checkLimitedModeEntryScenePreEnter;
- (id)getDescText;
- (id)getTitleLabelText;
- (id)navigationBarBackgroundColor;
- (void)updateUI;
- (void)reloadContent;
- (void)updateListViewGradientLayer;
- (void)initBavigationBar;
- (void)initUI;
- (void)handleLimitedModeEntryScenePreEnterDidQuitBlock;
- (void)tryPopPreviousEntryViewControllerInNavBar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)initWithScene:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

