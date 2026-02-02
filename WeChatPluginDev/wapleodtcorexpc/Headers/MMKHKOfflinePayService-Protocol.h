//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidBoolCallback, NSData, NSString;

@protocol MMKHKOfflinePayService <NSObject>
- (void)openHKFacingReceiveView;
- (void)openScanQrCodeView;
- (void)openHalfPageWebViewImpl:(NSString *)arg1 callback:(MMVoidBoolCallback *)arg2;
- (NSString *)sha256Hex:(NSData *)arg1;
- (NSData *)decryptByAes:(NSData *)arg1 key:(NSData *)arg2 iv:(NSData *)arg3;
- (NSData *)encryptByAes:(NSData *)arg1 key:(NSData *)arg2 iv:(NSData *)arg3;
- (NSString *)genAlgoToken:(NSString *)arg1 type:(int)arg2 uid:(int)arg3 seed:(NSData *)arg4 seedTime:(long long)arg5 currentTime:(long long)arg6 baseStep:(long long)arg7 timeStepSize:(int)arg8;
- (NSString *)decryptByCftCert:(NSString *)arg1 encstr:(NSString *)arg2;
- (_Bool)importCftCert:(NSString *)arg1 crt:(NSString *)arg2;
- (NSString *)getCftCSR:(NSString *)arg1;
- (_Bool)deleteCftCert:(NSString *)arg1;
- (NSString *)getCftCertSign:(NSString *)arg1 message:(NSString *)arg2;
- (NSString *)getOfflinePayAckKey;
- (void)setOfflinePayAckKey:(NSString *)arg1;
- (void)setLastSelectedCVItemId:(NSString *)arg1;
- (NSString *)getLastSelectedCVItemId;
- (void)setLastSelectedCardBindSerial:(NSString *)arg1;
- (NSString *)getLastSelectedCardBindSerial;
- (_Bool)isCertExists:(NSString *)arg1;
- (void)removeCertid;
- (_Bool)setCertid:(NSString *)arg1;
- (NSString *)getCertid;
- (_Bool)setDeviceid:(NSString *)arg1;
- (NSString *)getDeviceid;
@end

