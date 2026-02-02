//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface FinderStreamPrefechTimeIntervalConf : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned int cacheFeedValidTime; // @dynamic cacheFeedValidTime;
@property(nonatomic) unsigned int clientPredictPrefetchOutterInterval; // @dynamic clientPredictPrefetchOutterInterval;
@property(nonatomic) unsigned int clientPredictReddotOutterInterval; // @dynamic clientPredictReddotOutterInterval;
@property(nonatomic) unsigned int clientPrefetchValidTime; // @dynamic clientPrefetchValidTime;
@property(nonatomic) unsigned int followNoReddotPrefetchInnerInterval; // @dynamic followNoReddotPrefetchInnerInterval;
@property(nonatomic) unsigned int followNoReddotPrefetchOutterInterval; // @dynamic followNoReddotPrefetchOutterInterval;
@property(nonatomic) unsigned int followOutterPrefetchValidTime; // @dynamic followOutterPrefetchValidTime;
@property(nonatomic) unsigned int followReddotPrefetchInnerInterval; // @dynamic followReddotPrefetchInnerInterval;
@property(nonatomic) unsigned int followReddotPrefetchOutterInterval; // @dynamic followReddotPrefetchOutterInterval;
@property(nonatomic) unsigned int friendNoReddotPrefetchInnerInterval; // @dynamic friendNoReddotPrefetchInnerInterval;
@property(nonatomic) unsigned int friendNoReddotPrefetchOutterInterval; // @dynamic friendNoReddotPrefetchOutterInterval;
@property(nonatomic) unsigned int friendOutterPrefetchValidTime; // @dynamic friendOutterPrefetchValidTime;
@property(nonatomic) unsigned int friendReddotPrefetchInnerInterval; // @dynamic friendReddotPrefetchInnerInterval;
@property(nonatomic) unsigned int friendReddotPrefetchOutterInterval; // @dynamic friendReddotPrefetchOutterInterval;
@property(nonatomic) unsigned int frontendPrefetchIntervalSec; // @dynamic frontendPrefetchIntervalSec;
@property(nonatomic) _Bool frontendPrefetchSwitch; // @dynamic frontendPrefetchSwitch;
@property(nonatomic) unsigned int hotNoReddotPrefetchInnerInterval; // @dynamic hotNoReddotPrefetchInnerInterval;
@property(nonatomic) unsigned int hotNoReddotPrefetchOutterInterval; // @dynamic hotNoReddotPrefetchOutterInterval;
@property(nonatomic) unsigned int hotOutterPrefetchModel; // @dynamic hotOutterPrefetchModel;
@property(nonatomic) unsigned int hotOutterPrefetchValidTime; // @dynamic hotOutterPrefetchValidTime;
@property(nonatomic) unsigned int hotReddotPrefetchInnerInterval; // @dynamic hotReddotPrefetchInnerInterval;
@property(nonatomic) unsigned int hotReddotPrefetchOutterInterval; // @dynamic hotReddotPrefetchOutterInterval;
@property(retain, nonatomic) NSData *iosModelPrefetchConf; // @dynamic iosModelPrefetchConf;
@property(nonatomic) _Bool modelPrefetchSwitch; // @dynamic modelPrefetchSwitch;
@property(nonatomic) unsigned int nearbyNoReddotPrefetchInnerInterval; // @dynamic nearbyNoReddotPrefetchInnerInterval;
@property(nonatomic) unsigned int nearbyNoReddotPrefetchOutterInterval; // @dynamic nearbyNoReddotPrefetchOutterInterval;
@property(nonatomic) unsigned int nearbyOutterPrefetchValidTime; // @dynamic nearbyOutterPrefetchValidTime;
@property(nonatomic) unsigned int nearbyReddotPrefetchInnerInterval; // @dynamic nearbyReddotPrefetchInnerInterval;
@property(nonatomic) unsigned int nearbyReddotPrefetchOutterInterval; // @dynamic nearbyReddotPrefetchOutterInterval;
@property(nonatomic) unsigned int newFollowReddotPrefetchInterval; // @dynamic newFollowReddotPrefetchInterval;
@property(nonatomic) unsigned int newFriendReddotPrefetchInterval; // @dynamic newFriendReddotPrefetchInterval;
@property(nonatomic) unsigned int newHotReddotPrefetchInterval; // @dynamic newHotReddotPrefetchInterval;
@property(nonatomic) unsigned int newNearbyReddotPrefetchInterval; // @dynamic newNearbyReddotPrefetchInterval;
@property(nonatomic) unsigned int switchTabPrefetchInterval; // @dynamic switchTabPrefetchInterval;
@property(nonatomic) _Bool tabInnerHotPrefetchSwitch; // @dynamic tabInnerHotPrefetchSwitch;

@end

