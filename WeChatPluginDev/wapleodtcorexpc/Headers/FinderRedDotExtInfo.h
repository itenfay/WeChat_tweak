//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DelayBubble, FinderJumpConfig, FinderJumpInfo, FinderLiveDiscoverPreloadConfig, FinderLiveReddotFeature, FinderSyncTipsShowInfo, NSData, NSString;

@interface FinderRedDotExtInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)debugDescription;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSData *activityCustomInfo; // @dynamic activityCustomInfo;
@property(nonatomic) unsigned int activityType; // @dynamic activityType;
@property(retain, nonatomic) NSString *authorIconUrl; // @dynamic authorIconUrl;
@property(retain, nonatomic) DelayBubble *delayBubble; // @dynamic delayBubble;
@property(nonatomic) unsigned int deliveryTime; // @dynamic deliveryTime;
@property(nonatomic) unsigned int displayTabType; // @dynamic displayTabType;
@property(nonatomic) unsigned int enterAction; // @dynamic enterAction;
@property(nonatomic) unsigned int extReddotFlag; // @dynamic extReddotFlag;
@property(retain, nonatomic) NSString *finderNickname; // @dynamic finderNickname;
@property(nonatomic) unsigned long long finderUinDelete; // @dynamic finderUinDelete;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int getcommentdetailPrefetchStatus; // @dynamic getcommentdetailPrefetchStatus;
@property(nonatomic) unsigned int ignorePrefetchLimit; // @dynamic ignorePrefetchLimit;
@property(retain, nonatomic) FinderJumpConfig *jumpConfig; // @dynamic jumpConfig;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int jumpLiveTabId; // @dynamic jumpLiveTabId;
@property(retain, nonatomic) NSString *liveCoverUrl; // @dynamic liveCoverUrl;
@property(retain, nonatomic) FinderLiveDiscoverPreloadConfig *liveDiscoverPreloadConfig; // @dynamic liveDiscoverPreloadConfig;
@property(retain, nonatomic) FinderLiveReddotFeature *liveReddotFeature; // @dynamic liveReddotFeature;
@property(nonatomic) unsigned int notPreloadAfterEnterLive; // @dynamic notPreloadAfterEnterLive;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int objectTypeNews; // @dynamic objectTypeNews;
@property(nonatomic) unsigned int operationLevel; // @dynamic operationLevel;
@property(nonatomic) unsigned int preLoad; // @dynamic preLoad;
@property(nonatomic) unsigned int pushType; // @dynamic pushType;
@property(nonatomic) unsigned int refreshPrefetchStatus; // @dynamic refreshPrefetchStatus;
@property(retain, nonatomic) FinderSyncTipsShowInfo *showInfo; // @dynamic showInfo;
@property(nonatomic) unsigned int startPrefetchScene; // @dynamic startPrefetchScene;
@property(retain, nonatomic) NSData *tabTipsByPassInfo; // @dynamic tabTipsByPassInfo;
@property(retain, nonatomic) NSString *tabTipsRevokeId; // @dynamic tabTipsRevokeId;
@property(nonatomic) unsigned int testFlag; // @dynamic testFlag;
@property(nonatomic) unsigned int uinDelete; // @dynamic uinDelete;
@property(nonatomic) unsigned int updateTime; // @dynamic updateTime;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

