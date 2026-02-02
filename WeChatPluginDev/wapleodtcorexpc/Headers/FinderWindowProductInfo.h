//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, FinderLiveProductHintAnimationInfo, FinderLiveShopCustomerServiceInfo, FinderWindowProductImgButtonInfo, FinderWindowProductInfo_AskForPromoteInfo, FinderWindowProductInfo_DescWordInfo, FinderWindowProductInfo_DetailPage, FinderWindowProductInfo_ExclusiveInfo, FinderWindowProductInfo_FriendBuyInfo, FinderWindowProductInfo_GiftActivityInfo, FinderWindowProductInfo_GuaranteeInfo, FinderWindowProductInfo_LimitDiscountInfo, FinderWindowProductInfo_ProductReplayInfo, FinderWindowProductInfo_SkuAttrInfoList, HiddenPriceInfo, LiveExclusiveInfo, NSArray, NSData, NSMutableArray, NSString, VirtualPriceInfo;

@interface FinderWindowProductInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)finderLiveLogReportValueForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *guaranteeInfos;
@property(readonly, nonatomic) FinderWindowProductInfo_GuaranteeInfo *guaranteeInfo;
@property(readonly, nonatomic) FinderWindowProductInfo_DescWordInfo *descWordInfo;
@property(readonly, nonatomic) FinderWindowProductInfo_FriendBuyInfo *friendBuyInfo;
@property(readonly, nonatomic) FinderWindowProductInfo_LimitDiscountInfo *limitDiscountInfo;
@property(readonly, nonatomic) _Bool isThirdParty;
@property(readonly, nonatomic) _Bool isNormalThirdParty;
@property(readonly, nonatomic) _Bool isBrandMiniShop;
@property(readonly, nonatomic) _Bool isFinderMiniShop;
@property(readonly, nonatomic) unsigned long long platformType;
@property(readonly, copy, nonatomic) NSString *sellingPriceWording;

// Remaining properties
@property(nonatomic) unsigned int addProductShopBagType; // @dynamic addProductShopBagType;
@property(retain, nonatomic) FinderWindowProductInfo_DetailPage *addShopBagSelectPage; // @dynamic addShopBagSelectPage;
@property(retain, nonatomic) FinderWindowProductInfo_AskForPromoteInfo *askForPromoteInfo; // @dynamic askForPromoteInfo;
@property(retain, nonatomic) NSMutableArray *associatedCoupons; // @dynamic associatedCoupons;
@property(retain, nonatomic) NSString *brandIconUrl; // @dynamic brandIconUrl;
@property(retain, nonatomic) NSString *buttonWording; // @dynamic buttonWording;
@property(nonatomic) _Bool canUseParamPendant; // @dynamic canUseParamPendant;
@property(nonatomic) unsigned int canUseSizeAssistant; // @dynamic canUseSizeAssistant;
@property(retain, nonatomic) FinderLiveShopCustomerServiceInfo *csInfo; // @dynamic csInfo;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned int discountPrice; // @dynamic discountPrice;
@property(retain, nonatomic) NSString *dobule11IconUrl; // @dynamic dobule11IconUrl;
@property(retain, nonatomic) NSMutableArray *evalutionLabelList; // @dynamic evalutionLabelList;
@property(retain, nonatomic) FinderWindowProductInfo_ExclusiveInfo *exclusiveInfo; // @dynamic exclusiveInfo;
@property(retain, nonatomic) NSString *extraData; // @dynamic extraData;
@property(retain, nonatomic) NSString *extraReportJson; // @dynamic extraReportJson;
@property(retain, nonatomic) FinderWindowProductInfo_DetailPage *fullPage; // @dynamic fullPage;
@property(retain, nonatomic) FinderWindowProductInfo_GiftActivityInfo *giftActivityInfo; // @dynamic giftActivityInfo;
@property(retain, nonatomic) FinderWindowProductInfo_DetailPage *halfPage; // @dynamic halfPage;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) HiddenPriceInfo *hiddenPriceInfo; // @dynamic hiddenPriceInfo;
@property(retain, nonatomic) FinderLiveProductHintAnimationInfo *hintAnimationInfo; // @dynamic hintAnimationInfo;
@property(retain, nonatomic) NSMutableArray *iconUrls; // @dynamic iconUrls;
@property(retain, nonatomic) FinderWindowProductImgButtonInfo *imgButtonInfo; // @dynamic imgButtonInfo;
@property(retain, nonatomic) NSMutableArray *imgUrls; // @dynamic imgUrls;
@property(nonatomic) unsigned int isMarketPriceShow; // @dynamic isMarketPriceShow;
@property(nonatomic) unsigned int isPriceBeginShow; // @dynamic isPriceBeginShow;
@property(nonatomic) unsigned int isPromoting; // @dynamic isPromoting;
@property(nonatomic) _Bool isWxShop; // @dynamic isWxShop;
@property(nonatomic) unsigned int listId; // @dynamic listId;
@property(retain, nonatomic) LiveExclusiveInfo *liveExclusiveInfo; // @dynamic liveExclusiveInfo;
@property(nonatomic) unsigned int marketPrice; // @dynamic marketPrice;
@property(nonatomic) unsigned int needPreOpenDisclaimer; // @dynamic needPreOpenDisclaimer;
@property(nonatomic) unsigned int needWxaPrehot; // @dynamic needWxaPrehot;
@property(nonatomic) _Bool openParamPendant; // @dynamic openParamPendant;
@property(retain, nonatomic) NSString *outProductId; // @dynamic outProductId;
@property(nonatomic) unsigned int paramAssistantType; // @dynamic paramAssistantType;
@property(retain, nonatomic) NSString *platformIconUrl; // @dynamic platformIconUrl;
@property(nonatomic) unsigned int platformId; // @dynamic platformId;
@property(retain, nonatomic) NSString *platformName; // @dynamic platformName;
@property(retain, nonatomic) NSString *priceSuffixDescription; // @dynamic priceSuffixDescription;
@property(nonatomic) unsigned int productBusinessType; // @dynamic productBusinessType;
@property(nonatomic) unsigned int productButtonStatus; // @dynamic productButtonStatus;
@property(retain, nonatomic) NSData *productExtInfo; // @dynamic productExtInfo;
@property(nonatomic) unsigned long long productId; // @dynamic productId;
@property(retain, nonatomic) NSString *productPathCookie; // @dynamic productPathCookie;
@property(retain, nonatomic) NSString *productRecommendWording; // @dynamic productRecommendWording;
@property(retain, nonatomic) FinderWindowProductInfo_ProductReplayInfo *productReplayInfo; // @dynamic productReplayInfo;
@property(nonatomic) unsigned int productType; // @dynamic productType;
@property(retain, nonatomic) FinderJumpInfo *promoteProductSizeAssistant; // @dynamic promoteProductSizeAssistant;
@property(nonatomic) unsigned long long replayId; // @dynamic replayId;
@property(nonatomic) unsigned int replayStatus; // @dynamic replayStatus;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) unsigned int sales; // @dynamic sales;
@property(nonatomic) unsigned int sellingPrice; // @dynamic sellingPrice;
@property(retain, nonatomic) NSString *sellingPriceDescription; // @dynamic sellingPriceDescription;
@property(nonatomic) unsigned int showBoxItemGapTimeMs; // @dynamic showBoxItemGapTimeMs;
@property(retain, nonatomic) NSMutableArray *showBoxItemLists; // @dynamic showBoxItemLists;
@property(retain, nonatomic) NSMutableArray *showBoxItems; // @dynamic showBoxItems;
@property(retain, nonatomic) FinderWindowProductInfo_SkuAttrInfoList *skuAttrInfoList; // @dynamic skuAttrInfoList;
@property(nonatomic) unsigned long long spuId; // @dynamic spuId;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) unsigned int stock; // @dynamic stock;
@property(retain, nonatomic) NSString *stockId; // @dynamic stockId;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) VirtualPriceInfo *virtualPriceInfo; // @dynamic virtualPriceInfo;

@end

