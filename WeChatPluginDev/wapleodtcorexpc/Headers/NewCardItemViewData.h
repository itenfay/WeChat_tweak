//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ImageViewData, NSMutableArray, NSString, RouteInfo, TextViewData;

@interface NewCardItemViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ImageViewData *icon; // @dynamic icon;
@property(retain, nonatomic) NSString *jumpSafariUrl; // @dynamic jumpSafariUrl;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(retain, nonatomic) NSMutableArray *subTitle; // @dynamic subTitle;
@property(retain, nonatomic) TextViewData *title; // @dynamic title;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

