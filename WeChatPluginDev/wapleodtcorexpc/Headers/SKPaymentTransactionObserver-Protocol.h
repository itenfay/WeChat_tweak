//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, SKPayment, SKPaymentQueue, SKProduct;

@protocol SKPaymentTransactionObserver <NSObject>
- (void)paymentQueue:(SKPaymentQueue *)arg1 updatedTransactions:(NSArray *)arg2;

@optional
- (void)paymentQueue:(SKPaymentQueue *)arg1 didRevokeEntitlementsForProductIdentifiers:(NSArray *)arg2;
- (void)paymentQueueDidChangeStorefront:(SKPaymentQueue *)arg1;
- (_Bool)paymentQueue:(SKPaymentQueue *)arg1 shouldAddStorePayment:(SKPayment *)arg2 forProduct:(SKProduct *)arg3;
- (void)paymentQueue:(SKPaymentQueue *)arg1 updatedDownloads:(NSArray *)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(SKPaymentQueue *)arg1;
- (void)paymentQueue:(SKPaymentQueue *)arg1 restoreCompletedTransactionsFailedWithError:(NSError *)arg2;
- (void)paymentQueue:(SKPaymentQueue *)arg1 removedTransactions:(NSArray *)arg2;
@end

