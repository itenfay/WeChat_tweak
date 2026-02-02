//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface FFHBOpenReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSString *latitude; // @dynamic latitude;
@property(retain, nonatomic) NSData *leftButtonContinue; // @dynamic leftButtonContinue;
@property(nonatomic) unsigned long long locationTimestamp; // @dynamic locationTimestamp;
@property(retain, nonatomic) NSString *longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(nonatomic) double safeLatitude; // @dynamic safeLatitude;
@property(nonatomic) double safeLongitude; // @dynamic safeLongitude;
@property(retain, nonatomic) NSString *shareUrl; // @dynamic shareUrl;

@end

