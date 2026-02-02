//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface LbsLife : WXPBGeneratedMessage
{
    int iconIdxListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bid; // @dynamic bid;
@property(retain, nonatomic) NSString *buildingId; // @dynamic buildingId;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) SKBuiltinBuffer_t *ctx; // @dynamic ctx;
@property(nonatomic) unsigned int descCount; // @dynamic descCount;
@property(retain, nonatomic) NSMutableArray *descList; // @dynamic descList;
@property(nonatomic) float distance; // @dynamic distance;
@property(retain, nonatomic) NSString *floorName; // @dynamic floorName;
@property(nonatomic) unsigned int iconIdxCount; // @dynamic iconIdxCount;
@property(retain, nonatomic) NSMutableArray *iconIdxList; // @dynamic iconIdxList;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(retain, nonatomic) NSString *link; // @dynamic link;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *poiUrl; // @dynamic poiUrl;
@property(nonatomic) float price; // @dynamic price;
@property(nonatomic) float rate; // @dynamic rate;
@property(nonatomic) unsigned int showFlag; // @dynamic showFlag;
@property(nonatomic) unsigned int showType; // @dynamic showType;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) SKBuiltinBuffer_t *weAppInfo; // @dynamic weAppInfo;

@end

