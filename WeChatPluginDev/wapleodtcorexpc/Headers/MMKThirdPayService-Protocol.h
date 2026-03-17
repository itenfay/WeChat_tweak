//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMITransmitKvData, MMVoidITransmitKvDataCallback, NSString;

@protocol MMKThirdPayService <NSObject>
- (_Bool)isSupportApplePay;
- (_Bool)isDcepAppInstalled;
- (void)startDcepPayImpl:(NSString *)arg1 requestUrl:(NSString *)arg2 extra:(MMITransmitKvData *)arg3 resultCallback:(MMVoidITransmitKvDataCallback *)arg4;
- (_Bool)isYunShanFuAppInstalled;
- (void)startYunShanFuPayImpl:(NSString *)arg1 resultCallback:(MMVoidITransmitKvDataCallback *)arg2;
@end

