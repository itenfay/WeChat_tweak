//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMVoidCallback, MMVoidStringCallback, NSString, WCPayDeleteDigitalCertCgi, WCPayGenDigitalCertCgi;

@interface KindaCrtService : NSObject
{
    WCPayGenDigitalCertCgi *_m_genDigitalCertCgi;
    MMVoidCallback *_m_successCallback;
    MMVoidStringCallback *_m_failCallback;
    WCPayDeleteDigitalCertCgi *_m_deleteCertCgi;
    MMVoidCallback *_m_deleteSuccessCallback;
    MMVoidStringCallback *_m_deleteFailCallBack;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMVoidStringCallback *m_deleteFailCallBack; // @synthesize m_deleteFailCallBack=_m_deleteFailCallBack;
@property(retain, nonatomic) MMVoidCallback *m_deleteSuccessCallback; // @synthesize m_deleteSuccessCallback=_m_deleteSuccessCallback;
@property(retain, nonatomic) WCPayDeleteDigitalCertCgi *m_deleteCertCgi; // @synthesize m_deleteCertCgi=_m_deleteCertCgi;
@property(retain, nonatomic) MMVoidStringCallback *m_failCallback; // @synthesize m_failCallback=_m_failCallback;
@property(retain, nonatomic) MMVoidCallback *m_successCallback; // @synthesize m_successCallback=_m_successCallback;
@property(retain, nonatomic) WCPayGenDigitalCertCgi *m_genDigitalCertCgi; // @synthesize m_genDigitalCertCgi=_m_genDigitalCertCgi;
- (void)reportSignError:(int)arg1;
- (void)onWCPayDeleteDigitalCertCgiWithResp:(id)arg1;
- (void)onWCPayGenDigitalCertCgiWithResp:(id)arg1;
- (void)sendDeleteCertCgi:(id)arg1;
- (void)delCert;
- (void)startDeleteDigitalCrtImpl:(id)arg1 successCallback:(id)arg2 failCallback:(id)arg3;
- (void)startGenDigitalCrtImpl:(id)arg1 successCallback:(id)arg2 failCallback:(id)arg3;
- (id)sign:(id)arg1 data:(id)arg2;
- (id)getCrtNo;
- (_Bool)isCrtExist:(id)arg1;
- (_Bool)hasCrt;
- (id)updateCurrentDeviceCertNoWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

