//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CardMiniAppInfo, NSString;

@interface CardElementCouponLabel : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *couponLabelBackColor; // @dynamic couponLabelBackColor;
@property(nonatomic) unsigned int couponLabelBackColorAlpha; // @dynamic couponLabelBackColorAlpha;
@property(nonatomic) unsigned int couponLabelJumpFlag; // @dynamic couponLabelJumpFlag;
@property(retain, nonatomic) CardMiniAppInfo *couponLabelMiniAppInfo; // @dynamic couponLabelMiniAppInfo;
@property(retain, nonatomic) NSString *couponLabelName; // @dynamic couponLabelName;
@property(retain, nonatomic) NSString *couponLabelTextColor; // @dynamic couponLabelTextColor;

@end

