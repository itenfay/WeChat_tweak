//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderLiveProductShareItem : NSObject
{
    _Bool _isLiveEndState;
    _Bool _isPriceBeginShow;
    _Bool _isWxShop;
    unsigned int _valueOfFlashSalePrice;
    int _scene;
    NSString *_finderLiveID;
    NSString *_finderUsername;
    NSString *_finderObjectID;
    NSString *_finderNonceID;
    NSString *_liveStatus;
    unsigned long long _finderLiveStatus;
    NSString *_appId;
    NSString *_pagePath;
    NSString *_productId;
    NSString *_coverUrl;
    NSString *_productTitle;
    NSString *_marketPrice;
    NSString *_sellingPrice;
    NSString *_discountWording;
    NSString *_sellingPriceWording;
    NSString *_platformHeadImg;
    NSString *_platformName;
    NSString *_shopWindowId;
    NSString *_platformIconURL;
    NSString *_promoterKey;
    unsigned long long _valueOfFlashSaleEndTime;
    NSArray *_showBoxItemList;
    NSString *_ecSource;
    NSString *_lastGMsgID;
    NSString *_priceSuffixDescription;
    NSString *_productCardKey;
    NSString *_brandIconUrl;
    NSString *_firstProductTagURL;
    double _firstProductTagAspectRatio;
    NSString *_secondProductTagURL;
    double _secondProductTagAspectRatio;
}

+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_brandIconUrl;
+ (void)PBArrayAdd_isWxShop;
+ (void)PBArrayAdd_productCardKey;
+ (void)PBArrayAdd_priceSuffixDescription;
+ (void)PBArrayAdd_showBoxItemList;
+ (void)PBArrayAdd_promoterKey;
+ (void)PBArrayAdd_discountWording;
+ (void)PBArrayAdd_lastGMsgID;
+ (void)PBArrayAdd_isPriceBeginShow;
+ (void)PBArrayAdd_secondProductTagAspectRatio;
+ (void)PBArrayAdd_secondProductTagURL;
+ (void)PBArrayAdd_firstProductTagAspectRatio;
+ (void)PBArrayAdd_firstProductTagURL;
+ (void)PBArrayAdd_platformIconURL;
+ (void)PBArrayAdd_sellingPriceWording;
+ (void)PBArrayAdd_ecSource;
+ (void)PBArrayAdd_valueOfFlashSaleEndTime;
+ (void)PBArrayAdd_valueOfFlashSalePrice;
+ (void)PBArrayAdd_liveStatus;
+ (void)PBArrayAdd_shopWindowId;
+ (void)PBArrayAdd_platformName;
+ (void)PBArrayAdd_platformHeadImg;
+ (void)PBArrayAdd_sellingPrice;
+ (void)PBArrayAdd_marketPrice;
+ (void)PBArrayAdd_productTitle;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_productId;
+ (void)PBArrayAdd_pagePath;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_finderNonceID;
+ (void)PBArrayAdd_finderObjectID;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_finderLiveID;
- (void).cxx_destruct;
@property(nonatomic) double secondProductTagAspectRatio; // @synthesize secondProductTagAspectRatio=_secondProductTagAspectRatio;
@property(copy, nonatomic) NSString *secondProductTagURL; // @synthesize secondProductTagURL=_secondProductTagURL;
@property(nonatomic) double firstProductTagAspectRatio; // @synthesize firstProductTagAspectRatio=_firstProductTagAspectRatio;
@property(copy, nonatomic) NSString *firstProductTagURL; // @synthesize firstProductTagURL=_firstProductTagURL;
@property(copy, nonatomic) NSString *brandIconUrl; // @synthesize brandIconUrl=_brandIconUrl;
@property(nonatomic) _Bool isWxShop; // @synthesize isWxShop=_isWxShop;
@property(copy, nonatomic) NSString *productCardKey; // @synthesize productCardKey=_productCardKey;
@property(copy, nonatomic) NSString *priceSuffixDescription; // @synthesize priceSuffixDescription=_priceSuffixDescription;
@property(nonatomic) _Bool isPriceBeginShow; // @synthesize isPriceBeginShow=_isPriceBeginShow;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *lastGMsgID; // @synthesize lastGMsgID=_lastGMsgID;
@property(retain, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(retain, nonatomic) NSArray *showBoxItemList; // @synthesize showBoxItemList=_showBoxItemList;
@property(nonatomic) unsigned long long valueOfFlashSaleEndTime; // @synthesize valueOfFlashSaleEndTime=_valueOfFlashSaleEndTime;
@property(nonatomic) unsigned int valueOfFlashSalePrice; // @synthesize valueOfFlashSalePrice=_valueOfFlashSalePrice;
@property(copy, nonatomic) NSString *promoterKey; // @synthesize promoterKey=_promoterKey;
@property(copy, nonatomic) NSString *platformIconURL; // @synthesize platformIconURL=_platformIconURL;
@property(copy, nonatomic) NSString *shopWindowId; // @synthesize shopWindowId=_shopWindowId;
@property(copy, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
@property(copy, nonatomic) NSString *platformHeadImg; // @synthesize platformHeadImg=_platformHeadImg;
@property(copy, nonatomic) NSString *sellingPriceWording; // @synthesize sellingPriceWording=_sellingPriceWording;
@property(copy, nonatomic) NSString *discountWording; // @synthesize discountWording=_discountWording;
@property(copy, nonatomic) NSString *sellingPrice; // @synthesize sellingPrice=_sellingPrice;
@property(copy, nonatomic) NSString *marketPrice; // @synthesize marketPrice=_marketPrice;
@property(copy, nonatomic) NSString *productTitle; // @synthesize productTitle=_productTitle;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool isLiveEndState; // @synthesize isLiveEndState=_isLiveEndState;
@property(nonatomic) unsigned long long finderLiveStatus; // @synthesize finderLiveStatus=_finderLiveStatus;
@property(copy, nonatomic) NSString *liveStatus; // @synthesize liveStatus=_liveStatus;
@property(copy, nonatomic) NSString *finderNonceID; // @synthesize finderNonceID=_finderNonceID;
@property(copy, nonatomic) NSString *finderObjectID; // @synthesize finderObjectID=_finderObjectID;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSString *finderLiveID; // @synthesize finderLiveID=_finderLiveID;
@property(copy, nonatomic) NSArray *showBoxItemStringList;
@property(copy, nonatomic) NSArray *productTags;
@property(copy, nonatomic) NSString *secondProductTagAspectRatioString;
@property(copy, nonatomic) NSString *firstProductTagAspectRatioString;
@property(readonly, nonatomic) _Bool hasLimitDiscount;
@property(copy, nonatomic) NSString *flashSaleEndTime;
@property(copy, nonatomic) NSString *flashSalePrice;
- (id)genFinderDataItem;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScene:(int)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

