//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, SKBuiltinString_t;

@interface VoipSpeedResultReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) SKBuiltinString_t *netName; // @dynamic netName;
@property(nonatomic) unsigned int netType; // @dynamic netType;
@property(retain, nonatomic) NSMutableArray *result; // @dynamic result;
@property(nonatomic) unsigned int resultCnt; // @dynamic resultCnt;
@property(nonatomic) unsigned int roomId; // @dynamic roomId;
@property(nonatomic) unsigned long long roomKey; // @dynamic roomKey;
@property(nonatomic) unsigned long long testId; // @dynamic testId;
@property(retain, nonatomic) SKBuiltinString_t *wifiName; // @dynamic wifiName;

@end

