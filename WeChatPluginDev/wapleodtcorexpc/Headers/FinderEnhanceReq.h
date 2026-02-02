//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, NSData, NSMutableArray, NSString;

@interface FinderEnhanceReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int displayTabType; // @dynamic displayTabType;
@property(nonatomic) unsigned int enhanceStreamType; // @dynamic enhanceStreamType;
@property(retain, nonatomic) NSMutableArray *existedObjectIds; // @dynamic existedObjectIds;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) unsigned int listenEventType; // @dynamic listenEventType;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSMutableArray *markUnreadObjectList; // @dynamic markUnreadObjectList;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(retain, nonatomic) NSMutableArray *stats; // @dynamic stats;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;

@end

