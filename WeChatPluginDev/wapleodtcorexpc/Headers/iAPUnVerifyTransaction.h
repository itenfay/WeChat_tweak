//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface iAPUnVerifyTransaction : NSObject
{
    unsigned int _uiTransactionDate;
    NSString *_nsProductIdentifier;
    NSData *_dtReceipt;
}

+ (void)initialize;
+ (void)PBArrayAdd_uiTransactionDate;
+ (void)PBArrayAdd_dtReceipt;
+ (void)PBArrayAdd_nsProductIdentifier;
- (void).cxx_destruct;
@property(nonatomic) unsigned int uiTransactionDate; // @synthesize uiTransactionDate=_uiTransactionDate;
@property(retain, nonatomic) NSData *dtReceipt; // @synthesize dtReceipt=_dtReceipt;
@property(retain, nonatomic) NSString *nsProductIdentifier; // @synthesize nsProductIdentifier=_nsProductIdentifier;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

