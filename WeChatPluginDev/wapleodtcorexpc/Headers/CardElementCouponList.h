//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CardMiniAppInfo, NSMutableArray, NSString;

@interface CardElementCouponList : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cardElementJumpUrl; // @dynamic cardElementJumpUrl;
@property(retain, nonatomic) CardMiniAppInfo *cardElementMiniAppInfo; // @dynamic cardElementMiniAppInfo;
@property(retain, nonatomic) NSString *cardElementNativeUrl; // @dynamic cardElementNativeUrl;
@property(nonatomic) int cardElementOpType; // @dynamic cardElementOpType;
@property(retain, nonatomic) NSString *cardIconUrl; // @dynamic cardIconUrl;
@property(retain, nonatomic) NSString *cardSubLabel; // @dynamic cardSubLabel;
@property(retain, nonatomic) NSString *couponBackUrl; // @dynamic couponBackUrl;
@property(retain, nonatomic) NSString *couponBorderColor; // @dynamic couponBorderColor;
@property(retain, nonatomic) NSString *couponColor; // @dynamic couponColor;
@property(retain, nonatomic) NSString *couponDesc; // @dynamic couponDesc;
@property(retain, nonatomic) NSString *couponDescColor; // @dynamic couponDescColor;
@property(nonatomic) unsigned int couponDescColorAlpha; // @dynamic couponDescColorAlpha;
@property(retain, nonatomic) NSString *couponIcon; // @dynamic couponIcon;
@property(retain, nonatomic) NSMutableArray *couponLabel; // @dynamic couponLabel;
@property(retain, nonatomic) NSString *couponName; // @dynamic couponName;
@property(retain, nonatomic) NSString *couponNameColor; // @dynamic couponNameColor;
@property(nonatomic) unsigned int couponNameColorAlpha; // @dynamic couponNameColorAlpha;
@property(nonatomic) unsigned int couponType; // @dynamic couponType;
@property(retain, nonatomic) NSString *couponUseWay; // @dynamic couponUseWay;
@property(retain, nonatomic) NSString *userCardId; // @dynamic userCardId;

@end

