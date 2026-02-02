//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderReddotFreqInfo, FinderSyncClientStatus_DiscoveryReddotInfo, FinderSyncClientStatus_FinderNewLifePrefetchInfo, FinderSyncClientStatus_ReddotSession;

@interface FinderSyncClientStatus : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderSyncClientStatus_DiscoveryReddotInfo *finderDiscoveryReddotInfo; // @dynamic finderDiscoveryReddotInfo;
@property(retain, nonatomic) FinderSyncClientStatus_FinderNewLifePrefetchInfo *finderNewlifePrefetchInfo; // @dynamic finderNewlifePrefetchInfo;
@property(retain, nonatomic) FinderReddotFreqInfo *finderReddotFreqInfo; // @dynamic finderReddotFreqInfo;
@property(nonatomic) unsigned int findersyncUserScene; // @dynamic findersyncUserScene;
@property(nonatomic) unsigned long long flagConsumedDiscoveryReddotBusinessType; // @dynamic flagConsumedDiscoveryReddotBusinessType;
@property(nonatomic) _Bool hasDiscoveryReddot; // @dynamic hasDiscoveryReddot;
@property(nonatomic) _Bool isFinderDau; // @dynamic isFinderDau;
@property(nonatomic) _Bool isInFlow; // @dynamic isInFlow;
@property(nonatomic) unsigned long long latestFinderMentionEntranceExposureNumber; // @dynamic latestFinderMentionEntranceExposureNumber;
@property(nonatomic) unsigned long long latestFinderMentionEntranceExposureTime; // @dynamic latestFinderMentionEntranceExposureTime;
@property(retain, nonatomic) FinderSyncClientStatus_DiscoveryReddotInfo *liveDiscoveryReddotInfo; // @dynamic liveDiscoveryReddotInfo;
@property(retain, nonatomic) FinderSyncClientStatus_ReddotSession *reddotSession; // @dynamic reddotSession;
@property(retain, nonatomic) FinderSyncClientStatus_DiscoveryReddotInfo *socialHotSpotDiscoveryReddotInfo; // @dynamic socialHotSpotDiscoveryReddotInfo;

@end

