//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderBizInfo, FinderClubInfo, FinderCollectionListInfo, FinderContact, FinderFeedBriefInfo, FinderIpRegionInfo, FinderJumpInfo, FinderJustWatchControl, FinderLayoutConfig, FinderLiveAnchorStat, FinderLiveNoticeInfo, FinderLiveNoticeListInfo, FinderMcnInfo, FinderMileStone, FinderMusicRadio, FinderNicknameVerifyInfo, FinderOriginal, FinderPreloadInfo, FinderProfileBanner, FinderUserInfo, FinderUserPagePoi, FinderUserPageSectionQAInfo, FinderUserpageAdInfo, FinderWxAppInfo, NSData, NSMutableArray, NSString, OriginalEntranceInfo;

@interface FinderUserPageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *acctDetailEntrance; // @dynamic acctDetailEntrance;
@property(retain, nonatomic) FinderUserpageAdInfo *adInfo; // @dynamic adInfo;
@property(retain, nonatomic) FinderLiveAnchorStat *anchorStatInfo; // @dynamic anchorStatInfo;
@property(retain, nonatomic) FinderIpRegionInfo *attrRegionInfo; // @dynamic attrRegionInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderBizInfo *bizInfo; // @dynamic bizInfo;
@property(retain, nonatomic) FinderClubInfo *clubInfo; // @dynamic clubInfo;
@property(retain, nonatomic) FinderCollectionListInfo *collectionListInfo; // @dynamic collectionListInfo;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) OriginalEntranceInfo *entranceInfo; // @dynamic entranceInfo;
@property(retain, nonatomic) NSMutableArray *eventInfoList; // @dynamic eventInfoList;
@property(nonatomic) unsigned int fansCount; // @dynamic fansCount;
@property(retain, nonatomic) FinderFeedBriefInfo *feedBriefInfo; // @dynamic feedBriefInfo;
@property(nonatomic) unsigned int feedsChatroomPushCount; // @dynamic feedsChatroomPushCount;
@property(nonatomic) unsigned int feedsCount; // @dynamic feedsCount;
@property(nonatomic) unsigned int feedsFavCount; // @dynamic feedsFavCount;
@property(nonatomic) unsigned int feedsForwardCount; // @dynamic feedsForwardCount;
@property(nonatomic) unsigned int feedsGlobalFavCount; // @dynamic feedsGlobalFavCount;
@property(nonatomic) unsigned int feedsLikeCount; // @dynamic feedsLikeCount;
@property(retain, nonatomic) FinderUserInfo *finderUserInfo; // @dynamic finderUserInfo;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(nonatomic) unsigned int friendFollowCount; // @dynamic friendFollowCount;
@property(nonatomic) _Bool hasAcctRecommend; // @dynamic hasAcctRecommend;
@property(retain, nonatomic) FinderIpRegionInfo *ipRegionInfo; // @dynamic ipRegionInfo;
@property(retain, nonatomic) NSMutableArray *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) FinderJustWatchControl *justWatch; // @dynamic justWatch;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderLayoutConfig *layoutConfig; // @dynamic layoutConfig;
@property(nonatomic) unsigned int liveDurationHours; // @dynamic liveDurationHours;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @dynamic liveNoticeInfo;
@property(retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo; // @dynamic liveNoticeListInfo;
@property(retain, nonatomic) NSMutableArray *liveObjects; // @dynamic liveObjects;
@property(retain, nonatomic) NSString *loggingoutWording; // @dynamic loggingoutWording;
@property(nonatomic) unsigned int logoutLock; // @dynamic logoutLock;
@property(retain, nonatomic) NSString *logoutUrl; // @dynamic logoutUrl;
@property(retain, nonatomic) FinderMcnInfo *mcnInfo; // @dynamic mcnInfo;
@property(nonatomic) unsigned int memberStatus; // @dynamic memberStatus;
@property(retain, nonatomic) FinderMileStone *mileStone; // @dynamic mileStone;
@property(nonatomic) unsigned int mvObjectMoveFlag; // @dynamic mvObjectMoveFlag;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(nonatomic) unsigned int originalEntranceFlag; // @dynamic originalEntranceFlag;
@property(retain, nonatomic) FinderOriginal *originalInfo; // @dynamic originalInfo;
@property(retain, nonatomic) FinderUserPagePoi *poiInfo; // @dynamic poiInfo;
@property(retain, nonatomic) FinderPreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(nonatomic) unsigned int privateLock; // @dynamic privateLock;
@property(retain, nonatomic) FinderJumpInfo *productInfo; // @dynamic productInfo;
@property(retain, nonatomic) FinderProfileBanner *profileBanner; // @dynamic profileBanner;
@property(retain, nonatomic) FinderUserPageSectionQAInfo *qaInfo; // @dynamic qaInfo;
@property(retain, nonatomic) FinderMusicRadio *radio; // @dynamic radio;
@property(nonatomic) unsigned int upContinueFlag; // @dynamic upContinueFlag;
@property(retain, nonatomic) NSData *upLastbuffer; // @dynamic upLastbuffer;
@property(retain, nonatomic) NSMutableArray *userTags; // @dynamic userTags;
@property(retain, nonatomic) NSMutableArray *usualTopics; // @dynamic usualTopics;
@property(retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo; // @dynamic verifyInfo;
@property(retain, nonatomic) FinderWxAppInfo *wxaShopInfo; // @dynamic wxaShopInfo;

@end

