//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAccountRegisterControlLogic
{
    unsigned int m_idc_redirect_count;
    unsigned int m_mmtls_set_count;
    unsigned long long m_ui64BeginTime;
    unsigned int m_uiABtest;
    unsigned int m_uiCCType;
}

- (void)resume;
- (void)pause;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleNewRegResponseOK:(id)arg1;
- (void)handleNewRegResponse:(id)arg1;
- (void)onGraphicVerifyChangeImage;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyWithVerifyCode:(id)arg1;
- (_Bool)regAccount;
- (id)genNewRegRequest;
- (void)startLogic;
- (void)dealloc;
- (void)reportABTestStatus:(unsigned int)arg1;
- (void)setABTest:(unsigned int)arg1 CCType:(unsigned int)arg2;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

