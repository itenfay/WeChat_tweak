//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, PoiAppInfo, PoiBrief, PoiBusinessHour, PoiIntro, PoiPhoto, PoiQueueInfo, PoiRate, PoiReservation, PoiReview, PoiTakeAway;

@interface PoiDetailInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) PoiAppInfo *appInfo; // @dynamic appInfo;
@property(retain, nonatomic) PoiBrief *brief; // @dynamic brief;
@property(retain, nonatomic) NSMutableArray *coupons; // @dynamic coupons;
@property(retain, nonatomic) NSMutableArray *deals; // @dynamic deals;
@property(retain, nonatomic) PoiPhoto *headPhoto; // @dynamic headPhoto;
@property(retain, nonatomic) PoiBusinessHour *hour; // @dynamic hour;
@property(retain, nonatomic) PoiIntro *intro; // @dynamic intro;
@property(retain, nonatomic) NSMutableArray *photos; // @dynamic photos;
@property(retain, nonatomic) PoiQueueInfo *queue; // @dynamic queue;
@property(retain, nonatomic) PoiRate *rate; // @dynamic rate;
@property(retain, nonatomic) NSMutableArray *recommendMenus; // @dynamic recommendMenus;
@property(retain, nonatomic) PoiReservation *reservation; // @dynamic reservation;
@property(retain, nonatomic) PoiReview *review; // @dynamic review;
@property(retain, nonatomic) NSMutableArray *sourceInfo; // @dynamic sourceInfo;
@property(retain, nonatomic) NSMutableArray *tags; // @dynamic tags;
@property(retain, nonatomic) PoiTakeAway *takeAway; // @dynamic takeAway;

@end

