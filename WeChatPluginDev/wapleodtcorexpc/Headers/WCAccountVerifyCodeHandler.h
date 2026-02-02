//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAccountBaseControlLogic, WCAccountBindPhoneForRegCGI, WCAccountControlData;
@protocol WCAccountVerifyCodeHandlerDelegate;

@interface WCAccountVerifyCodeHandler : NSObject
{
    WCAccountBaseControlLogic<WCAccountVerifyCodeHandlerDelegate> *_delegate;
    WCAccountControlData *m_data;
    WCAccountBindPhoneForRegCGI *_modelLogic;
    _Bool _bNeedSetPwd;
    unsigned int m_uiCheckVerifyUpCount;
    unsigned int _uiTryCount;
    NSString *_phoneNumberWithCC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *phoneNumberWithCC; // @synthesize phoneNumberWithCC=_phoneNumberWithCC;
- (void)onCheckLoginVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetLoginVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onCheckLoginPhoneNumberStatus:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (id)getRegSessionID;
- (void)startVerifyUpAndLoading;
- (void)cancelAllEvent;
- (_Bool)getVerifyCodeReady;
- (void)getVerifyCode;
- (_Bool)getVoiceVerifyCodeReady:(id)arg1;
- (void)getVoiceVerifyCode:(id)arg1;
- (_Bool)checkPhoneNumberStatus:(unsigned int)arg1;
- (_Bool)checkVerifyCode:(id)arg1;
- (void)startCheckVerifyCode:(id)arg1;
- (void)startCheckNumberStatusAndLoading;
- (id)initWithData:(id)arg1 Delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

