//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SKPaymentQueue, SKPaymentTransaction, SKStorefront;

@protocol SKPaymentQueueDelegate <NSObject>

@optional
- (_Bool)paymentQueueShouldShowPriceConsent:(SKPaymentQueue *)arg1;
- (_Bool)paymentQueue:(SKPaymentQueue *)arg1 shouldContinueTransaction:(SKPaymentTransaction *)arg2 inStorefront:(SKStorefront *)arg3;
@end

