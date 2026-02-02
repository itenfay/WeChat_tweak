//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ImageViewData, NSMutableArray, NSString, RouteInfo, TextViewData;

@interface CardRecordViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attachIntro; // @dynamic attachIntro;
@property(nonatomic) int bankCardTag; // @dynamic bankCardTag;
@property(retain, nonatomic) NSString *bankType; // @dynamic bankType;
@property(retain, nonatomic) NSString *bindSerial; // @dynamic bindSerial;
@property(retain, nonatomic) NSMutableArray *cardSubItemViewData; // @dynamic cardSubItemViewData;
@property(retain, nonatomic) NSString *defaultFavorComposeId; // @dynamic defaultFavorComposeId;
@property(retain, nonatomic) ImageViewData *logo; // @dynamic logo;
@property(retain, nonatomic) TextViewData *outerSubTitle; // @dynamic outerSubTitle;
@property(retain, nonatomic) TextViewData *payDeskTitle; // @dynamic payDeskTitle;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(retain, nonatomic) TextViewData *shortTitle; // @dynamic shortTitle;
@property(nonatomic) int state; // @dynamic state;
@property(retain, nonatomic) NSMutableArray *subTitle; // @dynamic subTitle;
@property(nonatomic) unsigned int subtitleShowIndex; // @dynamic subtitleShowIndex;
@property(retain, nonatomic) TextViewData *title; // @dynamic title;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

