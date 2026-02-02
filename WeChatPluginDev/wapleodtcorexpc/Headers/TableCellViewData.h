//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ImageViewData, NSMutableArray, NSString, PaddingStyle, RedDot, RoundTextViewData, RouteInfo;

@interface TableCellViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ImageViewData *icon; // @dynamic icon;
@property(retain, nonatomic) ImageViewData *navIcon; // @dynamic navIcon;
@property(retain, nonatomic) PaddingStyle *padding; // @dynamic padding;
@property(retain, nonatomic) RedDot *redDot; // @dynamic redDot;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(retain, nonatomic) NSMutableArray *subTitles; // @dynamic subTitles;
@property(retain, nonatomic) RoundTextViewData *tag; // @dynamic tag;
@property(retain, nonatomic) NSMutableArray *titles; // @dynamic titles;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

