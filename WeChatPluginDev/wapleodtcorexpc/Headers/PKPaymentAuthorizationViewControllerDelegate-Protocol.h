//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, PKContact, PKPayment, PKPaymentAuthorizationViewController, PKPaymentMethod, PKShippingMethod;

@protocol PKPaymentAuthorizationViewControllerDelegate <NSObject>
- (void)paymentAuthorizationViewControllerDidFinish:(PKPaymentAuthorizationViewController *)arg1;

@optional
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didSelectPaymentMethod:(PKPaymentMethod *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didSelectShippingContact:(PKContact *)arg2 completion:(void (^)(long long, NSArray *, NSArray *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didSelectShippingAddress:(void *)arg2 completion:(void (^)(long long, NSArray *, NSArray *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 completion:(void (^)(long long, NSArray *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didAuthorizePayment:(PKPayment *)arg2 completion:(void (^)(long long))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didSelectPaymentMethod:(PKPaymentMethod *)arg2 handler:(void (^)(PKPaymentRequestPaymentMethodUpdate *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didSelectShippingContact:(PKContact *)arg2 handler:(void (^)(PKPaymentRequestShippingContactUpdate *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 handler:(void (^)(PKPaymentRequestShippingMethodUpdate *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didChangeCouponCode:(NSString *)arg2 handler:(void (^)(PKPaymentRequestCouponCodeUpdate *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didRequestMerchantSessionUpdate:(void (^)(PKPaymentRequestMerchantSessionUpdate *))arg2;
- (void)paymentAuthorizationViewControllerWillAuthorizePayment:(PKPaymentAuthorizationViewController *)arg1;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didAuthorizePayment:(PKPayment *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;
@end

