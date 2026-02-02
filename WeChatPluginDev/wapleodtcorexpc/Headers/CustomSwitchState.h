//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CmdInfo, DynamicColor, NSString, RouteInfo, TextViewData;

@interface CustomSwitchState : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) CmdInfo *cmdInfo; // @dynamic cmdInfo;
@property(retain, nonatomic) DynamicColor *color; // @dynamic color;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(retain, nonatomic) TextViewData *text; // @dynamic text;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

