//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EcCustomerOrder, NSString;

@interface MMCustomerOrderInfo : NSObject
{
    _Bool _expanded;
    NSString *_orderId;
    EcCustomerOrder *_orderBaseInfo;
}

+ (id)genFromSearchOrderResp:(id)arg1;
+ (id)genFromGetOrderListResp:(id)arg1;
+ (id)convertFromProductList:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) EcCustomerOrder *orderBaseInfo; // @synthesize orderBaseInfo=_orderBaseInfo;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (id)productAmountWordingOf:(id)arg1;
@property(readonly, copy, nonatomic) NSString *priceWording;
- (id)initWithEcCustomerOrder:(id)arg1;

@end

