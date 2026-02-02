//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, NSData, NSString;

@interface FinderPoiStreamRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *buildingId; // @dynamic buildingId;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *floorName; // @dynamic floorName;
@property(nonatomic) unsigned long long fromObjectId; // @dynamic fromObjectId;
@property(nonatomic) unsigned int fromScene; // @dynamic fromScene;
@property(nonatomic) unsigned int fromType; // @dynamic fromType;
@property(retain, nonatomic) NSString *jumpInfoToPoistreamByPass; // @dynamic jumpInfoToPoistreamByPass;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(nonatomic) unsigned int mediaTabType; // @dynamic mediaTabType;
@property(retain, nonatomic) NSString *poi; // @dynamic poi;
@property(retain, nonatomic) NSString *poiName; // @dynamic poiName;
@property(nonatomic) unsigned int prefetch; // @dynamic prefetch;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(nonatomic) unsigned int tabId; // @dynamic tabId;

@end

