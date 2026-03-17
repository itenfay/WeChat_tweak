//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FavProductItem : NSObject
{
    NSString *_productTitle;
    NSString *_productDesc;
    NSString *_thumbUrl;
    NSString *_productInfo;
    NSString *_productSellerName;
    NSString *_productUrl;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
@property(retain, nonatomic) NSString *productUrl; // @synthesize productUrl=_productUrl;
@property(retain, nonatomic) NSString *productSellerName; // @synthesize productSellerName=_productSellerName;
@property(retain, nonatomic) NSString *productInfo; // @synthesize productInfo=_productInfo;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *productDesc; // @synthesize productDesc=_productDesc;
@property(retain, nonatomic) NSString *productTitle; // @synthesize productTitle=_productTitle;

@end

