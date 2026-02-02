//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayQRCodeCollectionFixedAmountData : NSObject
{
    _Bool _payerDescRequired;
    NSString *_QRCodeURL;
    NSString *_desc;
    long long _amount;
    NSString *_payerDescPlaceholder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *payerDescPlaceholder; // @synthesize payerDescPlaceholder=_payerDescPlaceholder;
@property(nonatomic) _Bool payerDescRequired; // @synthesize payerDescRequired=_payerDescRequired;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *QRCodeURL; // @synthesize QRCodeURL=_QRCodeURL;
- (void)reset;

@end

