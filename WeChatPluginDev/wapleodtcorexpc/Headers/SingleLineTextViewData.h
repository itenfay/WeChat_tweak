//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, RightTextViewData, RouteInfo, TextViewData;

@interface SingleLineTextViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TextViewData *leftText; // @dynamic leftText;
@property(retain, nonatomic) RightTextViewData *rightText; // @dynamic rightText;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

