//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DynamicColor, NSString, PaddingStyle, TextViewData;

@interface RoundTextViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) long long bgColor; // @dynamic bgColor;
@property(nonatomic) float cornerRadius; // @dynamic cornerRadius;
@property(retain, nonatomic) DynamicColor *dynamicBgColor; // @dynamic dynamicBgColor;
@property(retain, nonatomic) PaddingStyle *padding; // @dynamic padding;
@property(retain, nonatomic) TextViewData *text; // @dynamic text;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

