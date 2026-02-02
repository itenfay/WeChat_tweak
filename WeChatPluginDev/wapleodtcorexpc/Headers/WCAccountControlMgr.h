//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAccountAutoLoginControlLogic, WCAccountCloseMainFrameLogic, WCAccountSignHelper, WCAccountSwitchLogic;

@interface WCAccountControlMgr
{
    NSString *m_reportClientID;
    WCAccountAutoLoginControlLogic *m_autoLoginLogic;
    _Bool m_isAutoLoginRequiring;
    WCAccountSwitchLogic *m_switchLogic;
    WCAccountCloseMainFrameLogic *m_closeMainFrameLogic;
    CDUnknownBlockType m_quitCompleteBlock;
    _Bool _m_isInMainFrame;
    _Bool _m_isLogin;
    _Bool _m_isAutoLoginMode;
    _Bool _m_isMainHostDisaster;
    _Bool _m_needAuthAgainForUpdateInfo;
    WCAccountSignHelper *m_signHelper;
    unsigned long long _m_lastmakesuretime;
    unsigned long long _m_lastAuthFinishTime;
}

- (void).cxx_destruct;
@property _Bool m_needAuthAgainForUpdateInfo; // @synthesize m_needAuthAgainForUpdateInfo=_m_needAuthAgainForUpdateInfo;
@property(nonatomic) unsigned long long m_lastAuthFinishTime; // @synthesize m_lastAuthFinishTime=_m_lastAuthFinishTime;
@property unsigned long long m_lastmakesuretime; // @synthesize m_lastmakesuretime=_m_lastmakesuretime;
@property _Bool m_isMainHostDisaster; // @synthesize m_isMainHostDisaster=_m_isMainHostDisaster;
@property _Bool m_isAutoLoginMode; // @synthesize m_isAutoLoginMode=_m_isAutoLoginMode;
@property _Bool m_isLogin; // @synthesize m_isLogin=_m_isLogin;
@property _Bool m_isInMainFrame; // @synthesize m_isInMainFrame=_m_isInMainFrame;
- (void)onAxTicketExpiredWithNeedRetryAuth;
- (void)onAuthOK;
- (void)onManulLoginOK;
- (void)onPreQuit;
- (void)onWCAccountAutoLoginControlLogicStop:(unsigned long long)arg1;
- (void)startCloseMainFrame:(unsigned int)arg1;
- (void)onWCAccountCloseMainFrameLogicDone;
- (void)doTestEcdsaSignCgi;
- (void)tryTestEcdsaSign;
- (id)ecdsaSignWithData:(id)arg1;
- (id)pubKeyInfoWithoutUpdate;
- (id)pubKeyInfoAfterUpdateForCgiName:(id)arg1;
@property(retain, nonatomic) WCAccountSignHelper *signHelper; // @synthesize signHelper=m_signHelper;
- (void)onCloseMainFrameWithoutStop;
- (void)makeAutoAuth;
- (void)makeAutoAuthForUpdateInfo;
- (void)deleteAccountSuccess;
- (void)setSwitchLogin:(id)arg1;
- (void)logoutCurrentAccount:(CDUnknownBlockType)arg1;
- (void)quitLogin;
- (void)onNotifyDisasterNode:(id)arg1;
- (void)onSessionTimeout;
- (_Bool)makeSureAuthWithHost:(id)arg1;
- (void)resetLastAuthTime;
- (_Bool)isLogin;
- (void)startAutoAuth;
- (_Bool)isLogoutSwitch;
- (void)reportSwitchAccountWithOpCode:(unsigned int)arg1 userName:(id)arg2;
- (id)getCurrentLoginInfo;
- (void)deleteLoginInfo:(id)arg1;
- (void)updateLastLoginInfo:(id)arg1 fromSwitch:(_Bool)arg2;
- (void)updateLastLoginInfo:(id)arg1;
- (id)getLoginUserInfos;
- (void)startManualAuth;
- (void)resetReportClientID;
- (id)getReportClientID;
- (_Bool)isInSwitchView;
- (void)inheritFromAccountControlMgrForGuest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

