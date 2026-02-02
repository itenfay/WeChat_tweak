//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderBizInfo, FinderClubInfo, FinderContact, FinderFeedBriefInfo, FinderIpRegionInfo, FinderJumpInfo, FinderLiveAnchorStat, FinderLiveNoticeListInfo, FinderMcnInfo, FinderMileStone, FinderMusicRadio, FinderNicknameVerifyInfo, FinderOriginal, FinderProfileBanner, FinderUserPagePoi, FinderUserPageTabList, NSMutableArray, NSString;

@interface FinderUserPageHeaderResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveAnchorStat *anchorStat; // @dynamic anchorStat;
@property(retain, nonatomic) FinderIpRegionInfo *attrRegionInfo; // @dynamic attrRegionInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderBizInfo *bizInfo; // @dynamic bizInfo;
@property(retain, nonatomic) FinderClubInfo *clubInfo; // @dynamic clubInfo;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(retain, nonatomic) NSMutableArray *eventInfoList; // @dynamic eventInfoList;
@property(nonatomic) unsigned int fansCount; // @dynamic fansCount;
@property(retain, nonatomic) FinderFeedBriefInfo *feedBriefInfo; // @dynamic feedBriefInfo;
@property(nonatomic) unsigned int friendFollowCount; // @dynamic friendFollowCount;
@property(retain, nonatomic) FinderIpRegionInfo *ipRegionInfo; // @dynamic ipRegionInfo;
@property(retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo; // @dynamic liveNoticeListInfo;
@property(nonatomic) unsigned int logoutLock; // @dynamic logoutLock;
@property(retain, nonatomic) NSString *logoutUrl; // @dynamic logoutUrl;
@property(retain, nonatomic) FinderMcnInfo *mcnInfo; // @dynamic mcnInfo;
@property(nonatomic) unsigned int memberStatus; // @dynamic memberStatus;
@property(retain, nonatomic) FinderMileStone *mileStone; // @dynamic mileStone;
@property(nonatomic) unsigned int mvObjectMoveFlag; // @dynamic mvObjectMoveFlag;
@property(retain, nonatomic) FinderOriginal *originalInfo; // @dynamic originalInfo;
@property(retain, nonatomic) FinderUserPagePoi *poiInfo; // @dynamic poiInfo;
@property(nonatomic) unsigned int privateLock; // @dynamic privateLock;
@property(retain, nonatomic) FinderJumpInfo *productInfo; // @dynamic productInfo;
@property(retain, nonatomic) FinderProfileBanner *profileBanner; // @dynamic profileBanner;
@property(retain, nonatomic) FinderMusicRadio *radio; // @dynamic radio;
@property(retain, nonatomic) FinderUserPageTabList *tabList; // @dynamic tabList;
@property(retain, nonatomic) NSMutableArray *userTags; // @dynamic userTags;
@property(retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo; // @dynamic verifyInfo;

@end

