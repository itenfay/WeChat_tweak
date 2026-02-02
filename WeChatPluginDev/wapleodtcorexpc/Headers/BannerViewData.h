//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DynamicColor, ImageViewData, NSString, PaddingStyle, RouteInfo, TextViewData;

@interface BannerViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bannerId; // @dynamic bannerId;
@property(retain, nonatomic) DynamicColor *bgColor; // @dynamic bgColor;
@property(retain, nonatomic) DynamicColor *borderColor; // @dynamic borderColor;
@property(retain, nonatomic) DynamicColor *fontColor; // @dynamic fontColor;
@property(retain, nonatomic) ImageViewData *icon; // @dynamic icon;
@property(retain, nonatomic) PaddingStyle *padding; // @dynamic padding;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) TextViewData *titleV2; // @dynamic titleV2;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

