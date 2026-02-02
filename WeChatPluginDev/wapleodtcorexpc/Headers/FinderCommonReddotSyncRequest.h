//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, EntranceExposeContent, FinderBaseRequest, FinderCommonReddotExpose, FinderSyncClientInfo, FinderSyncClientStatus, NSData, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface FinderCommonReddotSyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *clientAiInfo; // @dynamic clientAiInfo;
@property(retain, nonatomic) NSData *clientCustomInfo; // @dynamic clientCustomInfo;
@property(retain, nonatomic) FinderSyncClientInfo *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) FinderSyncClientStatus *clientStatus; // @dynamic clientStatus;
@property(retain, nonatomic) EntranceExposeContent *entranceExposeContent; // @dynamic entranceExposeContent;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuf; // @dynamic keyBuf;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) unsigned int lbsCacheTime; // @dynamic lbsCacheTime;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSMutableArray *multiFinderUsername; // @dynamic multiFinderUsername;
@property(retain, nonatomic) FinderCommonReddotExpose *reddotExpose; // @dynamic reddotExpose;
@property(retain, nonatomic) NSData *reliableNotifyBuff; // @dynamic reliableNotifyBuff;

@end

