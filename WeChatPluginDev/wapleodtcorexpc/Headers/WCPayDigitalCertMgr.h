//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DigitalCertLocalConfig, NSString;

@interface WCPayDigitalCertMgr
{
    NSString *_m_digitalCertNo;
    DigitalCertLocalConfig *_digitalCertLocalConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DigitalCertLocalConfig *digitalCertLocalConfig; // @synthesize digitalCertLocalConfig=_digitalCertLocalConfig;
@property(retain, nonatomic) NSString *m_digitalCertNo; // @synthesize m_digitalCertNo=_m_digitalCertNo;
- (_Bool)hasCert:(id)arg1;
- (void)delCert:(id)arg1;
- (id)certDecrypt:(id)arg1 cipher:(id)arg2;
- (id)getUserIdData;
- (id)certSign:(id)arg1 message:(id)arg2;
- (_Bool)importCert:(id)arg1 certId:(id)arg2 encryptType:(int)arg3;
- (id)makeCsr:(id)arg1 commonName:(id)arg2 encryptType:(int)arg3 csrType:(int)arg4;
- (void)updateDigitalLocalCertConfig:(id)arg1 cert:(id)arg2 encryptType:(int)arg3;
- (void)loadDigitalCertFromDisk;
- (int)currentType;
- (void)clearDigitalCertLocalConfig;
- (void)delCurrentDigitalCert;
- (void)clearDigitalCert;
- (void)updateWithTenPayResponseDic:(id)arg1;
- (id)updateCurrentDeviceCertNoWithInfo:(id)arg1;
- (id)getDigitalCertNo;
- (int)getError;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

