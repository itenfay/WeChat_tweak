//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class PKPayment, UIViewController;

@protocol WCPayApplePayAuthorizationLogicDelegate <NSObject>
- (void)onApplePayAuthorizationDidCancel;
- (void)onApplePayAuthorizationDidFinish:(_Bool)arg1 paymentViewController:(UIViewController *)arg2;
- (void)onApplePayAuthorizationDidAuthPayment:(PKPayment *)arg1;
@end

