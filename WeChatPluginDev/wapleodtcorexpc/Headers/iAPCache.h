//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface iAPCache : NSObject
{
    NSMutableDictionary *dicProductToPrepare;
    NSMutableDictionary *_dicBillNos;
    NSMutableDictionary *_dicProductPrice;
    NSMutableDictionary *_dicProductLocale;
    NSMutableDictionary *_dicUnVerifyReceipt;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicUnVerifyReceipt;
+ (void)PBArrayAdd_dicProductLocale;
+ (void)PBArrayAdd_dicProductPrice;
+ (void)PBArrayAdd_dicBillNos;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicUnVerifyReceipt; // @synthesize dicUnVerifyReceipt=_dicUnVerifyReceipt;
@property(retain, nonatomic) NSMutableDictionary *dicProductLocale; // @synthesize dicProductLocale=_dicProductLocale;
@property(retain, nonatomic) NSMutableDictionary *dicProductPrice; // @synthesize dicProductPrice=_dicProductPrice;
@property(retain, nonatomic) NSMutableDictionary *dicBillNos; // @synthesize dicBillNos=_dicBillNos;
- (void)removeUnverifyTransactionForProductID:(id)arg1;
- (void)addUnverifyTransaction:(id)arg1;
- (id)UnVerifyTransactionForProductID:(id)arg1;
- (id)localeForProductID:(id)arg1;
- (id)priceForProductID:(id)arg1;
- (id)productForProductID:(id)arg1;
- (void)addProduct:(id)arg1;
- (void)initUnVerifyTransaction;
- (void)initProductDictionary;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

