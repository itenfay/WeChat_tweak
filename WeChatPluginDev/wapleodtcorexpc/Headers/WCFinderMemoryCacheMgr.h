//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderCheckPrefetchConfig, MMLRUCache, NSMutableArray, NSMutableDictionary, WCFinderFeedContentVM, WCFinderVideoPlayDisplayReportInfo;

@interface WCFinderMemoryCacheMgr : NSObject
{
    double _shareListShowNetTipsTimestap;
    WCFinderFeedContentVM *_lastExposeContentVM;
    WCFinderVideoPlayDisplayReportInfo *_currentDisplayVideoInfo;
    MMLRUCache *_hotCommentInfoCache;
    MMLRUCache *_originalSoundInfoCache;
    MMLRUCache *_surveyTaskDataWrapCache;
    MMLRUCache *_dataReportSDKCgiInfoCache;
    FinderCheckPrefetchConfig *_chekcPrefetchConfig;
    MMLRUCache *_clubInfoCache;
    MMLRUCache *_jumpCarouselInfoCache;
    MMLRUCache *_interestFeedsCache;
    MMLRUCache *_liveStateCache;
    MMLRUCache *_exportIdFeedCache;
    MMLRUCache *_promotionInfoCache;
    MMLRUCache *_alertInfosCache;
    MMLRUCache *_extendDynmicWordingCache;
    NSMutableArray *_fastSwipeTimeStampArray;
    NSMutableArray *_swipeActionTimeStampArray;
    long long _lastFastSwipeFeedIndex;
    long long _lastFastSwipeTabType;
    NSMutableDictionary *_pathRedDotDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pathRedDotDic; // @synthesize pathRedDotDic=_pathRedDotDic;
@property(nonatomic) long long lastFastSwipeTabType; // @synthesize lastFastSwipeTabType=_lastFastSwipeTabType;
@property(nonatomic) long long lastFastSwipeFeedIndex; // @synthesize lastFastSwipeFeedIndex=_lastFastSwipeFeedIndex;
@property(retain, nonatomic) NSMutableArray *swipeActionTimeStampArray; // @synthesize swipeActionTimeStampArray=_swipeActionTimeStampArray;
@property(retain, nonatomic) NSMutableArray *fastSwipeTimeStampArray; // @synthesize fastSwipeTimeStampArray=_fastSwipeTimeStampArray;
@property(retain, nonatomic) MMLRUCache *extendDynmicWordingCache; // @synthesize extendDynmicWordingCache=_extendDynmicWordingCache;
@property(retain, nonatomic) MMLRUCache *alertInfosCache; // @synthesize alertInfosCache=_alertInfosCache;
@property(retain, nonatomic) MMLRUCache *promotionInfoCache; // @synthesize promotionInfoCache=_promotionInfoCache;
@property(retain, nonatomic) MMLRUCache *exportIdFeedCache; // @synthesize exportIdFeedCache=_exportIdFeedCache;
@property(retain, nonatomic) MMLRUCache *liveStateCache; // @synthesize liveStateCache=_liveStateCache;
@property(retain, nonatomic) MMLRUCache *interestFeedsCache; // @synthesize interestFeedsCache=_interestFeedsCache;
@property(retain, nonatomic) MMLRUCache *jumpCarouselInfoCache; // @synthesize jumpCarouselInfoCache=_jumpCarouselInfoCache;
@property(retain, nonatomic) MMLRUCache *clubInfoCache; // @synthesize clubInfoCache=_clubInfoCache;
@property(retain, nonatomic) FinderCheckPrefetchConfig *chekcPrefetchConfig; // @synthesize chekcPrefetchConfig=_chekcPrefetchConfig;
@property(retain, nonatomic) MMLRUCache *dataReportSDKCgiInfoCache; // @synthesize dataReportSDKCgiInfoCache=_dataReportSDKCgiInfoCache;
@property(retain, nonatomic) MMLRUCache *surveyTaskDataWrapCache; // @synthesize surveyTaskDataWrapCache=_surveyTaskDataWrapCache;
@property(retain, nonatomic) MMLRUCache *originalSoundInfoCache; // @synthesize originalSoundInfoCache=_originalSoundInfoCache;
@property(retain, nonatomic) MMLRUCache *hotCommentInfoCache; // @synthesize hotCommentInfoCache=_hotCommentInfoCache;
@property(retain, nonatomic) WCFinderVideoPlayDisplayReportInfo *currentDisplayVideoInfo; // @synthesize currentDisplayVideoInfo=_currentDisplayVideoInfo;
@property(retain, nonatomic) WCFinderFeedContentVM *lastExposeContentVM; // @synthesize lastExposeContentVM=_lastExposeContentVM;
@property(nonatomic) double shareListShowNetTipsTimestap; // @synthesize shareListShowNetTipsTimestap=_shareListShowNetTipsTimestap;
- (id)getAlertInfoWithTid:(id)arg1;
- (void)updateWarningAlertInfoWithTid:(id)arg1 alertInfo:(id)arg2;
- (void)setLiveRedDotCtrlInfos:(id)arg1 withPath:(id)arg2;
- (id)getLiveRedDotCtrlInfosWithPath:(id)arg1;
- (void)setShowExtendDynamicWordingWithTid:(id)arg1;
- (_Bool)hasShowExtendDynamicWordingWithTid:(id)arg1;
- (id)getPromotionWithTid:(id)arg1;
- (void)updatePromotionWithTid:(id)arg1 promotion:(id)arg2;
- (long long)getRecentSwipeFeedCountFrom:(long long)arg1;
- (void)resetSwipeFeedContainer;
- (void)dottingSwipeFeedAction;
- (long long)getRecentFastSwipeDottingCountFrom:(long long)arg1;
- (void)resetFastSwipeContainer;
- (void)dottingFastSwipeActionAtSection:(long long)arg1 contentTid:(id)arg2;
- (void)stopCurrentPlayVideoInfo:(id)arg1;
- (void)updateCurrentPlayVideoInfo:(id)arg1 playbackInfo:(id)arg2;
- (id)getExportIdForFeedKey:(id)arg1;
- (void)updateFeedKey:(id)arg1 exportIdValue:(id)arg2;
- (void)setClubChatRoomInfo:(id)arg1 chatRoomId:(id)arg2;
- (id)getClubChatRoomInfoWithChatRoomId:(id)arg1;
- (id)feedValidityConfig;
- (void)updateCheckFeedValidityConfig:(id)arg1;
- (_Bool)getBoolDataReportCache:(id)arg1 defaultValue:(_Bool)arg2;
- (unsigned long long)getUInt64DataReportCache:(id)arg1 defaultValue:(unsigned long long)arg2;
- (id)getSrtingDataReportCache:(id)arg1 defaultValue:(id)arg2;
- (id)getDataReportCache:(id)arg1;
- (void)setDataReportCache:(id)arg1 value:(id)arg2;
- (id)surveyTaskDataWrapForTaskID:(id)arg1;
- (void)setSurveyTaskDataWrap:(id)arg1 forTaskID:(id)arg2;
- (id)originalSoundInfoForFeedID:(id)arg1;
- (void)updateOriginalSoundInfoWithFeedID:(id)arg1 originalSoundInfo:(id)arg2;
- (id)getAllSurveyTaskDataWraps;
- (id)hotCommentListForTid:(id)arg1;
- (void)cleanHotCommentListWithFeedID:(id)arg1;
- (void)updateHotCommentListWithFeedID:(id)arg1 hotCommentList:(id)arg2;
- (_Bool)isLiveClosedWithTid:(id)arg1;
- (void)setLiveClosedWithTid:(id)arg1;
- (id)jumpInfoListForTid:(id)arg1;
- (void)updateJumpCarouselListWithFeedID:(id)arg1 jumpInfoList:(id)arg2;
- (id)interestFeedsCacheForIDStr:(id)arg1;
- (void)updateInterestFeedsCacheWithIDStr:(id)arg1 interestFeedListVM:(id)arg2;
- (id)init;

@end

