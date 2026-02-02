//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CardElementMchLabel, CardMiniAppInfo, NSMutableArray, NSString;

@interface CardHomePageElement : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *cardElementCouponList; // @dynamic cardElementCouponList;
@property(retain, nonatomic) NSString *cardElementJumpUrl; // @dynamic cardElementJumpUrl;
@property(retain, nonatomic) NSString *cardElementMchIcon; // @dynamic cardElementMchIcon;
@property(retain, nonatomic) NSMutableArray *cardElementMchLabel; // @dynamic cardElementMchLabel;
@property(retain, nonatomic) NSString *cardElementMchName; // @dynamic cardElementMchName;
@property(retain, nonatomic) CardMiniAppInfo *cardElementMiniAppInfo; // @dynamic cardElementMiniAppInfo;
@property(retain, nonatomic) NSString *cardElementNativeUrl; // @dynamic cardElementNativeUrl;
@property(nonatomic) int cardElementOpType; // @dynamic cardElementOpType;
@property(retain, nonatomic) NSString *cardElementTradeRelation; // @dynamic cardElementTradeRelation;
@property(retain, nonatomic) NSString *cardPackMerchantId; // @dynamic cardPackMerchantId;
@property(retain, nonatomic) CardMiniAppInfo *couponDetailMiniAppInfo; // @dynamic couponDetailMiniAppInfo;
@property(retain, nonatomic) NSString *couponDetailWording; // @dynamic couponDetailWording;
@property(retain, nonatomic) NSString *couponDetailWordingColor; // @dynamic couponDetailWordingColor;
@property(nonatomic) unsigned int couponTotalNum; // @dynamic couponTotalNum;
@property(nonatomic) unsigned int expandCouponNum; // @dynamic expandCouponNum;
@property(nonatomic) unsigned int isExpandCouponList; // @dynamic isExpandCouponList;
@property(nonatomic) unsigned long long lastReceiveTime; // @dynamic lastReceiveTime;
@property(retain, nonatomic) CardElementMchLabel *mchActTag; // @dynamic mchActTag;

@end

