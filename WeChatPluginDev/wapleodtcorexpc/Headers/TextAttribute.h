//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ControlInfo, DynamicColor, NSString, RouteInfo;

@interface TextAttribute : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;

// Remaining properties
@property(retain, nonatomic) DynamicColor *bgColor; // @dynamic bgColor;
@property(nonatomic) float bgCornerRadius; // @dynamic bgCornerRadius;
@property(nonatomic) long long color; // @dynamic color;
@property(retain, nonatomic) ControlInfo *controlInfo; // @dynamic controlInfo;
@property(retain, nonatomic) DynamicColor *dynamicColor; // @dynamic dynamicColor;
@property(retain, nonatomic) NSString *font; // @dynamic font;
@property(nonatomic) int fontStyle; // @dynamic fontStyle;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(nonatomic) float size; // @dynamic size;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) int textAttr; // @dynamic textAttr;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

