//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFreezeBalanceMsg, MMITransmitKvData, MMVoidITransmitKvDataCallback, MMVoidITransmitKvDataNoticeItemCallback, NSString;

@protocol MMKWCPayService <NSObject>
- (NSString *)getFiltedTruthName:(NSString *)arg1;
- (void)getCardListAndUsrVerifiedInfoImpl:(MMVoidITransmitKvDataCallback *)arg1;
- (void)setBalanceMasked:(_Bool)arg1;
- (_Bool)isBalanceMasked;
- (void)clearFreezeBalanceMsg;
- (MMFreezeBalanceMsg *)getFreezeBalanceMsg;
- (_Bool)isSetWalletLock;
- (_Bool)isNeedWalletLock;
- (void)getBannerInfoImpl:(int)arg1 callback:(MMVoidITransmitKvDataNoticeItemCallback *)arg2;
- (void)startUseCaseImpl:(NSString *)arg1 data:(MMITransmitKvData *)arg2 quitCallback:(MMVoidITransmitKvDataCallback *)arg3;
@end

