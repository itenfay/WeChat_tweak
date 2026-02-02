//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdCardBtnInfo, WCAdMultiProductsInfo, WCAdPromotionInfo, WCAdRatingCardInfo, WCAdSellingPointInfo;

@interface WCAdCardInfo : NSObject
{
    NSString *title;
    NSString *description;
    WCAdRatingCardInfo *adRatingCardInfo;
    WCAdCardBtnInfo *adCardBtnInfo;
    WCAdPromotionInfo *adPromotionInfo;
    WCAdSellingPointInfo *_adSellingPointInfo;
    WCAdMultiProductsInfo *_adMultiProductsInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdMultiProductsInfo *adMultiProductsInfo; // @synthesize adMultiProductsInfo=_adMultiProductsInfo;
@property(retain, nonatomic) WCAdSellingPointInfo *adSellingPointInfo; // @synthesize adSellingPointInfo=_adSellingPointInfo;
@property(retain, nonatomic) WCAdPromotionInfo *adPromotionInfo; // @synthesize adPromotionInfo;
@property(retain, nonatomic) WCAdCardBtnInfo *adCardBtnInfo; // @synthesize adCardBtnInfo;
@property(retain, nonatomic) WCAdRatingCardInfo *adRatingCardInfo; // @synthesize adRatingCardInfo;
@property(retain, nonatomic) NSString *description; // @synthesize description;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

