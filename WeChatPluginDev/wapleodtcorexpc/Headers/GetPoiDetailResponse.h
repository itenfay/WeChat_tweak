//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetPoiDetailResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int adCode; // @dynamic adCode;
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *businessHour; // @dynamic businessHour;
@property(retain, nonatomic) NSString *categoryTips; // @dynamic categoryTips;
@property(retain, nonatomic) NSString *cityName; // @dynamic cityName;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *phone; // @dynamic phone;
@property(nonatomic) float priceTips; // @dynamic priceTips;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(retain, nonatomic) NSString *region; // @dynamic region;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

