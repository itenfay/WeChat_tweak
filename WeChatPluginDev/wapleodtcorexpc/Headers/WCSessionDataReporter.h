//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString, WCFinderTrigger, WeChatTabRedDotStruct;

@interface WCSessionDataReporter
{
    NSMutableArray *queue;
    _Bool *entryRedDotInfo;
    _Bool *entryRedDotInfoCopy;
    WCFinderTrigger *m_finderTrigger;
    NSArray *weChatTabRedDotArray;
    WeChatTabRedDotStruct *copyFindFriendsTabStruct;
    NSString *currSessionId;
    NSString *lastTwoSessionId;
    unsigned long long lastTwoSessionStayTimeMs;
    NSSet *needReportReddotUnExpPaths;
    NSMutableDictionary *needReportReddotUnExpStructs;
    unsigned long long entrySwitch;
    unsigned long long lastGetNetTypeTimeMs;
    unsigned int lastNetType;
    unsigned long long lastGetBatteryTimeMs;
    unsigned int lastBatteryLevel;
    NSString *_k1kRedDotReportJson;
    NSString *_finderRedDotReportJson;
    NSString *_finderLiveRedDotReportJson;
}

+ (int)formatStringToNumber:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSString *finderLiveRedDotReportJson; // @synthesize finderLiveRedDotReportJson=_finderLiveRedDotReportJson;
@property(copy) NSString *finderRedDotReportJson; // @synthesize finderRedDotReportJson=_finderRedDotReportJson;
@property(copy) NSString *k1kRedDotReportJson; // @synthesize k1kRedDotReportJson=_k1kRedDotReportJson;
- (unsigned int)getWeSportM7StepCount;
- (unsigned int)getWeSportHKStepCount;
- (unsigned long long)getFindFriendEntryReddotEnabledInfo;
- (void)noteFindFriendEntry:(long long)arg1 andSwitch:(_Bool)arg2;
- (void)resetFindFriendEntrySwitch;
- (unsigned long long)getFindFriendEntrySwitch;
- (unsigned int)getCacheBatteryLevel;
- (unsigned int)getCacheNetType;
- (void)onFindFriendRedDotEvent:(id)arg1;
- (void)reportReddotExpTimeOnUnExposePath:(id)arg1 andTipsUuid:(id)arg2;
- (void)reportReddotExpTimeOnExposurePath:(id)arg1 andShowInfo:(id)arg2 andCtrlInfo:(id)arg3;
- (unsigned int)genDayStr:(unsigned long long)arg1;
- (void)reportExposeLimitStrategy:(id)arg1 andAction:(unsigned int)arg2;
- (unsigned int)checkFinderTipsShowInfo:(id)arg1;
- (void)checkRedDotExposeLimitWithPath:(id)arg1;
- (void)checkRedDotExposeLimitWhenQuit:(id)arg1 andToSid:(id)arg2 andIgnoreSid:(unsigned int)arg3;
- (_Bool)checkRedDotExposeLimitWhenEnter:(id)arg1;
- (_Bool)checkRedDotColdTimeWhenEnter:(id)arg1;
- (void)disposeRedDotAtPath:(id)arg1;
- (void)finderSync;
- (void)checkRedDotExposeLimitWhenQuit:(id)arg1;
- (_Bool)checkRedDotExposeLimitWhenEnterForTing;
- (_Bool)checkRedDotExposeLimitWhenEnterForPath:(id)arg1;
- (_Bool)checkRedDotExposeLimitWhenEnterForSearchSync;
- (_Bool)checkRedDotExposeLimitWhenEnterForNewLifeSync;
- (_Bool)checkRedDotExposeLimitWhenEnter;
- (_Bool)checkRedDotIfInColdTimeWhenEnter;
- (_Bool)noteFinderRedDotExpose;
- (void)finderRedDotLogic;
- (id)getFinderRedDotJson:(id)arg1;
- (void)noteFinderRedDotReportJson;
- (void)quitFindFriendEntryController:(id)arg1 andCurr:(id)arg2 andNext:(id)arg3;
- (void)enterFindFriendEntryController:(id)arg1 andCurr:(id)arg2 andNext:(id)arg3;
- (void)quitNewMainFrameViewController:(id)arg1 andCurr:(id)arg2 andNext:(id)arg3;
- (void)enterNewMainFrameViewController:(id)arg1 andCurr:(id)arg2 andNext:(id)arg3;
- (void)handleFindFriendEntryController:(id)arg1 andCurr:(id)arg2 andNext:(id)arg3;
- (void)handleNewMainFrameViewController:(id)arg1 andCurr:(id)arg2 andNext:(id)arg3;
- (void)reportFindFrindEntry:(id)arg1 andNext:(id)arg2 andLast:(id)arg3;
- (void)checkSessionData;
- (void)copyFindFriendTabStruct;
- (id)getCopyEntryRedDotInfo;
- (void)copyEntryRedDotInfo;
- (void)handleSessionEvent:(id)arg1 withEnterTime:(unsigned long long)arg2;
- (_Bool)isFindFriendsTabHadRedDot;
- (void)noteTabBarBadge:(_Bool)arg1 andTotalCount:(long long)arg2 andTabIndex:(unsigned int)arg3;
- (void)noteFindFriendEntryRedDot:(long long)arg1 andHadRedDot:(_Bool)arg2;
- (void)onSessionEnter:(id)arg1 withTime:(unsigned long long)arg2;
- (unsigned long long)getLastTwoSessionStayTimeMs;
- (int)getLastTwoSessionId;
- (int)getCurrSessionId;
- (id)checkToReturnAiFinderInfo;
- (void)resetInfo;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)setDsEnterToFrontFirstTimeMs;
- (unsigned long long)getDsEnterToFrontFirstTimeMs;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

