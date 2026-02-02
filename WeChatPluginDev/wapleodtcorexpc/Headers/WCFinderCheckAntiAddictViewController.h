//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, ForwardMessageLogicController, MMLimitedModeVerifyPasswordUtilLogic, MMUILabel, NSString, UIButton, WCFinderLimitAgreementCommonHeadView, WCFinderLimitCheckPanelView;

@interface WCFinderCheckAntiAddictViewController
{
    ForwardMessageLogicController *m_forwardMsgLogic;
    _Bool _controlExitState;
    WCFinderLimitAgreementCommonHeadView *_commonHeadView;
    UIButton *_exitButton;
    MMUILabel *_checkTipsLabel;
    WCFinderLimitCheckPanelView *_checkPanelView;
    CDUnknownBlockType _didAppearBlock;
    CDUnknownBlockType _verifySucBlock;
    CDUnknownBlockType _exitBlock;
    long long _antiAddictStyle;
    long long _antiAddictScene;
    unsigned long long _enterTime;
    MMLimitedModeVerifyPasswordUtilLogic *_verifyPwdLogic;
    CMessageWrap *_authorizeRequestMessageWrap;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool controlExitState; // @synthesize controlExitState=_controlExitState;
@property(retain, nonatomic) CMessageWrap *authorizeRequestMessageWrap; // @synthesize authorizeRequestMessageWrap=_authorizeRequestMessageWrap;
@property(retain, nonatomic) MMLimitedModeVerifyPasswordUtilLogic *verifyPwdLogic; // @synthesize verifyPwdLogic=_verifyPwdLogic;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) long long antiAddictScene; // @synthesize antiAddictScene=_antiAddictScene;
@property(nonatomic) long long antiAddictStyle; // @synthesize antiAddictStyle=_antiAddictStyle;
@property(copy, nonatomic) CDUnknownBlockType exitBlock; // @synthesize exitBlock=_exitBlock;
@property(copy, nonatomic) CDUnknownBlockType verifySucBlock; // @synthesize verifySucBlock=_verifySucBlock;
@property(copy, nonatomic) CDUnknownBlockType didAppearBlock; // @synthesize didAppearBlock=_didAppearBlock;
@property(retain, nonatomic) WCFinderLimitCheckPanelView *checkPanelView; // @synthesize checkPanelView=_checkPanelView;
@property(retain, nonatomic) MMUILabel *checkTipsLabel; // @synthesize checkTipsLabel=_checkTipsLabel;
@property(retain, nonatomic) UIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) WCFinderLimitAgreementCommonHeadView *commonHeadView; // @synthesize commonHeadView=_commonHeadView;
- (void)registerYReportSdk;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (void)doExitAction;
- (void)onClickExitFinderAction;
- (void)onClickCheckGuardianBtn;
- (void)onClickCheckPwdBtn;
- (id)createCellWithTitle:(id)arg1 cellWidth:(double)arg2 cellHeight:(double)arg3;
- (void)setUpCheckPanelView;
- (void)viewWillLayoutSubviews;
- (void)layoutSubViewsConstraint;
- (void)setUpCommonHeadViewContent;
- (void)setUpUI;
- (_Bool)shouldAutorotate;
- (_Bool)useTransparentNavibar;
- (int)feedViewControllerScene;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (CDUnknownBlockType)exit;
- (CDUnknownBlockType)verifySuc;
- (CDUnknownBlockType)didAppear;
- (id)initWithStyle:(long long)arg1 scene:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

