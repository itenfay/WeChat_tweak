//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ImageViewData, NSString, RouteInfo, TextViewData;

@interface EditViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TextViewData *hint; // @dynamic hint;
@property(retain, nonatomic) ImageViewData *image; // @dynamic image;
@property(retain, nonatomic) TextViewData *key; // @dynamic key;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) TextViewData *value; // @dynamic value;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

