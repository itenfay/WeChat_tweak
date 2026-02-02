//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderDirectAddPreviousLiveProductsPageInfo, FinderFlashSaleOrderSetting, FinderFlashSaleSetting, FinderLiveGetShopShelfResponse_ShopVipInfo, FinderLiveGetShopShelfResponse_ShopWindowCouponInfo, FinderLiveGetShopShelfResponse_ShopWindowProfileInfo, FinderLiveShopCustomerServiceInfo, FinderLiveWxaPreloadInfo, FinderReplayRecordSetting, FinderShopLiteAppJumpInfo, FinderShopShelfAnchorMoneyOffCouponListInfo, FinderShopShelfAskForPromoteSetting, FinderShopShelfHintInfo, FinderShopShelfOrderSetting, FinderShopShelfPlatformDiscountCouponListInfo, FinderWxAppInfo, NSData, NSMutableArray, NSString;

@interface FinderLiveGetShopShelfResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderDirectAddPreviousLiveProductsPageInfo *addPreliveProductsPageInfo; // @dynamic addPreliveProductsPageInfo;
@property(retain, nonatomic) FinderWxAppInfo *addProductUrl; // @dynamic addProductUrl;
@property(nonatomic) unsigned int anchorCanUsePreHotOrLiveExclusivePriceFlag; // @dynamic anchorCanUsePreHotOrLiveExclusivePriceFlag;
@property(retain, nonatomic) FinderShopShelfAnchorMoneyOffCouponListInfo *anchorMoneyOffCouponListInfo; // @dynamic anchorMoneyOffCouponListInfo;
@property(nonatomic) unsigned int anchorOpenShelfJumpPageType; // @dynamic anchorOpenShelfJumpPageType;
@property(retain, nonatomic) FinderShopShelfAskForPromoteSetting *askForPromoteSetting; // @dynamic askForPromoteSetting;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *businessLicensePath; // @dynamic businessLicensePath;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int couponCount; // @dynamic couponCount;
@property(nonatomic) unsigned int couponListContinueFlag; // @dynamic couponListContinueFlag;
@property(retain, nonatomic) NSData *couponListLastBuffer; // @dynamic couponListLastBuffer;
@property(retain, nonatomic) NSString *couponListWording; // @dynamic couponListWording;
@property(retain, nonatomic) FinderWxAppInfo *customedCsApp; // @dynamic customedCsApp;
@property(retain, nonatomic) FinderLiveShopCustomerServiceInfo *directCsInfo; // @dynamic directCsInfo;
@property(nonatomic) unsigned long long extFlag; // @dynamic extFlag;
@property(retain, nonatomic) FinderFlashSaleOrderSetting *flashSaleOrderSetting; // @dynamic flashSaleOrderSetting;
@property(retain, nonatomic) FinderFlashSaleSetting *flashSaleSetting; // @dynamic flashSaleSetting;
@property(nonatomic) _Bool hasVirtualProduct; // @dynamic hasVirtualProduct;
@property(retain, nonatomic) NSMutableArray *itemList; // @dynamic itemList;
@property(retain, nonatomic) FinderWxAppInfo *jumpShopBagUrl; // @dynamic jumpShopBagUrl;
@property(retain, nonatomic) NSMutableArray *labelClassifyInfoList; // @dynamic labelClassifyInfoList;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderShopLiteAppJumpInfo *licenseJumpInfo; // @dynamic licenseJumpInfo;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) FinderShopShelfHintInfo *orderInfoHintInfo; // @dynamic orderInfoHintInfo;
@property(retain, nonatomic) FinderWxAppInfo *orderInfoUrl; // @dynamic orderInfoUrl;
@property(retain, nonatomic) FinderShopShelfPlatformDiscountCouponListInfo *platformDiscountCouponListInfo; // @dynamic platformDiscountCouponListInfo;
@property(retain, nonatomic) FinderLiveWxaPreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(nonatomic) unsigned int productCount; // @dynamic productCount;
@property(retain, nonatomic) FinderReplayRecordSetting *replayRecordSetting; // @dynamic replayRecordSetting;
@property(retain, nonatomic) FinderWxAppInfo *selectProductCenterHomePage; // @dynamic selectProductCenterHomePage;
@property(retain, nonatomic) NSString *shopRequestId; // @dynamic shopRequestId;
@property(retain, nonatomic) FinderShopShelfOrderSetting *shopShelfOrderSetting; // @dynamic shopShelfOrderSetting;
@property(retain, nonatomic) FinderLiveGetShopShelfResponse_ShopVipInfo *shopVipInfo; // @dynamic shopVipInfo;
@property(retain, nonatomic) FinderLiveGetShopShelfResponse_ShopWindowCouponInfo *shopWindowCouponInfo; // @dynamic shopWindowCouponInfo;
@property(retain, nonatomic) FinderLiveGetShopShelfResponse_ShopWindowProfileInfo *shopWindowProfileInfo; // @dynamic shopWindowProfileInfo;
@property(nonatomic) unsigned long long version; // @dynamic version;

@end

