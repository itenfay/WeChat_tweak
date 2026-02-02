//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderEventInfo, FinderJumpInfoArray, FinderLiveNoticeInfo, FinderLiveNoticeListInfo, FinderUserPagePoi, FinderWxAppInfo, NSArray, NSMutableSet, NSString, WCFinderBGCover, WCFinderBrandInfoArray, WCFinderIpRegionInfo, WCFinderMiniAppInfoArray, WCFinderStreamProfileExtInfoInnerModel, WCFinderStreamProfileExtInfoTagArray, WCFinderTopicInfoArray;

@interface WCFinderStreamProfileExtInfo : NSObject
{
    _Bool _logoutLock;
    _Bool _logoutDone;
    _Bool _showMentionedTab;
    _Bool _showStricker;
    _Bool _hasAcctRecommend;
    NSString *_finderUsername;
    WCFinderStreamProfileExtInfoTagArray *_userTags;
    unsigned long long _fansCount;
    unsigned long long _friendFollowCount;
    double _cacheTime;
    FinderWxAppInfo *_storeAppInfo;
    FinderLiveNoticeInfo *_liveNoticeInfo;
    FinderLiveNoticeListInfo *_liveNoticeList;
    WCFinderTopicInfoArray *_topics;
    WCFinderMiniAppInfoArray *_miniAppInfos;
    WCFinderBrandInfoArray *_brandInfos;
    FinderUserPagePoi *_poiInfo;
    FinderEventInfo *_eventInfo;
    NSString *_logoutUrl;
    long long _showTabCacheFlag;
    WCFinderBGCover *_cover;
    unsigned long long _totalLiveCount;
    unsigned long long _totalAudienceCount;
    unsigned long long _recentLiveCount;
    WCFinderIpRegionInfo *_ipRegionInfo;
    NSMutableSet *_displayTabs;
    NSMutableSet *_hiddenTabs;
    WCFinderStreamProfileExtInfoInnerModel *_innerModel;
    FinderJumpInfoArray *_jumpInfoList;
}

+ (void)__wcdb_index_29:(void *)arg1;
+ (void)__wcdb_column_constraint_28:(void *)arg1;
+ (id)swift_hiddenTabs;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (const void *)hiddenTabs;
+ (id)swift_displayTabs;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (const void *)displayTabs;
+ (id)swift_showTabCacheFlag;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)showTabCacheFlag;
+ (id)swift_innerModel;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (const void *)innerModel;
+ (id)swift_ipRegionInfo;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)ipRegionInfo;
+ (id)swift_recentLiveCount;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)recentLiveCount;
+ (id)swift_totalAudienceCount;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (const void *)totalAudienceCount;
+ (id)swift_totalLiveCount;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)totalLiveCount;
+ (id)swift_liveNoticeList;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)liveNoticeList;
+ (id)swift_jumpInfoList;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)jumpInfoList;
+ (id)swift_cover;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)cover;
+ (id)swift_showStricker;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)showStricker;
+ (id)swift_poiInfo;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)poiInfo;
+ (id)swift_showMentionedTab;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)showMentionedTab;
+ (id)swift_logoutUrl;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)logoutUrl;
+ (id)swift_logoutDone;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)logoutDone;
+ (id)swift_logoutLock;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)logoutLock;
+ (id)swift_miniAppInfos;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)miniAppInfos;
+ (id)swift_eventInfo;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)eventInfo;
+ (id)swift_brandInfos;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)brandInfos;
+ (id)swift_topics;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)topics;
+ (id)swift_liveNoticeInfo;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)liveNoticeInfo;
+ (id)swift_storeAppInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)storeAppInfo;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_userTags;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)userTags;
+ (id)swift_friendFollowCount;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)friendFollowCount;
+ (id)swift_fansCount;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)fansCount;
+ (id)swift_finderUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)finderUsername;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfoArray *jumpInfoList; // @synthesize jumpInfoList=_jumpInfoList;
@property(retain, nonatomic) WCFinderStreamProfileExtInfoInnerModel *innerModel; // @synthesize innerModel=_innerModel;
@property(retain, nonatomic) NSMutableSet *hiddenTabs; // @synthesize hiddenTabs=_hiddenTabs;
@property(retain, nonatomic) NSMutableSet *displayTabs; // @synthesize displayTabs=_displayTabs;
@property(retain, nonatomic) WCFinderIpRegionInfo *ipRegionInfo; // @synthesize ipRegionInfo=_ipRegionInfo;
@property(nonatomic) _Bool hasAcctRecommend; // @synthesize hasAcctRecommend=_hasAcctRecommend;
@property(nonatomic) unsigned long long recentLiveCount; // @synthesize recentLiveCount=_recentLiveCount;
@property(nonatomic) unsigned long long totalAudienceCount; // @synthesize totalAudienceCount=_totalAudienceCount;
@property(nonatomic) unsigned long long totalLiveCount; // @synthesize totalLiveCount=_totalLiveCount;
@property(retain, nonatomic) WCFinderBGCover *cover; // @synthesize cover=_cover;
@property(nonatomic) long long showTabCacheFlag; // @synthesize showTabCacheFlag=_showTabCacheFlag;
@property(nonatomic) _Bool showStricker; // @synthesize showStricker=_showStricker;
@property(nonatomic) _Bool showMentionedTab; // @synthesize showMentionedTab=_showMentionedTab;
@property(retain, nonatomic) NSString *logoutUrl; // @synthesize logoutUrl=_logoutUrl;
@property(nonatomic) _Bool logoutDone; // @synthesize logoutDone=_logoutDone;
@property(nonatomic) _Bool logoutLock; // @synthesize logoutLock=_logoutLock;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(retain, nonatomic) FinderUserPagePoi *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(retain, nonatomic) WCFinderBrandInfoArray *brandInfos; // @synthesize brandInfos=_brandInfos;
@property(retain, nonatomic) WCFinderMiniAppInfoArray *miniAppInfos; // @synthesize miniAppInfos=_miniAppInfos;
@property(retain, nonatomic) WCFinderTopicInfoArray *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeList; // @synthesize liveNoticeList=_liveNoticeList;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @synthesize liveNoticeInfo=_liveNoticeInfo;
@property(retain, nonatomic) FinderWxAppInfo *storeAppInfo; // @synthesize storeAppInfo=_storeAppInfo;
@property(nonatomic) double cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) unsigned long long friendFollowCount; // @synthesize friendFollowCount=_friendFollowCount;
@property(nonatomic) unsigned long long fansCount; // @synthesize fansCount=_fansCount;
@property(retain, nonatomic) WCFinderStreamProfileExtInfoTagArray *userTags; // @synthesize userTags=_userTags;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)updateFromUserPageHeader:(id)arg1 isAuthor:(_Bool)arg2;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSArray *jumpInfos;
- (void)SetMiniAppInfos:(id)arg1;
- (id)GetMiniAppInfos;
- (id)GetBrandInfos;
- (void)SetBrandInfos:(id)arg1;
- (void)updateTopics:(id)arg1 collectionInfo:(id)arg2;
- (id)initWithUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

