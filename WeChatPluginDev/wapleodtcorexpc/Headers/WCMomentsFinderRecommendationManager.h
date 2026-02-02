//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSString, WCDataItem, WCFacade, WCMomentsFinderRecommendationInfo, WCMomentsFinderRecommendationReporter;

@interface WCMomentsFinderRecommendationManager : NSObject
{
    _Bool _enabled;
    _Bool _configurations_allowsDisplayingDynamically;
    _Bool _hasDisplayedFirstCachedItem;
    _Bool _hasFetchedRecommendationInfo;
    _Bool _isPreloading;
    WCFacade *_referredFacade;
    WCMomentsFinderRecommendationInfo *_recommendationInfo;
    WCDataItem *_recommendationPlaceholderItem;
    long long _configurations_updateConditionN;
    long long _configurations_updateConditionM;
    long long _configurations_updateTimeInterval;
    long long _configurations_displayingTimeInterval;
    NSString *_configurations_customizedSeparatorTips;
    unsigned long long _firstCachedItemID;
    NSArray *_itemIDsForMissRead;
    NSMutableSet *_freshItemIDs;
    unsigned long long _firstItemIDForRecommendationInfoUpdates;
    double _lastTimeThatFetchedRecommendationInfo;
    NSString *_preloadGroupID;
    WCMomentsFinderRecommendationReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsFinderRecommendationReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) _Bool isPreloading; // @synthesize isPreloading=_isPreloading;
@property(copy, nonatomic) NSString *preloadGroupID; // @synthesize preloadGroupID=_preloadGroupID;
@property(nonatomic) double lastTimeThatFetchedRecommendationInfo; // @synthesize lastTimeThatFetchedRecommendationInfo=_lastTimeThatFetchedRecommendationInfo;
@property(nonatomic) _Bool hasFetchedRecommendationInfo; // @synthesize hasFetchedRecommendationInfo=_hasFetchedRecommendationInfo;
@property(nonatomic) unsigned long long firstItemIDForRecommendationInfoUpdates; // @synthesize firstItemIDForRecommendationInfoUpdates=_firstItemIDForRecommendationInfoUpdates;
@property(retain, nonatomic) NSMutableSet *freshItemIDs; // @synthesize freshItemIDs=_freshItemIDs;
@property(copy, nonatomic) NSArray *itemIDsForMissRead; // @synthesize itemIDsForMissRead=_itemIDsForMissRead;
@property(nonatomic) _Bool hasDisplayedFirstCachedItem; // @synthesize hasDisplayedFirstCachedItem=_hasDisplayedFirstCachedItem;
@property(nonatomic) unsigned long long firstCachedItemID; // @synthesize firstCachedItemID=_firstCachedItemID;
@property(copy, nonatomic) NSString *configurations_customizedSeparatorTips; // @synthesize configurations_customizedSeparatorTips=_configurations_customizedSeparatorTips;
@property(nonatomic) _Bool configurations_allowsDisplayingDynamically; // @synthesize configurations_allowsDisplayingDynamically=_configurations_allowsDisplayingDynamically;
@property(nonatomic) long long configurations_displayingTimeInterval; // @synthesize configurations_displayingTimeInterval=_configurations_displayingTimeInterval;
@property(nonatomic) long long configurations_updateTimeInterval; // @synthesize configurations_updateTimeInterval=_configurations_updateTimeInterval;
@property(nonatomic) long long configurations_updateConditionM; // @synthesize configurations_updateConditionM=_configurations_updateConditionM;
@property(nonatomic) long long configurations_updateConditionN; // @synthesize configurations_updateConditionN=_configurations_updateConditionN;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) WCDataItem *recommendationPlaceholderItem; // @synthesize recommendationPlaceholderItem=_recommendationPlaceholderItem;
@property(retain, nonatomic) WCMomentsFinderRecommendationInfo *recommendationInfo; // @synthesize recommendationInfo=_recommendationInfo;
@property(nonatomic) __weak WCFacade *referredFacade; // @synthesize referredFacade=_referredFacade;
- (void)_limitedModeDidChange;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)onLimitedModeChanged;
- (void)finderRedDotDataReceiveRedDotBindObjectPathKey:(id)arg1;
- (void)onTimeLineViewMissReadJumpBtnClick;
- (void)onTimelineViewDidEndDisplayingDataItem:(id)arg1;
- (void)onTimeLineViewWillDisplayDataItem:(id)arg1;
- (void)onTimelineDidLeavePage:(id)arg1;
- (void)onTimelineWillEnterPage:(id)arg1;
- (void)onFirstPageUpdated:(unsigned long long)arg1 datas:(id)arg2 feedIds:(id)arg3 feedFlags:(id)arg4 wsGroupDict:(id)arg5;
- (void)navigateToFinderWithRecommendationInfo:(id)arg1 fromViewController:(id)arg2;
- (void)cancelPreloadingRecommendationInfoIfNeeded;
- (void)preloadRecommendationInfoIfNeeded:(id)arg1;
- (void)resetPreloadContext;
- (_Bool)hasPreloaded;
@property(nonatomic) double lastTimeThatDisplayedRecommendationInfo;
- (void)didEndDisplayingRecommendationPlaceholderItem:(id)arg1;
- (void)willDisplayRecommendationPlaceholderItem:(id)arg1;
- (void)regenerateRecommendationPlaceholderItemAfterDataItem:(id)arg1 index:(unsigned long long)arg2;
- (void)clearRecommendationInfo;
- (void)didReceiveFinderCtrlInfo:(id)arg1 tag:(id)arg2;
- (id)createRecommendationInfoWithCtrlInfo:(id)arg1;
- (void)fetchRecommendationInfo;
- (void)checkUpdateRecommendationInfoWithDataItem:(id)arg1;
- (void)calculateFirstItemIDForRecommendationInfoUpdates;
- (void)updateFreshItemIDsWithResponseDataItems:(id)arg1;
- (void)updateItemIDsForMissRead:(id)arg1;
- (void)updateFirstCacheItemDisplayStatusWithDisplayingDataItem:(id)arg1;
- (void)updateFirstCachedItemID:(unsigned long long)arg1;
- (void)beginNewSession;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

