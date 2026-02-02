//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ExtDeviceLoginConfirmOKRequest, KidsWatchLoginReportObject, NSString, WCAccountKidsWatchRegisterControlLogic;

@interface WCAccountKidsWatchControlLogic
{
    unsigned int _sessionListMaxCount;
    ExtDeviceLoginConfirmOKRequest *_cachedConfirmOKRequest;
    KidsWatchLoginReportObject *_reportObject;
    WCAccountKidsWatchRegisterControlLogic *_registerLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAccountKidsWatchRegisterControlLogic *registerLogic; // @synthesize registerLogic=_registerLogic;
@property(retain, nonatomic) KidsWatchLoginReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(nonatomic) unsigned int sessionListMaxCount; // @synthesize sessionListMaxCount=_sessionListMaxCount;
@property(retain, nonatomic) ExtDeviceLoginConfirmOKRequest *cachedConfirmOKRequest; // @synthesize cachedConfirmOKRequest=_cachedConfirmOKRequest;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (void)onFinishedRegisterWithSnapShot:(id)arg1;
- (void)nextToKidsLogin:(id)arg1;
- (void)nextToUserLoginWithMethod:(unsigned long long)arg1 syncChat:(_Bool)arg2;
- (void)nextToLoginHelp;
- (void)nextToKidsRegister;
- (void)nextToNormalLogin;
- (void)closeAndExitWithSuccess:(_Bool)arg1;
- (void)closeAndExit;
- (void)onLeaveViewController:(id)arg1;
- (_Bool)checkViewController:(Class)arg1;
- (void)cancelKidsWatchLoginConfirm;
- (void)kidsWatchConfirmLoginOKWithRequest:(id)arg1;
- (void)kidsWatchConfirmLoginOKWithScene:(int)arg1 kidAccountInfo:(id)arg2 syncChat:(_Bool)arg3;
- (void)kidsWatchConfirmLoginOKWithScene:(int)arg1 kidAccountInfo:(id)arg2;
- (void)confirmKidsWatchKidLogin:(id)arg1;
- (void)confirmKidsWatchUserLogin:(unsigned long long)arg1 syncChat:(_Bool)arg2;
- (void)confirmKidsWatchLogin;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

