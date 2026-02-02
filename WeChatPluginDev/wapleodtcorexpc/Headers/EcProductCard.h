//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EcProductCard_DetailPage, EcProductCard_VirtualPriceInfo, IconTagInfo, NSMutableArray, NSString;

@interface EcProductCard : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSMutableArray *associatedCoupons; // @dynamic associatedCoupons;
@property(retain, nonatomic) NSString *brandIconUrl; // @dynamic brandIconUrl;
@property(retain, nonatomic) NSString *buttonWording; // @dynamic buttonWording;
@property(nonatomic) unsigned int discountPrice; // @dynamic discountPrice;
@property(retain, nonatomic) NSString *extraData; // @dynamic extraData;
@property(retain, nonatomic) EcProductCard_DetailPage *fullPage; // @dynamic fullPage;
@property(retain, nonatomic) EcProductCard_DetailPage *halfPage; // @dynamic halfPage;
@property(retain, nonatomic) NSMutableArray *iconUrls; // @dynamic iconUrls;
@property(retain, nonatomic) NSMutableArray *imgUrls; // @dynamic imgUrls;
@property(nonatomic) unsigned int isMarketPriceShow; // @dynamic isMarketPriceShow;
@property(nonatomic) unsigned int isPriceBeginShow; // @dynamic isPriceBeginShow;
@property(nonatomic) _Bool isVirtualProduct; // @dynamic isVirtualProduct;
@property(nonatomic) unsigned int marketPrice; // @dynamic marketPrice;
@property(nonatomic) unsigned int needPreOpenDisclaimer; // @dynamic needPreOpenDisclaimer;
@property(retain, nonatomic) NSString *outProductId; // @dynamic outProductId;
@property(retain, nonatomic) NSString *platformIconUrl; // @dynamic platformIconUrl;
@property(retain, nonatomic) NSString *platformIconUrlDarkmode; // @dynamic platformIconUrlDarkmode;
@property(nonatomic) unsigned int platformId; // @dynamic platformId;
@property(retain, nonatomic) NSString *platformName; // @dynamic platformName;
@property(retain, nonatomic) NSString *priceSuffixDescription; // @dynamic priceSuffixDescription;
@property(nonatomic) unsigned int productBusinessType; // @dynamic productBusinessType;
@property(nonatomic) unsigned int productButtonStatus; // @dynamic productButtonStatus;
@property(retain, nonatomic) IconTagInfo *productIconTags; // @dynamic productIconTags;
@property(nonatomic) unsigned long long productId; // @dynamic productId;
@property(retain, nonatomic) NSString *productPathCookie; // @dynamic productPathCookie;
@property(nonatomic) unsigned int productType; // @dynamic productType;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) unsigned int sales; // @dynamic sales;
@property(nonatomic) unsigned int sellingPrice; // @dynamic sellingPrice;
@property(retain, nonatomic) NSString *sellingPriceWording; // @dynamic sellingPriceWording;
@property(retain, nonatomic) NSMutableArray *showBoxItems; // @dynamic showBoxItems;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned int stock; // @dynamic stock;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) EcProductCard_VirtualPriceInfo *virtualPriceInfo; // @dynamic virtualPriceInfo;

@end

