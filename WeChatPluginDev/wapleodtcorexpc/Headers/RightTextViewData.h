//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, RouteInfo, TextViewData;

@interface RightTextViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int clickRegion; // @dynamic clickRegion;
@property(nonatomic) int imageType; // @dynamic imageType;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(retain, nonatomic) TextViewData *text; // @dynamic text;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

