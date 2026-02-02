//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAccountBindPhoneForRegCGI, WCPrivacyPolicyControlLogic;
@protocol WCAccountKidsWatchRegisterControlLogicDelegate;

@interface WCAccountKidsWatchRegisterControlLogic
{
    _Bool _isRegistering;
    unsigned int _checkPhoneNumberRetryCount;
    unsigned int _adjustRet;
    WCPrivacyPolicyControlLogic *_privacyPolicyControlLogic;
    CDUnknownBlockType _privacyPolicyCompletionHandler;
    WCAccountBindPhoneForRegCGI *_bindPhoneCGI;
    NSString *_headImageUploadClientId;
}

+ (id)headImageUploadClientId:(id)arg1;
+ (id)headImageUploadTempPath;
+ (id)ISOCode;
+ (id)countryCode;
- (void).cxx_destruct;
@property(nonatomic) _Bool isRegistering; // @synthesize isRegistering=_isRegistering;
@property(retain, nonatomic) NSString *headImageUploadClientId; // @synthesize headImageUploadClientId=_headImageUploadClientId;
@property(nonatomic) unsigned int adjustRet; // @synthesize adjustRet=_adjustRet;
@property(nonatomic) unsigned int checkPhoneNumberRetryCount; // @synthesize checkPhoneNumberRetryCount=_checkPhoneNumberRetryCount;
@property(retain, nonatomic) WCAccountBindPhoneForRegCGI *bindPhoneCGI; // @synthesize bindPhoneCGI=_bindPhoneCGI;
@property(copy, nonatomic) CDUnknownBlockType privacyPolicyCompletionHandler; // @synthesize privacyPolicyCompletionHandler=_privacyPolicyCompletionHandler;
@property(retain, nonatomic) WCPrivacyPolicyControlLogic *privacyPolicyControlLogic; // @synthesize privacyPolicyControlLogic=_privacyPolicyControlLogic;
- (void)OnCdnUpload:(id)arg1;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (_Bool)onErrorHandleLogicAction:(id)arg1;
- (void)onWCPrivacyPolicyControlLogicClickDiagree;
- (void)onWCPrivacyPolicyControlLogicClickAgree;
- (void)finishRegister;
- (void)backToRegisterBegin;
- (void)nextToForceBindAndRegister;
- (void)nextToCheckVerifyCode:(id)arg1;
- (void)nextToGetVerifyCode;
- (void)nextToPrivacyPolicyWithNickName:(id)arg1 rawPhoneNumber:(id)arg2 andHeadImage:(id)arg3;
- (void)closeAndExitWithSuccess:(_Bool)arg1;
- (void)closeAndExit;
- (void)onLeaveViewController:(id)arg1;
- (void)onCheckRegVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetRegVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onCheckRegPhoneNumberStatus:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (id)getRegSessionID;
- (void)backToViewController:(Class)arg1 animated:(_Bool)arg2;
- (_Bool)checkViewController:(Class)arg1;
- (id)phoneNumber;
- (void)registerKidsAccountWithHeadImage:(id)arg1;
- (void)registerKidsAccount;
- (_Bool)uploadHeadImage;
- (void)startRegister;
- (void)checkRegisterVerifyCode:(id)arg1;
- (void)getRegisterVerifyCode;
- (void)checkPhoneNumberStatus;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <WCAccountKidsWatchRegisterControlLogicDelegate> m_logicDelegate; // @dynamic m_logicDelegate;
@property(readonly) Class superclass;

@end

