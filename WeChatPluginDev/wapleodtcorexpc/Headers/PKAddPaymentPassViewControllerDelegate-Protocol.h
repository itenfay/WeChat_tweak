//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSError, PKAddPaymentPassViewController, PKPaymentPass;

@protocol PKAddPaymentPassViewControllerDelegate <NSObject>
- (void)addPaymentPassViewController:(PKAddPaymentPassViewController *)arg1 didFinishAddingPaymentPass:(PKPaymentPass *)arg2 error:(NSError *)arg3;
- (void)addPaymentPassViewController:(PKAddPaymentPassViewController *)arg1 generateRequestWithCertificateChain:(NSArray *)arg2 nonce:(NSData *)arg3 nonceSignature:(NSData *)arg4 completionHandler:(void (^)(PKAddPaymentPassRequest *))arg5;
@end

