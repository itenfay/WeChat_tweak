//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPrivacyPolicyControlLogic;

@interface WCAccountAffiliatedAcctRegControlLogic
{
    _Bool _withoutBeginVC;
    int _affRegScene;
    CDUnknownBlockType _onRegSuccessBlock;
    WCPrivacyPolicyControlLogic *_privacyPolicyLogic;
    NSString *_clientSessionId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool withoutBeginVC; // @synthesize withoutBeginVC=_withoutBeginVC;
@property(nonatomic) int affRegScene; // @synthesize affRegScene=_affRegScene;
@property(retain, nonatomic) NSString *clientSessionId; // @synthesize clientSessionId=_clientSessionId;
@property(retain, nonatomic) WCPrivacyPolicyControlLogic *privacyPolicyLogic; // @synthesize privacyPolicyLogic=_privacyPolicyLogic;
@property(copy, nonatomic) CDUnknownBlockType onRegSuccessBlock; // @synthesize onRegSuccessBlock=_onRegSuccessBlock;
- (void)webViewDidReturn:(id)arg1;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)onWCPrivacyPolicyControlLogicClickDiagree;
- (void)onWCPrivacyPolicyControlLogicClickAgree;
- (_Bool)shouldKeepOldLogic;
- (void)onLeaveViewController:(id)arg1;
- (void)onShowHelpPage;
- (void)end;
- (void)nextToRegister;
- (void)nextToSetPassword;
- (void)nextToH5;
- (void)nextToRegUseNewPhone;
- (void)onErrorHandleLogicDone;
- (void)reportWithPage:(unsigned int)arg1 action:(unsigned int)arg2 module:(unsigned int)arg3;
- (void)stopLogic;
- (_Bool)uploadHeadImgIfNeeded;
- (void)regAffiliatedAcctWithHeadImageTaskInfo:(id)arg1 headImgData:(id)arg2;
- (void)showPrivacyPolicy;
- (void)precheckAffiliatedAcct;
- (void)openWebViewWithUrl:(id)arg1 presentModal:(_Bool)arg2;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

