//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface GetPOIListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *buff; // @dynamic buff;
@property(retain, nonatomic) NSString *buildingId; // @dynamic buildingId;
@property(nonatomic) unsigned int extSence; // @dynamic extSence;
@property(retain, nonatomic) NSString *floorName; // @dynamic floorName;
@property(nonatomic) unsigned int indoorSwitch; // @dynamic indoorSwitch;
@property(nonatomic) unsigned int isAutoQuery; // @dynamic isAutoQuery;
@property(retain, nonatomic) NSString *keyword; // @dynamic keyword;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic) unsigned int opCode; // @dynamic opCode;
@property(nonatomic) double originalLatitude; // @dynamic originalLatitude;
@property(nonatomic) double originalLongitude; // @dynamic originalLongitude;
@property(nonatomic) double scale; // @dynamic scale;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

