//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol MMKOfflinePayService <NSObject>
- (NSString *)getSignUserId;
- (int)getKindaOfflinePayCsrCertType;
- (_Bool)setKindaOfflinePayCsrCertType:(int)arg1;
- (int)getKindaOfflinePayCertType;
- (_Bool)setKindaOfflinePayCertType:(int)arg1;
- (void)updateCert:(NSString *)arg1 rootCaChains:(NSArray *)arg2;
- (NSString *)getCertCAVersion;
- (NSString *)getOfflinePayAckKey;
- (void)setOfflinePayAckKey:(NSString *)arg1;
- (void)setOfflineStateClose;
- (void)setOfflineStateOpen;
- (NSString *)decryptByCftCert:(NSString *)arg1 encstr:(NSString *)arg2;
- (_Bool)importCftCert:(NSString *)arg1 crt:(NSString *)arg2;
- (NSString *)getCftCSR:(NSString *)arg1;
- (_Bool)getOfflinePayHasSuccess;
- (void)setOfflinePayHasSuccess;
- (int)getRegetTokenNum;
- (void)setRegetTokenNum:(int)arg1;
- (int)getTokenUpdateInterval;
- (void)setTokenUpdateInterval:(int)arg1;
- (long long)getLastTokenUpdateTs;
- (void)setLastTokenUpdateTs:(long long)arg1;
- (_Bool)setCftTokenCode:(NSString *)arg1 certid:(NSString *)arg2;
- (_Bool)deleteCftCert:(NSString *)arg1;
- (void)cleanCftToken:(NSString *)arg1;
- (NSString *)getCftCertSign:(NSString *)arg1 message:(NSString *)arg2;
- (_Bool)setTokenPin:(NSString *)arg1;
- (NSString *)getTokenPin;
- (int)getRemainCftTokenNum:(NSString *)arg1;
- (NSString *)getCftToken:(NSString *)arg1;
- (void)setLastSelectedCardBindSerial:(NSString *)arg1 bankType:(NSString *)arg2;
- (NSString *)getLastSelectedCardBankType;
- (NSString *)getLastSelectedCardBindSerial;
- (_Bool)isCertExists:(NSString *)arg1;
- (void)removeCertid;
- (_Bool)setCertid:(NSString *)arg1;
- (NSString *)getCertid;
- (_Bool)setCodever:(int)arg1;
- (int)getCodever;
- (_Bool)setDeviceid:(NSString *)arg1;
- (NSString *)getDeviceid;
@end

