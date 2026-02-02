//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, FinderCommByPass, FinderLiveBeforeJoinLiveRoomStatus, FinderLiveClientStatus, FinderStreamRelatedInfo, FinderStreamSceneStatus, FinderSubTabItem, FinderSwitch, NSData, NSMutableArray, NSString, StreamBackupRequest;

@interface FinderStreamRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) StreamBackupRequest *backupRequest; // @dynamic backupRequest;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveRoomStatus; // @dynamic beforeJoinLiveRoomStatus;
@property(retain, nonatomic) NSMutableArray *cacheFeeds; // @dynamic cacheFeeds;
@property(retain, nonatomic) NSData *cardBuffer; // @dynamic cardBuffer;
@property(retain, nonatomic) FinderCommByPass *commByPass; // @dynamic commByPass;
@property(nonatomic) unsigned int displayTabType; // @dynamic displayTabType;
@property(nonatomic) unsigned int enterFinderProbability; // @dynamic enterFinderProbability;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) FinderSwitch *finderSwitch; // @dynamic finderSwitch;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned long long guideBarObjectId; // @dynamic guideBarObjectId;
@property(retain, nonatomic) NSString *h5ByPass; // @dynamic h5ByPass;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(retain, nonatomic) FinderLiveClientStatus *liveStatus; // @dynamic liveStatus;
@property(nonatomic) unsigned int locationGeneratedTime; // @dynamic locationGeneratedTime;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSMutableArray *markUnreadObjectList; // @dynamic markUnreadObjectList;
@property(nonatomic) unsigned int modelPrefetchConf; // @dynamic modelPrefetchConf;
@property(retain, nonatomic) NSMutableArray *otherTabReadStats; // @dynamic otherTabReadStats;
@property(nonatomic) unsigned long long partialExposedObjectId; // @dynamic partialExposedObjectId;
@property(nonatomic) unsigned int prefetchConsumedFlag; // @dynamic prefetchConsumedFlag;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(retain, nonatomic) NSMutableArray *readStats; // @dynamic readStats;
@property(retain, nonatomic) FinderStreamRelatedInfo *relatedInfo; // @dynamic relatedInfo;
@property(nonatomic) unsigned int requestSource; // @dynamic requestSource;
@property(retain, nonatomic) NSData *rerankLastBuffer; // @dynamic rerankLastBuffer;
@property(retain, nonatomic) FinderStreamSceneStatus *sceneStatus; // @dynamic sceneStatus;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int specialRequestScene; // @dynamic specialRequestScene;
@property(retain, nonatomic) NSMutableArray *stats; // @dynamic stats;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(retain, nonatomic) FinderSubTabItem *subTab; // @dynamic subTab;
@property(retain, nonatomic) NSData *tabTipsByPassInfo; // @dynamic tabTipsByPassInfo;
@property(nonatomic) unsigned long long tabTipsObjectId; // @dynamic tabTipsObjectId;
@property(retain, nonatomic) NSString *tabTipsObjectNonceId; // @dynamic tabTipsObjectNonceId;
@property(retain, nonatomic) NSString *tabTipsPath; // @dynamic tabTipsPath;
@property(retain, nonatomic) NSString *tabTipsUsername; // @dynamic tabTipsUsername;
@property(retain, nonatomic) NSMutableArray *topObjects; // @dynamic topObjects;

@end

