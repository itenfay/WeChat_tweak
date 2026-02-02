//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JailBreakHelper, NSMutableArray, NSMutableSet, NSString, iAPCache;

@interface iAPMgr
{
    NSMutableSet *_setSKProductsRequests;
    NSMutableArray *_arrRestoredTransactions;
    NSMutableArray *_arrRestoredVerifiedTransaction;
    _Bool _bIsRestoring;
    unsigned int _status;
    iAPCache *_iAPCache;
    JailBreakHelper *m_jailBreakHelper;
}

+ (unsigned int)getIdKeyVerifyPurchaseFailed;
+ (unsigned int)getIdKeyIAPPurchaseFailed;
+ (unsigned int)getIdKeyPreparePurchaseFailed;
+ (unsigned int)getIdKeyIdIAP;
+ (unsigned int)getBizTypeOfProductID:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) JailBreakHelper *m_jailBreakHelper; // @synthesize m_jailBreakHelper;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (long long)covertErrcode:(unsigned int)arg1;
- (void)onPreparePurchase:(id)arg1;
- (void)onVerifyPurchase:(id)arg1;
- (void)onVerifyPurchaseForRestore:(id)arg1 request:(id)arg2;
- (void)restoreNextTransaction:(id)arg1;
- (void)onVerifyPurchaseForPurchase:(id)arg1 request:(id)arg2 IapRet:(long long)arg3;
- (void)finishTransactionForTransactionID:(id)arg1;
- (_Bool)FinishTransaction:(id)arg1;
- (long long)RestoreCompletedTransactions;
- (long long)RestoreCompletedTransactionsNeedCheckJailBreak:(_Bool)arg1;
- (long long)Purchase:(id)arg1 extInfo:(id)arg2;
- (long long)Purchase:(id)arg1 extInfo:(id)arg2 NeedCheckJailBreak:(_Bool)arg3;
- (_Bool)cannotPurchaseDuetoJailbreakPlugin:(_Bool)arg1;
- (_Bool)GetProduct:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)cancelPurchase:(id)arg1 verifyType:(int)arg2;
- (void)verifyTransationForUnVerifyTransactionAll:(unsigned int)arg1;
- (void)verifyTransationForUnVerifyTransaction:(id)arg1 verifyType:(int)arg2 uiscene:(unsigned int)arg3;
- (void)verifyTransation:(id)arg1 verifyType:(int)arg2;
- (_Bool)preparePurchase:(id)arg1 extInfo:(id)arg2;
- (_Bool)isHandleByIAPMgr:(id)arg1;
- (_Bool)isNonConsumable:(id)arg1;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)dealloc;
- (void)onServiceInit;
- (void)writeCache;
- (id)pathForCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

