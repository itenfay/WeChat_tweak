//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveAliasInfo, FinderStreamPrefechTimeIntervalConf, NSArray, NSDictionary, NSMutableArray, NSString, WCFinderTipsShowEntranceExtInfo, WCFinderUserMentionModel;

@interface WCFinderSetting : NSObject
{
    _Bool _isSilencePlay;
    _Bool _shouldReinitForce;
    _Bool _showFinderRedDot;
    _Bool _showLikeFriendsLikeGuideView;
    unsigned int _latestReportNotificationStatusSecond;
    NSString *_finderContactUsername;
    NSString *_selectedFinderContactUsername;
    NSString *_svrMasterUsername;
    WCFinderUserMentionModel *_wxMentionModel;
    unsigned long long _currentUserVersion;
    unsigned long long _lastUserVersion;
    long long _latestEnterSecond;
    long long _latestLeaveSecond;
    long long _fastLeaveTimes;
    long long _latestInteractionRedDotDisplaySecond;
    long long _latestRefreshPrefetchSecond;
    long long _latestFollowRedDotDisappearSecond;
    WCFinderTipsShowEntranceExtInfo *_entranceShowInfoExtInfo;
    unsigned long long _doubleClickRefreshTipsShowCount;
    NSDictionary *_tabInfoDict;
    long long _latestRecommendRedDotDisappearSecond;
    long long _findFinderPrefetchSecond;
    FinderStreamPrefechTimeIntervalConf *_intervalConf;
    FinderLiveAliasInfo *_aliasInfo;
    long long _naerbyLatestEnterSecond;
    long long _nearbyLatestLeaveSecond;
    long long _liveLatestEnterSecond;
    long long _liveLatestLeaveSecond;
    NSArray *_finderUsernameList;
    unsigned long long _antiAddictPassSeconds;
    unsigned long long _antiAddictLastLiftCurfewTimeStamp;
    unsigned long long _antiAddictPassUpdateTimeStamp;
    unsigned long long _antiSceneTotalWatchSeconds;
    unsigned long long _antiSceneTotalWatchUpdateTimeStamp;
    NSMutableArray *_slideUpGuideExposureInfos;
    long long _latestFinderRedDotExposeSecond;
    long long _latestLiveRedDotExposeSecond;
    long long _latestFinderRedDotGotSecond;
    long long _latestLiveRedDotGotSecond;
    NSArray *_slideUpGuideConfigArr;
    NSArray *_notInterestedConfigArr;
    unsigned long long _followingCount;
    long long _followLatestLeaveSecond;
    long long _recommendLatestLeaveSecond;
    long long _machineLatestLeaveSecond;
}

+ (_Bool)isSameDay:(long long)arg1 Time2:(long long)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_followingCount;
+ (void)PBArrayAdd_svrMasterUsername;
+ (void)PBArrayAdd_selectedFinderContactUsername;
+ (void)PBArrayAdd_notInterestedConfigArr;
+ (void)PBArrayAdd_slideUpGuideConfigArr;
+ (void)PBArrayAdd_latestLiveRedDotGotSecond;
+ (void)PBArrayAdd_latestFinderRedDotGotSecond;
+ (void)PBArrayAdd_latestLiveRedDotExposeSecond;
+ (void)PBArrayAdd_latestFinderRedDotExposeSecond;
+ (void)PBArrayAdd_slideUpGuideExposureInfos;
+ (void)PBArrayAdd_antiSceneTotalWatchUpdateTimeStamp;
+ (void)PBArrayAdd_antiSceneTotalWatchSeconds;
+ (void)PBArrayAdd_antiAddictPassUpdateTimeStamp;
+ (void)PBArrayAdd_antiAddictLastLiftCurfewTimeStamp;
+ (void)PBArrayAdd_antiAddictPassSeconds;
+ (void)PBArrayAdd_latestReportNotificationStatusSecond;
+ (void)PBArrayAdd_finderUsernameList;
+ (void)PBArrayAdd_aliasInfo;
+ (void)PBArrayAdd_liveLatestLeaveSecond;
+ (void)PBArrayAdd_liveLatestEnterSecond;
+ (void)PBArrayAdd_nearbyLatestLeaveSecond;
+ (void)PBArrayAdd_naerbyLatestEnterSecond;
+ (void)PBArrayAdd_tabInfoDict;
+ (void)PBArrayAdd_intervalConf;
+ (void)PBArrayAdd_shouldReinitForce;
+ (void)PBArrayAdd_latestRecommendRedDotDisappearSecond;
+ (void)PBArrayAdd_doubleClickRefreshTipsShowCount;
+ (void)PBArrayAdd_entranceShowInfoExtInfo;
+ (void)PBArrayAdd_latestFollowRedDotDisappearSecond;
+ (void)PBArrayAdd_showLikeFriendsLikeGuideView;
+ (void)PBArrayAdd_latestRefreshPrefetchSecond;
+ (void)PBArrayAdd_latestInteractionRedDotDisplaySecond;
+ (void)PBArrayAdd_fastLeaveTimes;
+ (void)PBArrayAdd_latestLeaveSecond;
+ (void)PBArrayAdd_latestEnterSecond;
+ (void)PBArrayAdd_showFinderRedDot;
+ (void)PBArrayAdd_lastUserVersion;
+ (void)PBArrayAdd_currentUserVersion;
+ (void)PBArrayAdd_wxMentionModel;
+ (void)PBArrayAdd_isSilencePlay;
+ (void)PBArrayAdd_finderContactUsername;
- (void).cxx_destruct;
@property(nonatomic) long long machineLatestLeaveSecond; // @synthesize machineLatestLeaveSecond=_machineLatestLeaveSecond;
@property(nonatomic) long long recommendLatestLeaveSecond; // @synthesize recommendLatestLeaveSecond=_recommendLatestLeaveSecond;
@property(nonatomic) long long followLatestLeaveSecond; // @synthesize followLatestLeaveSecond=_followLatestLeaveSecond;
@property(nonatomic) unsigned long long followingCount; // @synthesize followingCount=_followingCount;
@property(retain, nonatomic) NSArray *notInterestedConfigArr; // @synthesize notInterestedConfigArr=_notInterestedConfigArr;
@property(retain, nonatomic) NSArray *slideUpGuideConfigArr; // @synthesize slideUpGuideConfigArr=_slideUpGuideConfigArr;
@property(nonatomic) long long latestLiveRedDotGotSecond; // @synthesize latestLiveRedDotGotSecond=_latestLiveRedDotGotSecond;
@property(nonatomic) long long latestFinderRedDotGotSecond; // @synthesize latestFinderRedDotGotSecond=_latestFinderRedDotGotSecond;
@property(nonatomic) long long latestLiveRedDotExposeSecond; // @synthesize latestLiveRedDotExposeSecond=_latestLiveRedDotExposeSecond;
@property(nonatomic) long long latestFinderRedDotExposeSecond; // @synthesize latestFinderRedDotExposeSecond=_latestFinderRedDotExposeSecond;
@property(retain, nonatomic) NSMutableArray *slideUpGuideExposureInfos; // @synthesize slideUpGuideExposureInfos=_slideUpGuideExposureInfos;
@property(nonatomic) unsigned long long antiSceneTotalWatchUpdateTimeStamp; // @synthesize antiSceneTotalWatchUpdateTimeStamp=_antiSceneTotalWatchUpdateTimeStamp;
@property(nonatomic) unsigned long long antiSceneTotalWatchSeconds; // @synthesize antiSceneTotalWatchSeconds=_antiSceneTotalWatchSeconds;
@property(nonatomic) unsigned long long antiAddictPassUpdateTimeStamp; // @synthesize antiAddictPassUpdateTimeStamp=_antiAddictPassUpdateTimeStamp;
@property(nonatomic) unsigned long long antiAddictLastLiftCurfewTimeStamp; // @synthesize antiAddictLastLiftCurfewTimeStamp=_antiAddictLastLiftCurfewTimeStamp;
@property(nonatomic) unsigned long long antiAddictPassSeconds; // @synthesize antiAddictPassSeconds=_antiAddictPassSeconds;
@property(nonatomic) unsigned int latestReportNotificationStatusSecond; // @synthesize latestReportNotificationStatusSecond=_latestReportNotificationStatusSecond;
@property(retain, nonatomic) NSArray *finderUsernameList; // @synthesize finderUsernameList=_finderUsernameList;
@property(nonatomic) long long liveLatestLeaveSecond; // @synthesize liveLatestLeaveSecond=_liveLatestLeaveSecond;
@property(nonatomic) long long liveLatestEnterSecond; // @synthesize liveLatestEnterSecond=_liveLatestEnterSecond;
@property(nonatomic) long long nearbyLatestLeaveSecond; // @synthesize nearbyLatestLeaveSecond=_nearbyLatestLeaveSecond;
@property(nonatomic) long long naerbyLatestEnterSecond; // @synthesize naerbyLatestEnterSecond=_naerbyLatestEnterSecond;
@property(retain, nonatomic) FinderLiveAliasInfo *aliasInfo; // @synthesize aliasInfo=_aliasInfo;
@property(retain, nonatomic) FinderStreamPrefechTimeIntervalConf *intervalConf; // @synthesize intervalConf=_intervalConf;
@property(nonatomic) long long findFinderPrefetchSecond; // @synthesize findFinderPrefetchSecond=_findFinderPrefetchSecond;
@property(nonatomic) long long latestRecommendRedDotDisappearSecond; // @synthesize latestRecommendRedDotDisappearSecond=_latestRecommendRedDotDisappearSecond;
@property(copy, nonatomic) NSDictionary *tabInfoDict; // @synthesize tabInfoDict=_tabInfoDict;
@property(nonatomic) unsigned long long doubleClickRefreshTipsShowCount; // @synthesize doubleClickRefreshTipsShowCount=_doubleClickRefreshTipsShowCount;
@property(retain, nonatomic) WCFinderTipsShowEntranceExtInfo *entranceShowInfoExtInfo; // @synthesize entranceShowInfoExtInfo=_entranceShowInfoExtInfo;
@property(nonatomic) _Bool showLikeFriendsLikeGuideView; // @synthesize showLikeFriendsLikeGuideView=_showLikeFriendsLikeGuideView;
@property(nonatomic) long long latestFollowRedDotDisappearSecond; // @synthesize latestFollowRedDotDisappearSecond=_latestFollowRedDotDisappearSecond;
@property(nonatomic) long long latestRefreshPrefetchSecond; // @synthesize latestRefreshPrefetchSecond=_latestRefreshPrefetchSecond;
@property(nonatomic) long long latestInteractionRedDotDisplaySecond; // @synthesize latestInteractionRedDotDisplaySecond=_latestInteractionRedDotDisplaySecond;
@property(nonatomic) long long fastLeaveTimes; // @synthesize fastLeaveTimes=_fastLeaveTimes;
@property(nonatomic) long long latestLeaveSecond; // @synthesize latestLeaveSecond=_latestLeaveSecond;
@property(nonatomic) long long latestEnterSecond; // @synthesize latestEnterSecond=_latestEnterSecond;
@property(nonatomic) _Bool showFinderRedDot; // @synthesize showFinderRedDot=_showFinderRedDot;
@property(nonatomic) _Bool shouldReinitForce; // @synthesize shouldReinitForce=_shouldReinitForce;
@property(nonatomic) unsigned long long lastUserVersion; // @synthesize lastUserVersion=_lastUserVersion;
@property(nonatomic) unsigned long long currentUserVersion; // @synthesize currentUserVersion=_currentUserVersion;
@property(retain, nonatomic) WCFinderUserMentionModel *wxMentionModel; // @synthesize wxMentionModel=_wxMentionModel;
@property(nonatomic) _Bool isSilencePlay; // @synthesize isSilencePlay=_isSilencePlay;
@property(copy, nonatomic) NSString *svrMasterUsername; // @synthesize svrMasterUsername=_svrMasterUsername;
@property(copy, nonatomic) NSString *selectedFinderContactUsername; // @synthesize selectedFinderContactUsername=_selectedFinderContactUsername;
@property(copy, nonatomic) NSString *finderContactUsername; // @synthesize finderContactUsername=_finderContactUsername;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (long long)getLatestLeaveSecondByTabType:(long long)arg1;
- (void)updateCurLatestLeaveSecondByTabType:(long long)arg1;
- (_Bool)needReinit;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

