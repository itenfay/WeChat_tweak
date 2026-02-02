//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLimitedModeVerifyPasswordUtilLogic, MMUIButton, MMUIViewController, NSString, WCFinderLimitProtectCommonHeadView;

@interface WCFinderTeenagerProtectViewController
{
    MMUIViewController *_fromVC;
    WCFinderLimitProtectCommonHeadView *_commonHeadView;
    MMUIButton *_modeChangeBtn;
    MMLimitedModeVerifyPasswordUtilLogic *_verifyPwdLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLimitedModeVerifyPasswordUtilLogic *verifyPwdLogic; // @synthesize verifyPwdLogic=_verifyPwdLogic;
@property(retain, nonatomic) MMUIButton *modeChangeBtn; // @synthesize modeChangeBtn=_modeChangeBtn;
@property(retain, nonatomic) WCFinderLimitProtectCommonHeadView *commonHeadView; // @synthesize commonHeadView=_commonHeadView;
@property(nonatomic) __weak MMUIViewController *fromVC; // @synthesize fromVC=_fromVC;
- (int)commentScene;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (void)onClickModeChangeBtn;
- (void)layoutSubViewsConstraint;
- (void)setUpCommonHeadViewContent;
- (void)viewWillLayoutSubviews;
- (void)setUpUI;
- (void)feedBackToFindPage;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

