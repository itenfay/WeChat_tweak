//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveShopCustomerServiceInfo, FinderWindowProductInfo, FinderWindowProductInfo_DetailPage, FinderWindowProductInfo_ExclusiveInfo, FinderWindowProductInfo_ProductReplayInfo, NSArray, NSMutableArray, NSString;

@interface MMFinderLiveGoodsItem : NSObject
{
    _Bool _isPromoting;
    _Bool _isFlashSale;
    _Bool _hasRequestUpdateUrl;
    unsigned int _platformId;
    unsigned int _stock;
    unsigned int _status;
    FinderWindowProductInfo *_finderWindowProductInfo;
    NSString *_platformName;
    unsigned long long _productId;
    NSString *_title;
    NSString *_imgUrl;
    NSArray *_imgUrls;
    double _marketPrice;
    double _sellingPrice;
    NSString *_buttonWording;
    FinderWindowProductInfo_DetailPage *_halfWxAppPage;
    FinderWindowProductInfo_DetailPage *_fullWxAppPage;
    NSString *_appId;
    NSString *_path;
    NSString *_orderAppId;
    NSString *_orderPath;
    NSString *_extBuff;
    NSString *_productExtData;
    FinderLiveShopCustomerServiceInfo *_csInfo;
    NSMutableArray *_associatedCoupons;
    FinderWindowProductInfo_ExclusiveInfo *_exclusiveInfo;
    NSArray *_iconUrls;
    unsigned long long _currentLiveId;
    FinderWindowProductInfo_ProductReplayInfo *_productReplayInfo;
    NSString *_product_recommend_wording;
    NSString *_headImgUrl;
    NSString *_ecSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(retain, nonatomic) NSString *product_recommend_wording; // @synthesize product_recommend_wording=_product_recommend_wording;
@property(retain, nonatomic) FinderWindowProductInfo_ProductReplayInfo *productReplayInfo; // @synthesize productReplayInfo=_productReplayInfo;
@property(nonatomic) unsigned long long currentLiveId; // @synthesize currentLiveId=_currentLiveId;
@property(copy, nonatomic) NSArray *iconUrls; // @synthesize iconUrls=_iconUrls;
@property(retain, nonatomic) FinderWindowProductInfo_ExclusiveInfo *exclusiveInfo; // @synthesize exclusiveInfo=_exclusiveInfo;
@property(retain, nonatomic) NSMutableArray *associatedCoupons; // @synthesize associatedCoupons=_associatedCoupons;
@property(nonatomic) _Bool hasRequestUpdateUrl; // @synthesize hasRequestUpdateUrl=_hasRequestUpdateUrl;
@property(retain, nonatomic) FinderLiveShopCustomerServiceInfo *csInfo; // @synthesize csInfo=_csInfo;
@property(retain, nonatomic) NSString *productExtData; // @synthesize productExtData=_productExtData;
@property(retain, nonatomic) NSString *extBuff; // @synthesize extBuff=_extBuff;
@property(retain, nonatomic) NSString *orderPath; // @synthesize orderPath=_orderPath;
@property(retain, nonatomic) NSString *orderAppId; // @synthesize orderAppId=_orderAppId;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) FinderWindowProductInfo_DetailPage *fullWxAppPage; // @synthesize fullWxAppPage=_fullWxAppPage;
@property(retain, nonatomic) FinderWindowProductInfo_DetailPage *halfWxAppPage; // @synthesize halfWxAppPage=_halfWxAppPage;
@property(retain, nonatomic) NSString *buttonWording; // @synthesize buttonWording=_buttonWording;
@property(nonatomic) _Bool isFlashSale; // @synthesize isFlashSale=_isFlashSale;
@property(nonatomic) _Bool isPromoting; // @synthesize isPromoting=_isPromoting;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) double sellingPrice; // @synthesize sellingPrice=_sellingPrice;
@property(nonatomic) double marketPrice; // @synthesize marketPrice=_marketPrice;
@property(nonatomic) unsigned int stock; // @synthesize stock=_stock;
@property(retain, nonatomic) NSArray *imgUrls; // @synthesize imgUrls=_imgUrls;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int platformId; // @synthesize platformId=_platformId;
@property(nonatomic) unsigned long long productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
@property(retain, nonatomic) FinderWindowProductInfo *finderWindowProductInfo; // @synthesize finderWindowProductInfo=_finderWindowProductInfo;
- (_Bool)isImgButtonNotDisplayed;
- (_Bool)isImgButtonDisabled;
- (_Bool)enableAskForPromoteImgButton;
- (_Bool)enablePromotionReplayImgButton;
- (_Bool)hasExclusivePrice;
- (_Bool)hasPromotionReplay;
@property(readonly, nonatomic) FinderWindowProductInfo *pb;
- (void)copyFromFinderWindowProductInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFinderWindowProductInfo:(id)arg1 currentLiveId:(unsigned long long)arg2;
- (id)initWithFinderWindowProductInfo:(id)arg1;
- (id)finderLiveLogReportValueForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

