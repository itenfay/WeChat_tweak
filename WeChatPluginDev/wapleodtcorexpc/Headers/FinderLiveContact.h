//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, FinderLiveBadgeInfo, FinderLiveContactSpamInfo, FinderLiveLocation, LiveRoomImg, NSData, NSMutableArray, NSString;

@interface FinderLiveContact : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveBadgeInfo *badgeInfo; // @dynamic badgeInfo;
@property(retain, nonatomic) NSMutableArray *badgeInfos; // @dynamic badgeInfos;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int disableComment; // @dynamic disableComment;
@property(nonatomic) _Bool disablePersonalMsg; // @dynamic disablePersonalMsg;
@property(retain, nonatomic) NSString *displayNickname; // @dynamic displayNickname;
@property(nonatomic) unsigned int enableComment; // @dynamic enableComment;
@property(nonatomic) unsigned long long intimacy; // @dynamic intimacy;
@property(retain, nonatomic) NSString *liveBgImgUrl; // @dynamic liveBgImgUrl;
@property(retain, nonatomic) NSData *liveContactExtInfo; // @dynamic liveContactExtInfo;
@property(nonatomic) unsigned int liveContactFlag; // @dynamic liveContactFlag;
@property(nonatomic) unsigned long long liveHeatValue; // @dynamic liveHeatValue;
@property(nonatomic) unsigned int liveIdentity; // @dynamic liveIdentity;
@property(retain, nonatomic) FinderLiveLocation *location; // @dynamic location;
@property(nonatomic) unsigned int rewardAmountInHeat; // @dynamic rewardAmountInHeat;
@property(retain, nonatomic) FinderLiveContactSpamInfo *spamInfo; // @dynamic spamInfo;
@property(retain, nonatomic) LiveRoomImg *voiceLiveImg; // @dynamic voiceLiveImg;

@end

