//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderCategoryInfo, FinderClientStatus, FinderCommByPass, FinderGetRelatedEntranceInfo, FinderGetRelatedListReq_GetColumnFeedInfo, FinderGetRelatedListReq_GetRelatedColumnTopicInfo, FinderGetRelatedListReq_MsgInfo, FinderGetRelatedListReq_SwitchColumnInfo, FinderLiveBeforeJoinLiveRoomStatus, FinderLiveClientStatus, FinderSectionInfo, LongVideoPlayerContext, NSData, NSMutableArray, NSString, StreamTabTipsInfo;

@interface FinderGetRelatedListReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveRoomStatus; // @dynamic beforeJoinLiveRoomStatus;
@property(retain, nonatomic) FinderCategoryInfo *catetoryFilter; // @dynamic catetoryFilter;
@property(retain, nonatomic) NSData *collectionInfo; // @dynamic collectionInfo;
@property(retain, nonatomic) FinderCommByPass *commByPass; // @dynamic commByPass;
@property(nonatomic) unsigned int displayTabType; // @dynamic displayTabType;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *firstObjectReason; // @dynamic firstObjectReason;
@property(retain, nonatomic) NSString *fromSessionId; // @dynamic fromSessionId;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(retain, nonatomic) FinderGetRelatedListReq_GetColumnFeedInfo *getColumnFeedInfo; // @dynamic getColumnFeedInfo;
@property(retain, nonatomic) FinderGetRelatedListReq_GetRelatedColumnTopicInfo *getRelatedColumnTopicInfo; // @dynamic getRelatedColumnTopicInfo;
@property(retain, nonatomic) NSString *jumpInfoByPassInfo; // @dynamic jumpInfoByPassInfo;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(retain, nonatomic) FinderLiveClientStatus *liveStatus; // @dynamic liveStatus;
@property(retain, nonatomic) LongVideoPlayerContext *longVideoPlayerContext; // @dynamic longVideoPlayerContext;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) FinderGetRelatedListReq_MsgInfo *msgInfo; // @dynamic msgInfo;
@property(retain, nonatomic) NSData *nextObjectBuffer; // @dynamic nextObjectBuffer;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(retain, nonatomic) NSData *objectSessionInfo; // @dynamic objectSessionInfo;
@property(nonatomic) unsigned int prefetchType; // @dynamic prefetchType;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(retain, nonatomic) FinderGetRelatedEntranceInfo *relatedEntranceInfo; // @dynamic relatedEntranceInfo;
@property(nonatomic) unsigned int relatedFlag; // @dynamic relatedFlag;
@property(retain, nonatomic) NSData *relatedlistLastBuffer; // @dynamic relatedlistLastBuffer;
@property(nonatomic) unsigned int ringToneEventType; // @dynamic ringToneEventType;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) FinderSectionInfo *sectionInfo; // @dynamic sectionInfo;
@property(retain, nonatomic) NSString *source; // @dynamic source;
@property(retain, nonatomic) NSMutableArray *stats; // @dynamic stats;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(retain, nonatomic) NSData *streamLastBuffer; // @dynamic streamLastBuffer;
@property(retain, nonatomic) FinderGetRelatedListReq_SwitchColumnInfo *switchColumnInfo; // @dynamic switchColumnInfo;
@property(retain, nonatomic) StreamTabTipsInfo *tabTipsInfo; // @dynamic tabTipsInfo;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;

@end

