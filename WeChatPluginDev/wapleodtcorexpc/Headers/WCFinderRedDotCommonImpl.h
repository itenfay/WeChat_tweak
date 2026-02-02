//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, WCFinderBaseCgi;

@interface WCFinderRedDotCommonImpl : NSObject
{
    _Bool _lockFinderEntranceRedDot;
    NSString *_nativeCurrentUseFinderUsername;
    NSString *_lastExchangeFinderUsername;
    NSMutableArray *_nativePiplineFilters;
    WCFinderBaseCgi *_prefetchSnsBubbleInfoCgi;
    NSMutableDictionary *_periodRedDotDic;
    NSMutableArray *_allRegisterCurrentExposePath;
    unsigned long long _nativeFilterRedDotFlag;
}

+ (long long)getTabTypeWithEntranceRedDotCtrlInfoType:(id)arg1;
+ (_Bool)containTargetPath:(id)arg1 ctrlInfo:(id)arg2;
+ (_Bool)isFinderRedDotCtrlType:(unsigned long long)arg1;
+ (_Bool)isServerNearbyLiveCtrlType:(unsigned long long)arg1;
+ (_Bool)isJumpNearbyLiveCtrlType:(unsigned long long)arg1;
+ (_Bool)isJumpNearbyPeopleCtrlType:(unsigned long long)arg1;
+ (_Bool)isJumpHotTabRedDotCtrl:(unsigned long long)arg1;
+ (_Bool)isJumpHotTabRedDotCtrlForFilter:(unsigned long long)arg1;
+ (_Bool)isServerHotTabRedDotCtrl:(unsigned long long)arg1;
+ (_Bool)isJumpFollowTabRedDotCtrl:(unsigned long long)arg1;
+ (_Bool)isServerFollowTabRedDotCtrl:(unsigned long long)arg1;
+ (_Bool)isJumpFirendTabRedDotCtrl:(unsigned long long)arg1;
+ (_Bool)isServerFriendTabRedDotCtrl:(unsigned long long)arg1;
+ (unsigned long long)redDotEntryBusinessType:(id)arg1;
+ (_Bool)isEnterRedCtrlTypeNeedCtrlInfo:(id)arg1;
+ (_Bool)isEnterRedCtrlTypeNeedSwitchTab:(unsigned long long)arg1;
+ (_Bool)isRedDotDataNearbyModule:(unsigned long long)arg1;
+ (_Bool)isReddotSearchModule:(unsigned long long)arg1;
+ (_Bool)isReddotK1KModule:(unsigned long long)arg1;
+ (_Bool)isRedDotDataTingModule:(unsigned long long)arg1;
+ (_Bool)isRedDotDataLongVideoModule:(unsigned long long)arg1;
+ (_Bool)isRedDotDataFinderPurchasedContentModule:(unsigned long long)arg1;
+ (_Bool)isRedDotDataLbsLifeModule:(unsigned long long)arg1;
+ (_Bool)isRedDotDataNewLifeModule:(unsigned long long)arg1;
+ (_Bool)isRedDotDataDiscoveryLiveModule:(unsigned long long)arg1;
+ (_Bool)isRedDotDataFinderModule:(unsigned long long)arg1;
+ (unsigned long long)redDotDataModule:(unsigned long long)arg1;
+ (id)getShouldClearTimelineRedDotPath:(id)arg1;
+ (id)genEntryRedDotPathFromBusinessType:(unsigned long long)arg1;
+ (_Bool)isUnreadRedDotCtrlInfoType:(unsigned long long)arg1;
+ (_Bool)shouldAbortAllRedDotFromActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3;
+ (_Bool)willCheckAbortPrefetchFromActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long nativeFilterRedDotFlag; // @synthesize nativeFilterRedDotFlag=_nativeFilterRedDotFlag;
@property(retain, nonatomic) NSMutableArray *allRegisterCurrentExposePath; // @synthesize allRegisterCurrentExposePath=_allRegisterCurrentExposePath;
@property(retain, nonatomic) NSMutableDictionary *periodRedDotDic; // @synthesize periodRedDotDic=_periodRedDotDic;
@property(retain, nonatomic) WCFinderBaseCgi *prefetchSnsBubbleInfoCgi; // @synthesize prefetchSnsBubbleInfoCgi=_prefetchSnsBubbleInfoCgi;
@property(copy, nonatomic) NSMutableArray *nativePiplineFilters; // @synthesize nativePiplineFilters=_nativePiplineFilters;
@property(nonatomic) _Bool lockFinderEntranceRedDot; // @synthesize lockFinderEntranceRedDot=_lockFinderEntranceRedDot;
@property(retain, nonatomic) NSString *lastExchangeFinderUsername; // @synthesize lastExchangeFinderUsername=_lastExchangeFinderUsername;
- (void)disposeRedDotCtrlInfoByTipsUuid:(id)arg1;
- (_Bool)disposeRedDotAtPath:(id)arg1;
- (void)clearSameTypeCtrlInfoType:(unsigned long long)arg1;
- (id)ctrlInfoWithType:(unsigned long long)arg1;
- (void)addNewRedDotCtrlInfo:(id)arg1;
- (void)disposeRedDotIgnoreClearTypeAtPath:(id)arg1;
- (id)ctrlInfoWithTipsUuid:(id)arg1;
- (id)currentCtrlInfoAtPath:(id)arg1;
- (void)handleFinderUsernameChangeLogic;
- (_Bool)isCurrentExposeRedDotPath:(id)arg1;
- (void)resetCurentExposeRedDotPath:(id)arg1;
- (void)removeExposeRedDotPath:(id)arg1;
- (void)addExposeRedDotPath:(id)arg1;
- (void)clearAllCurentExposeRedDotPath;
- (void)onChangeSelectedFinderUsername:(id)arg1;
- (void)preHandleRedDot:(id)arg1;
- (void)priorityOverwriteReport:(id)arg1;
- (void)pretreatmentRedDot:(id)arg1;
- (void)checkCtrlInfo:(id)arg1;
- (_Bool)enableRedDotDisposeAtPath:(id)arg1;
- (_Bool)updateShowInfoTreeReddotCount:(id)arg1;
- (_Bool)updateShowInfoTreeReddotCounTraversally:(id)arg1;
- (void)redDotHasDisposeAtPath:(id)arg1 atCtrlInfo:(id)arg2;
- (_Bool)enableUseMaxPriorityCtrlInfo:(id)arg1 atPath:(id)arg2 ignoreNMFrequency:(_Bool)arg3;
- (void)prefetchRedDotAttachInfoByCtrlInfo:(id)arg1;
- (void)checkSimulRedDotConflictFromActionType:(unsigned long long)arg1 toCtrlInfo:(id)arg2;
- (void)notifyRedDotAsActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3 toCtrlInfo:(id)arg4 disposePath:(id)arg5;
- (void)handleRedDotAfterAddActon:(id)arg1;
- (_Bool)forbidRedDotBeforeAddAction:(id)arg1;
- (id)filterRedDotInfoBeforeAddAction:(id)arg1;
- (_Bool)shouldRevokeRedDotPathInfo:(id)arg1 isOnlyWhiteList:(_Bool)arg2 whiteListTips:(id)arg3;
- (void)updateRedDotExposeAppear:(_Bool)arg1 showInfo:(id)arg2;
- (void)updateRedDotExposeAppear:(_Bool)arg1 targetPath:(id)arg2;
- (long long)getCurMemberUnreadCountByUsername:(id)arg1 fromRedDotPath:(_Bool)arg2;
- (long long)getCurFinderPrivateMsgCountByUsername:(id)arg1 fromRedDotPath:(_Bool)arg2;
- (void)setPiplineFilters:(id)arg1;
- (id)piplineFilters;
- (void)setFilterRedDotFlag:(unsigned long long)arg1;
- (unsigned long long)filterRedDotFlag;
- (long long)getCurFinderUnreadCountByUsername:(id)arg1 fromRedDotPath:(_Bool)arg2;
- (long long)getWXPrivateMsgUnreadCount;
- (long long)getCurWXUnreadCount;
- (void)syncRedDotUnreadChainInfo;
- (void)cleanPrefetchFeedInfoByTipsUuidArray:(id)arg1;
- (void)exchangeRedDotSystemToFinderUsername:(id)arg1;
- (void)updateLastExchangeFinderUsername:(id)arg1;
@property(retain, nonatomic) NSString *nativeCurrentUseFinderUsername; // @synthesize nativeCurrentUseFinderUsername=_nativeCurrentUseFinderUsername;
- (void)resetToDefaultUsername;
- (void)setCurrentUseFinderUsername:(id)arg1;
- (id)currentUseFinderUsername;
- (void)cleanPeriodRedDotListAsScene:(int)arg1 targetPath:(id)arg2;
- (void)clearTimelineAllRedDot;
- (id)currentShowInfoAtPath:(id)arg1;
- (unsigned int)increaseRedDotExpose:(id)arg1;
- (id)getTargetRedDotArrayByPath:(id)arg1;
- (void)addFinderRedDotInfoToPeriodRedDotDic:(id)arg1;
- (id)init;
- (void)checkShouldAbortFinderPrefetchFromActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

