//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderClubInfo, FinderCollectionListInfo, FinderFeedBriefInfo, FinderJumpInfo, FinderMcnInfo, FinderMileStone, FinderMusicRadio, FinderMusicStatisticsInfo, FinderOriginal, FinderProfileBanner, FinderUserPageSectionQAInfo, NSMutableArray, NSString, WCFinderContactServiceMenuMutableArray, WCFinderIpRegionInfo, WCFinderProfileMemberShipInfo, WCFinderProfileOverviewCache, WCFinderProfilePostTipsInfo;

@interface WCFinderStreamProfileExtInfoInnerModel : NSObject
{
    FinderMcnInfo *_mcnInfo;
    WCFinderContactServiceMenuMutableArray *_serviceMenu;
    FinderCollectionListInfo *_collectionInfo;
    WCFinderIpRegionInfo *_attrRegionInfo;
    FinderClubInfo *_clubInfo;
    FinderOriginal *_originalInfo;
    FinderJumpInfo *_storeJumpInfo;
    WCFinderProfileMemberShipInfo *_memberShipInfo;
    WCFinderProfileOverviewCache *_overviewCache;
    FinderMusicStatisticsInfo *_statisticsInfo;
    FinderProfileBanner *_warnningBanner;
    FinderUserPageSectionQAInfo *_qaInfo;
    double _allTabQASectionCacheHeight;
    double _allTabQASectionCacheWidth;
    NSMutableArray *_tabList;
    NSMutableArray *_authorTabList;
    FinderMusicRadio *_musicRadio;
    unsigned long long _extFlag;
    FinderMileStone *_milestone;
    FinderFeedBriefInfo *_briefInfo;
    WCFinderProfilePostTipsInfo *_postTipsInfo;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_authorTabList;
+ (void)PBArrayAdd_postTipsInfo;
+ (void)PBArrayAdd_briefInfo;
+ (void)PBArrayAdd_milestone;
+ (void)PBArrayAdd_extFlag;
+ (void)PBArrayAdd_musicRadio;
+ (void)PBArrayAdd_tabList;
+ (void)PBArrayAdd_allTabQASectionCacheHeight;
+ (void)PBArrayAdd_qaInfo;
+ (void)PBArrayAdd_warnningBanner;
+ (void)PBArrayAdd_statisticsInfo;
+ (void)PBArrayAdd_originalInfo;
+ (void)PBArrayAdd_overviewCache;
+ (void)PBArrayAdd_memberShipInfo;
+ (void)PBArrayAdd_storeJumpInfo;
+ (void)PBArrayAdd_clubInfo;
+ (void)PBArrayAdd_attrRegionInfo;
+ (void)PBArrayAdd_collectionInfo;
+ (void)PBArrayAdd_serviceMenu;
+ (void)PBArrayAdd_mcnInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProfilePostTipsInfo *postTipsInfo; // @synthesize postTipsInfo=_postTipsInfo;
@property(retain, nonatomic) FinderFeedBriefInfo *briefInfo; // @synthesize briefInfo=_briefInfo;
@property(retain, nonatomic) FinderMileStone *milestone; // @synthesize milestone=_milestone;
@property(nonatomic) unsigned long long extFlag; // @synthesize extFlag=_extFlag;
@property(retain, nonatomic) FinderMusicRadio *musicRadio; // @synthesize musicRadio=_musicRadio;
@property(retain, nonatomic) NSMutableArray *authorTabList; // @synthesize authorTabList=_authorTabList;
@property(retain, nonatomic) NSMutableArray *tabList; // @synthesize tabList=_tabList;
@property(nonatomic) double allTabQASectionCacheWidth; // @synthesize allTabQASectionCacheWidth=_allTabQASectionCacheWidth;
@property(nonatomic) double allTabQASectionCacheHeight; // @synthesize allTabQASectionCacheHeight=_allTabQASectionCacheHeight;
@property(retain, nonatomic) FinderUserPageSectionQAInfo *qaInfo; // @synthesize qaInfo=_qaInfo;
@property(retain, nonatomic) FinderProfileBanner *warnningBanner; // @synthesize warnningBanner=_warnningBanner;
@property(retain, nonatomic) FinderMusicStatisticsInfo *statisticsInfo; // @synthesize statisticsInfo=_statisticsInfo;
@property(retain, nonatomic) WCFinderProfileOverviewCache *overviewCache; // @synthesize overviewCache=_overviewCache;
@property(retain, nonatomic) WCFinderProfileMemberShipInfo *memberShipInfo; // @synthesize memberShipInfo=_memberShipInfo;
@property(retain, nonatomic) FinderJumpInfo *storeJumpInfo; // @synthesize storeJumpInfo=_storeJumpInfo;
@property(retain, nonatomic) FinderOriginal *originalInfo; // @synthesize originalInfo=_originalInfo;
@property(retain, nonatomic) FinderClubInfo *clubInfo; // @synthesize clubInfo=_clubInfo;
@property(retain, nonatomic) WCFinderIpRegionInfo *attrRegionInfo; // @synthesize attrRegionInfo=_attrRegionInfo;
@property(retain, nonatomic) FinderCollectionListInfo *collectionInfo; // @synthesize collectionInfo=_collectionInfo;
@property(retain, nonatomic) WCFinderContactServiceMenuMutableArray *serviceMenu; // @synthesize serviceMenu=_serviceMenu;
@property(retain, nonatomic) FinderMcnInfo *mcnInfo; // @synthesize mcnInfo=_mcnInfo;
- (void)updateFromUserPageResponse:(id)arg1 isAuthor:(_Bool)arg2;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

