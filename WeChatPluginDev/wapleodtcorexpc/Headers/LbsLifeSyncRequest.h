//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, EntranceExposeContent, FinderBaseRequest, FinderSyncRequest_Coordinate, LbsLifeInfo, LbsLifeSyncClientStatus, NSData, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface LbsLifeSyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *clientAiInfo; // @dynamic clientAiInfo;
@property(retain, nonatomic) LbsLifeSyncClientStatus *clientStatus; // @dynamic clientStatus;
@property(retain, nonatomic) FinderSyncRequest_Coordinate *coordinate; // @dynamic coordinate;
@property(retain, nonatomic) EntranceExposeContent *entranceExposeContent; // @dynamic entranceExposeContent;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuf; // @dynamic keyBuf;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) LbsLifeInfo *lbsLifeInfo; // @dynamic lbsLifeInfo;
@property(retain, nonatomic) NSMutableArray *multiFinderUsername; // @dynamic multiFinderUsername;
@property(retain, nonatomic) NSData *reliableNotifyBuff; // @dynamic reliableNotifyBuff;

@end

