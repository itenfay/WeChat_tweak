//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderCategoryInfo, FinderClientStatus, FinderGetRelatedEntranceInfo, FinderLiveClientStatus, FinderSectionInfo, MusicLiveGetRelatedListReq_GetColumnFeedInfo, MusicLiveGetRelatedListReq_GetRelatedColumnTopicInfo, MusicLiveGetRelatedListReq_SwitchColumnInfo, NSData, NSMutableArray, NSString;

@interface MusicLiveGetRelatedListReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderCategoryInfo *catetoryFilter; // @dynamic catetoryFilter;
@property(nonatomic) unsigned int displayTabType; // @dynamic displayTabType;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *firstObjectReason; // @dynamic firstObjectReason;
@property(retain, nonatomic) NSString *fromSessionId; // @dynamic fromSessionId;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(retain, nonatomic) MusicLiveGetRelatedListReq_GetColumnFeedInfo *getColumnFeedInfo; // @dynamic getColumnFeedInfo;
@property(retain, nonatomic) MusicLiveGetRelatedListReq_GetRelatedColumnTopicInfo *getRelatedColumnTopicInfo; // @dynamic getRelatedColumnTopicInfo;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(retain, nonatomic) FinderLiveClientStatus *liveStatus; // @dynamic liveStatus;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(retain, nonatomic) NSData *objectSessionInfo; // @dynamic objectSessionInfo;
@property(retain, nonatomic) FinderGetRelatedEntranceInfo *relatedEntranceInfo; // @dynamic relatedEntranceInfo;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) FinderSectionInfo *sectionInfo; // @dynamic sectionInfo;
@property(retain, nonatomic) NSString *source; // @dynamic source;
@property(retain, nonatomic) NSMutableArray *stats; // @dynamic stats;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(retain, nonatomic) NSData *streamLastBuffer; // @dynamic streamLastBuffer;
@property(retain, nonatomic) MusicLiveGetRelatedListReq_SwitchColumnInfo *switchColumnInfo; // @dynamic switchColumnInfo;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;

@end

