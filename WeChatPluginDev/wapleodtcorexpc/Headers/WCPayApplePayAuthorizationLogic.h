//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiteAppDynamicModuleCallback, NSDictionary, NSString, UIViewController;
@protocol WCPayApplePayAuthorizationLogicDelegate;

@interface WCPayApplePayAuthorizationLogic : NSObject
{
    id <WCPayApplePayAuthorizationLogicDelegate> _m_delegate;
    NSString *_transactionId;
    LiteAppDynamicModuleCallback *_callBack;
    UIViewController *_vc;
    NSDictionary *_option;
    UIViewController *_paymentViewController;
    CDUnknownBlockType _paymentCompletionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType paymentCompletionHandler; // @synthesize paymentCompletionHandler=_paymentCompletionHandler;
@property(retain, nonatomic) UIViewController *paymentViewController; // @synthesize paymentViewController=_paymentViewController;
@property(retain, nonatomic) NSDictionary *option; // @synthesize option=_option;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) LiteAppDynamicModuleCallback *callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(nonatomic) __weak id <WCPayApplePayAuthorizationLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)finishRequestApplePay:(id)arg1 ret:(unsigned int)arg2;
- (void)startRequestApplePay:(id)arg1 currentVC:(id)arg2;
- (id)paymentNetworksFromArray:(id)arg1;
- (unsigned long long)merchantCapabilityFromArray:(id)arg1;
- (id)paymentSummaryItemsFromPaymentSummaryItemArray:(id)arg1;
- (id)paymentSummaryItemsFromArray:(id)arg1;
- (id)getPaymentRequestFromParameters:(id)arg1;
- (id)getPaymentRequestFromMerchantInfo:(id)arg1;
- (void)finishRequestApplePay:(id)arg1 resultCallback:(id)arg2;
- (void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)paymentTokenDictFromPKPayment:(id)arg1;
- (void)paymentAuthorizationViewControllerDidFinish:(id)arg1;
- (void)startRequestApplePay:(id)arg1 currentVC:(id)arg2 resultCallback:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

