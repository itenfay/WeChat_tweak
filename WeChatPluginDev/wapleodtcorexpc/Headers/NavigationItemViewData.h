//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, RouteInfo, TextViewData;

@interface NavigationItemViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(retain, nonatomic) TextViewData *subTitle; // @dynamic subTitle;
@property(retain, nonatomic) TextViewData *title; // @dynamic title;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

