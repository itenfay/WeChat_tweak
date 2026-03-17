//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KindaOfflinePayService : NSObject
{
}

- (id)getSignUserId;
- (int)getKindaOfflinePayCsrCertType;
- (_Bool)setKindaOfflinePayCsrCertType:(int)arg1;
- (int)getKindaOfflinePayCertType;
- (_Bool)setKindaOfflinePayCertType:(int)arg1;
- (void)updateCert:(id)arg1 rootCaChains:(id)arg2;
- (id)getCertCAVersion;
- (void)setOfflinePayAckKey:(id)arg1;
- (id)getOfflinePayAckKey;
- (void)setOfflineStateOpen;
- (void)setOfflineStateClose;
- (id)decryptByCftCert:(id)arg1 encstr:(id)arg2;
- (_Bool)importCftCert:(id)arg1 crt:(id)arg2;
- (id)getCftCSR:(id)arg1;
- (void)setOfflinePayHasSuccess;
- (_Bool)getOfflinePayHasSuccess;
- (void)setTokenUpdateInterval:(int)arg1;
- (void)setRegetTokenNum:(int)arg1;
- (int)getTokenUpdateInterval;
- (int)getRegetTokenNum;
- (void)setLastTokenUpdateTs:(long long)arg1;
- (long long)getLastTokenUpdateTs;
- (_Bool)setCftTokenCode:(id)arg1 certid:(id)arg2;
- (int)getRemainCftTokenNum:(id)arg1;
- (id)getCftToken:(id)arg1;
- (void)removeCertid;
- (_Bool)deleteCftCert:(id)arg1;
- (void)cleanCftToken:(id)arg1;
- (id)getCftCertSign:(id)arg1 message:(id)arg2;
- (_Bool)setTokenPin:(id)arg1;
- (void)setLastSelectedCardBindSerial:(id)arg1 bankType:(id)arg2;
- (id)getTokenPin;
- (id)getLastSelectedCardBankType;
- (id)getLastSelectedCardBindSerial;
- (_Bool)isCertExists:(id)arg1;
- (_Bool)setCertid:(id)arg1;
- (id)getCertid;
- (_Bool)setDeviceid:(id)arg1;
- (_Bool)setCodever:(int)arg1;
- (id)getDeviceid;
- (int)getCodever;
- (_Bool)tsmModeEnable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

