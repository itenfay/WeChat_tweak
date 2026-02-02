//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMITransmitKvData, MMKGenDigitalCrtReq, MMVoidCallback, MMVoidStringCallback, NSData, NSString;

@protocol MMKCrtService <NSObject>
- (NSString *)updateCurrentDeviceCertNoWithInfo:(MMITransmitKvData *)arg1;
- (void)startDeleteDigitalCrtImpl:(NSString *)arg1 successCallback:(MMVoidCallback *)arg2 failCallback:(MMVoidStringCallback *)arg3;
- (_Bool)isCrtExist:(NSString *)arg1;
- (void)delCert;
- (void)startGenDigitalCrtImpl:(MMKGenDigitalCrtReq *)arg1 successCallback:(MMVoidCallback *)arg2 failCallback:(MMVoidStringCallback *)arg3;
- (NSString *)sign:(NSString *)arg1 data:(NSData *)arg2;
- (NSString *)getCrtNo;
- (_Bool)hasCrt;
@end

