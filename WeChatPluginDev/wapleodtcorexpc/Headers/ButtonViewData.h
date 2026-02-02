//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CmdInfo, DynamicColor, ImageViewData, NSString, RouteInfo;

@interface ButtonViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int actionType; // @dynamic actionType;
@property(nonatomic) long long bgColor; // @dynamic bgColor;
@property(nonatomic) int buttonType; // @dynamic buttonType;
@property(retain, nonatomic) CmdInfo *cmdInfo; // @dynamic cmdInfo;
@property(retain, nonatomic) DynamicColor *dynamicBgColor; // @dynamic dynamicBgColor;
@property(retain, nonatomic) DynamicColor *dynamicTextColor; // @dynamic dynamicTextColor;
@property(retain, nonatomic) ImageViewData *image; // @dynamic image;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(nonatomic) int state; // @dynamic state;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) long long textButtonCountDownSeconds; // @dynamic textButtonCountDownSeconds;
@property(nonatomic) long long textColor; // @dynamic textColor;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

