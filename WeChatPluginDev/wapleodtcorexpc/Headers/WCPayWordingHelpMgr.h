//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCPayWordingHelpMgr
{
    unsigned int _lastUpdateTime;
    NSMutableDictionary *_serverDefaultWordingDict;
    NSMutableDictionary *_validityDynamicWordingDict;
    NSMutableDictionary *_phoneNumberDynamicWordingDict;
    NSMutableDictionary *_cvvCodeDynamicWordingDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cvvCodeDynamicWordingDict; // @synthesize cvvCodeDynamicWordingDict=_cvvCodeDynamicWordingDict;
@property(retain, nonatomic) NSMutableDictionary *phoneNumberDynamicWordingDict; // @synthesize phoneNumberDynamicWordingDict=_phoneNumberDynamicWordingDict;
@property(retain, nonatomic) NSMutableDictionary *validityDynamicWordingDict; // @synthesize validityDynamicWordingDict=_validityDynamicWordingDict;
@property(retain, nonatomic) NSMutableDictionary *serverDefaultWordingDict; // @synthesize serverDefaultWordingDict=_serverDefaultWordingDict;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
- (id)getCVVCodeWoring:(id)arg1;
- (_Bool)isShowCVVCode:(id)arg1;
- (id)getCardNumberInputSafetyInstructionDescWording;
- (_Bool)isShowCardNumberInputSafetyTip;
- (id)getCardNumberInputTipWording;
- (_Bool)isShowCardNumberInputTip;
- (id)getSmsVerifyCodeWording;
- (id)getSmsVerifyCodeTipWording;
- (_Bool)isShowSmsVerifyCode;
- (id)getPhoneNumberWording:(id)arg1;
- (id)getPhoneNumberWordingWithBankCardInfo:(id)arg1;
- (_Bool)isShowPhoneNumber:(id)arg1;
- (id)getValidityWording:(id)arg1;
- (_Bool)isShowValidity:(id)arg1;
- (id)getPersonalInfoWording;
- (_Bool)isShowPersonalInfo;
- (_Bool)writeToFile:(id)arg1 data:(id)arg2;
- (void)saveWCPayWording:(id)arg1;
- (_Bool)loadAndUpdateWCPayWording;
- (void)onPackageListUpdated:(id)arg1;
- (void)tryDownloadWCPayWording;
- (void)receiveWordingContent:(id)arg1;
- (void)onLanguageChange;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

