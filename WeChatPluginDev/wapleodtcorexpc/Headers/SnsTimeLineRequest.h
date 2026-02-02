//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, SKBuiltinBuffer_t, SnsAdExpInfo;

@interface SnsTimeLineRequest : WXPBGeneratedMessage
{
    int realFeedExposureIdsMemoizedSerializedSize;
}

+ (void)initialize;
- (id)shortDebugString;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *adPassThroughInfo; // @dynamic adPassThroughInfo;
@property(retain, nonatomic) SnsAdExpInfo *adexpinfo; // @dynamic adexpinfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long clientLatestId; // @dynamic clientLatestId;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(nonatomic) unsigned int foldSectionSize; // @dynamic foldSectionSize;
@property(nonatomic) unsigned long long getTimeLineIdxMinId; // @dynamic getTimeLineIdxMinId;
@property(nonatomic) unsigned int lastRequestTime; // @dynamic lastRequestTime;
@property(nonatomic) unsigned long long maxId; // @dynamic maxId;
@property(nonatomic) unsigned long long minFilterId; // @dynamic minFilterId;
@property(nonatomic) unsigned long long minIdForCheckUnread; // @dynamic minIdForCheckUnread;
@property(nonatomic) unsigned long long minIdForGetPrePage; // @dynamic minIdForGetPrePage;
@property(nonatomic) unsigned long long nearbyFoldId; // @dynamic nearbyFoldId;
@property(nonatomic) unsigned int networkType; // @dynamic networkType;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(retain, nonatomic) NSMutableArray *realFeedExposureIds; // @dynamic realFeedExposureIds;
@property(nonatomic) unsigned int realFeedExposureIdsCount; // @dynamic realFeedExposureIdsCount;
@property(retain, nonatomic) SKBuiltinBuffer_t *session; // @dynamic session;
@property(nonatomic) unsigned int snsDragon2024Ext; // @dynamic snsDragon2024Ext;
@property(nonatomic) unsigned int switchOfWsNotFold; // @dynamic switchOfWsNotFold;
@property(nonatomic) unsigned int updateTimelineScene; // @dynamic updateTimelineScene;
@property(retain, nonatomic) NSMutableArray *wsNotFoldList; // @dynamic wsNotFoldList;
@property(nonatomic) unsigned int wsNotFoldListCount; // @dynamic wsNotFoldListCount;
@property(nonatomic) unsigned int wsNotFoldUseCache; // @dynamic wsNotFoldUseCache;

@end

