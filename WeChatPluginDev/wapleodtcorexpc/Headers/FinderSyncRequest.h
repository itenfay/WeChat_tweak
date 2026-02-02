//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, EntranceExposeContent, FinderBaseRequest, FinderSyncClientInfo, FinderSyncClientStatus, FinderSyncRequest_Coordinate, NSData, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface FinderSyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *clientAiInfo; // @dynamic clientAiInfo;
@property(retain, nonatomic) FinderSyncClientInfo *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) FinderSyncClientStatus *clientStatus; // @dynamic clientStatus;
@property(retain, nonatomic) NSMutableArray *contacts; // @dynamic contacts;
@property(retain, nonatomic) FinderSyncRequest_Coordinate *coordinate; // @dynamic coordinate;
@property(retain, nonatomic) NSMutableArray *ctrlInfoList; // @dynamic ctrlInfoList;
@property(retain, nonatomic) EntranceExposeContent *entranceExposeContent; // @dynamic entranceExposeContent;
@property(retain, nonatomic) NSString *entranceTipsId; // @dynamic entranceTipsId;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int fredDeleted; // @dynamic fredDeleted;
@property(nonatomic) unsigned long long freqctrlSet; // @dynamic freqctrlSet;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuf; // @dynamic keyBuf;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSMutableArray *multiFinderUsername; // @dynamic multiFinderUsername;
@property(retain, nonatomic) NSMutableArray *nearbyCtrlInfoList; // @dynamic nearbyCtrlInfoList;
@property(retain, nonatomic) NSString *nearbyEntranceTipsId; // @dynamic nearbyEntranceTipsId;
@property(retain, nonatomic) NSMutableArray *reddotExposeInfos; // @dynamic reddotExposeInfos;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int selector; // @dynamic selector;
@property(retain, nonatomic) NSMutableArray *self_; // @dynamic self_;
@property(retain, nonatomic) NSMutableArray *snsCtrlInfoList; // @dynamic snsCtrlInfoList;
@property(nonatomic) unsigned int stayDisplayTabType; // @dynamic stayDisplayTabType;
@property(retain, nonatomic) NSMutableArray *syncClubInfoList; // @dynamic syncClubInfoList;

@end

