//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC11SwiftyMidas30AppleGlobalTransactionObserver : NSObject
{
    MISSING_TYPE *pendingHandleTransactions;
    MISSING_TYPE *paymentReceiver;
    MISSING_TYPE *reprovideReceiver;
    MISSING_TYPE *storefrontReceiver;
    MISSING_TYPE *restoreReceiver;
}

- (void).cxx_destruct;
- (id)init;
- (void)paymentQueueDidChangeStorefront:(id)arg1;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;

@end

