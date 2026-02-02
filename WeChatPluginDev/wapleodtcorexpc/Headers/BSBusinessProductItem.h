//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BSBusinessProductItem : NSObject
{
    unsigned int _price;
    NSString *_productId;
    NSString *_productName;
    NSString *_sellerName;
    NSString *_sellerUserName;
    NSString *_productImgUrl;
}

+ (id)fromServerObj:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *productImgUrl; // @synthesize productImgUrl=_productImgUrl;
@property(nonatomic) unsigned int price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *sellerUserName; // @synthesize sellerUserName=_sellerUserName;
@property(retain, nonatomic) NSString *sellerName; // @synthesize sellerName=_sellerName;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;

@end

