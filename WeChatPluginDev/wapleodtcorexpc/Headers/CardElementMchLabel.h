//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CardMiniAppInfo, NSString;

@interface CardElementMchLabel : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *mchLabelBackColor; // @dynamic mchLabelBackColor;
@property(nonatomic) unsigned int mchLabelBackColorAlpha; // @dynamic mchLabelBackColorAlpha;
@property(nonatomic) unsigned int mchLabelJumpFlag; // @dynamic mchLabelJumpFlag;
@property(retain, nonatomic) CardMiniAppInfo *mchLabelMiniAppInfo; // @dynamic mchLabelMiniAppInfo;
@property(retain, nonatomic) NSString *mchLabelName; // @dynamic mchLabelName;
@property(retain, nonatomic) NSString *mchLabelTextColor; // @dynamic mchLabelTextColor;

@end

