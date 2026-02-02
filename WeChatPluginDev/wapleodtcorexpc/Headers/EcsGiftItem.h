//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EcsGiftAddress, NSString;

@interface EcsGiftItem
{
    unsigned int _skuPrice;
    unsigned int _giftStatus;
    unsigned int _canChangeSku;
    NSString *_orderId;
    NSString *_skuImgUrl;
    NSString *_skuTitle;
    NSString *_skuSaleParams;
    EcsGiftAddress *_address;
    NSString *_skuId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(nonatomic) unsigned int canChangeSku; // @synthesize canChangeSku=_canChangeSku;
@property(nonatomic) unsigned int giftStatus; // @synthesize giftStatus=_giftStatus;
@property(retain, nonatomic) EcsGiftAddress *address; // @synthesize address=_address;
@property(nonatomic) unsigned int skuPrice; // @synthesize skuPrice=_skuPrice;
@property(retain, nonatomic) NSString *skuSaleParams; // @synthesize skuSaleParams=_skuSaleParams;
@property(retain, nonatomic) NSString *skuTitle; // @synthesize skuTitle=_skuTitle;
@property(retain, nonatomic) NSString *skuImgUrl; // @synthesize skuImgUrl=_skuImgUrl;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

