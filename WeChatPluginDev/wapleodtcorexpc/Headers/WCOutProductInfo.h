//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SKProduct;

@interface WCOutProductInfo : NSObject
{
    unsigned int _minutes;
    NSString *_pId;
    NSString *_price;
    NSString *_priceExtra;
    NSString *_discountWording;
    SKProduct *_appSKProduct;
    long long _buttonTagID;
    NSString *_discountMD5;
    NSString *_webPayListUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *webPayListUrl; // @synthesize webPayListUrl=_webPayListUrl;
@property(retain, nonatomic) NSString *discountMD5; // @synthesize discountMD5=_discountMD5;
@property(nonatomic) long long buttonTagID; // @synthesize buttonTagID=_buttonTagID;
@property(retain, nonatomic) SKProduct *appSKProduct; // @synthesize appSKProduct=_appSKProduct;
@property(retain, nonatomic) NSString *discountWording; // @synthesize discountWording=_discountWording;
@property(retain, nonatomic) NSString *priceExtra; // @synthesize priceExtra=_priceExtra;
@property(nonatomic) unsigned int minutes; // @synthesize minutes=_minutes;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *pId; // @synthesize pId=_pId;

@end

