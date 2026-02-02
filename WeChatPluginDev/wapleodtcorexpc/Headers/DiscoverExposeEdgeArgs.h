//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DiscoverExposeEdgeArgs : NSObject
{
    unsigned int _finderCtrlType;
    unsigned int _finderShowType;
    unsigned int _finderExposeCount;
    unsigned int _isShowFinderBool;
    unsigned int _isShowFinderRedDotBool;
    unsigned int _liveCtrlType;
    unsigned int _liveShowType;
    unsigned int _liveExposeCount;
    unsigned int _isShowLiveBool;
    unsigned int _isShowLiveRedDotBool;
    unsigned int _newMsgOpenWechatBool;
    unsigned int _finderCacheSize;
    unsigned int _liveCacheSize;
    unsigned int _calendarFinderSyncCount;
    unsigned int _calendarLiveSyncCount;
    unsigned int _calendarMixSyncCount;
    unsigned int _calendarTotalSyncCount;
    unsigned int _calendarDiscoverExposeCount;
    unsigned int _calendarFinderRedDotFirstExposeCtrlType;
    unsigned int _calendarFinderRedDotExposeCount;
    unsigned int _calendarFinderRedDotTipsIdExposeCount;
    unsigned int _calendarFinderEnterCount;
    unsigned int _calendarFinderEnterCountWithRedDot;
    unsigned int _calendarFinderStayTimeSec;
    unsigned int _calendarLiveRedDotFirstExposeCtrlType;
    unsigned int _calendarLiveRedDotExposeCount;
    unsigned int _calendarLiveRedDotTipsIdExposeCount;
    unsigned int _calendarLiveEnterCount;
    unsigned int _calendarLiveEnterCountWithRedDot;
    unsigned int _calendarLiveStayTimeSec;
    unsigned int _finderPushType;
    unsigned int _finderIgnoreFreq;
    unsigned int _liveSubRecallType;
    unsigned int _liveIgnoreFreq;
    unsigned int _isHeadset;
    unsigned int _currBattery;
    unsigned int _finderDropRedDotCount;
    unsigned int _finderDeepReadCount;
    NSString *_finderTipsId;
    unsigned long long _finderReceTimeMs;
    unsigned long long _finderExposeFirstSec;
    unsigned long long _lastReceFinderRedDotMs;
    unsigned long long _lastFinderRedDotExposeMs;
    unsigned long long _lastEnterFinderMs;
    unsigned long long _lastExitFinderMs;
    NSString *_liveTipsId;
    unsigned long long _liveReceTimeMs;
    unsigned long long _liveExposeFirstSec;
    unsigned long long _lastReceLiveRedDotMs;
    unsigned long long _lastLiveRedDotExposeMs;
    unsigned long long _lastEnterLiveMs;
    unsigned long long _lastExitLiverMs;
    NSString *_fromSid;
    unsigned long long _fromSidStayTimeMs;
    unsigned long long _enterMs;
    NSString *_findFriendsEntryRedDot;
    NSString *_netType;
    unsigned long long _lastFinderSyncMs;
    unsigned long long _calendarDiscoverFirstExposeTimeMs;
    unsigned long long _calendarFinderRedDotFirstExposeTimeMs;
    unsigned long long _calendarLiveRedDotFirstExposeTimeMs;
    NSString *_finderPushScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int finderDeepReadCount; // @synthesize finderDeepReadCount=_finderDeepReadCount;
@property(nonatomic) unsigned int finderDropRedDotCount; // @synthesize finderDropRedDotCount=_finderDropRedDotCount;
@property(nonatomic) unsigned int currBattery; // @synthesize currBattery=_currBattery;
@property(nonatomic) unsigned int isHeadset; // @synthesize isHeadset=_isHeadset;
@property(nonatomic) unsigned int liveIgnoreFreq; // @synthesize liveIgnoreFreq=_liveIgnoreFreq;
@property(nonatomic) unsigned int liveSubRecallType; // @synthesize liveSubRecallType=_liveSubRecallType;
@property(nonatomic) unsigned int finderIgnoreFreq; // @synthesize finderIgnoreFreq=_finderIgnoreFreq;
@property(retain, nonatomic) NSString *finderPushScene; // @synthesize finderPushScene=_finderPushScene;
@property(nonatomic) unsigned int finderPushType; // @synthesize finderPushType=_finderPushType;
@property(nonatomic) unsigned int calendarLiveStayTimeSec; // @synthesize calendarLiveStayTimeSec=_calendarLiveStayTimeSec;
@property(nonatomic) unsigned int calendarLiveEnterCountWithRedDot; // @synthesize calendarLiveEnterCountWithRedDot=_calendarLiveEnterCountWithRedDot;
@property(nonatomic) unsigned int calendarLiveEnterCount; // @synthesize calendarLiveEnterCount=_calendarLiveEnterCount;
@property(nonatomic) unsigned int calendarLiveRedDotTipsIdExposeCount; // @synthesize calendarLiveRedDotTipsIdExposeCount=_calendarLiveRedDotTipsIdExposeCount;
@property(nonatomic) unsigned int calendarLiveRedDotExposeCount; // @synthesize calendarLiveRedDotExposeCount=_calendarLiveRedDotExposeCount;
@property(nonatomic) unsigned int calendarLiveRedDotFirstExposeCtrlType; // @synthesize calendarLiveRedDotFirstExposeCtrlType=_calendarLiveRedDotFirstExposeCtrlType;
@property(nonatomic) unsigned long long calendarLiveRedDotFirstExposeTimeMs; // @synthesize calendarLiveRedDotFirstExposeTimeMs=_calendarLiveRedDotFirstExposeTimeMs;
@property(nonatomic) unsigned int calendarFinderStayTimeSec; // @synthesize calendarFinderStayTimeSec=_calendarFinderStayTimeSec;
@property(nonatomic) unsigned int calendarFinderEnterCountWithRedDot; // @synthesize calendarFinderEnterCountWithRedDot=_calendarFinderEnterCountWithRedDot;
@property(nonatomic) unsigned int calendarFinderEnterCount; // @synthesize calendarFinderEnterCount=_calendarFinderEnterCount;
@property(nonatomic) unsigned int calendarFinderRedDotTipsIdExposeCount; // @synthesize calendarFinderRedDotTipsIdExposeCount=_calendarFinderRedDotTipsIdExposeCount;
@property(nonatomic) unsigned int calendarFinderRedDotExposeCount; // @synthesize calendarFinderRedDotExposeCount=_calendarFinderRedDotExposeCount;
@property(nonatomic) unsigned int calendarFinderRedDotFirstExposeCtrlType; // @synthesize calendarFinderRedDotFirstExposeCtrlType=_calendarFinderRedDotFirstExposeCtrlType;
@property(nonatomic) unsigned long long calendarFinderRedDotFirstExposeTimeMs; // @synthesize calendarFinderRedDotFirstExposeTimeMs=_calendarFinderRedDotFirstExposeTimeMs;
@property(nonatomic) unsigned int calendarDiscoverExposeCount; // @synthesize calendarDiscoverExposeCount=_calendarDiscoverExposeCount;
@property(nonatomic) unsigned long long calendarDiscoverFirstExposeTimeMs; // @synthesize calendarDiscoverFirstExposeTimeMs=_calendarDiscoverFirstExposeTimeMs;
@property(nonatomic) unsigned int calendarTotalSyncCount; // @synthesize calendarTotalSyncCount=_calendarTotalSyncCount;
@property(nonatomic) unsigned int calendarMixSyncCount; // @synthesize calendarMixSyncCount=_calendarMixSyncCount;
@property(nonatomic) unsigned int calendarLiveSyncCount; // @synthesize calendarLiveSyncCount=_calendarLiveSyncCount;
@property(nonatomic) unsigned int calendarFinderSyncCount; // @synthesize calendarFinderSyncCount=_calendarFinderSyncCount;
@property(nonatomic) unsigned long long lastFinderSyncMs; // @synthesize lastFinderSyncMs=_lastFinderSyncMs;
@property(nonatomic) unsigned int liveCacheSize; // @synthesize liveCacheSize=_liveCacheSize;
@property(nonatomic) unsigned int finderCacheSize; // @synthesize finderCacheSize=_finderCacheSize;
@property(nonatomic) unsigned int newMsgOpenWechatBool; // @synthesize newMsgOpenWechatBool=_newMsgOpenWechatBool;
@property(retain, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(retain, nonatomic) NSString *findFriendsEntryRedDot; // @synthesize findFriendsEntryRedDot=_findFriendsEntryRedDot;
@property(nonatomic) unsigned long long enterMs; // @synthesize enterMs=_enterMs;
@property(nonatomic) unsigned long long fromSidStayTimeMs; // @synthesize fromSidStayTimeMs=_fromSidStayTimeMs;
@property(retain, nonatomic) NSString *fromSid; // @synthesize fromSid=_fromSid;
@property(nonatomic) unsigned int isShowLiveRedDotBool; // @synthesize isShowLiveRedDotBool=_isShowLiveRedDotBool;
@property(nonatomic) unsigned int isShowLiveBool; // @synthesize isShowLiveBool=_isShowLiveBool;
@property(nonatomic) unsigned long long lastExitLiverMs; // @synthesize lastExitLiverMs=_lastExitLiverMs;
@property(nonatomic) unsigned long long lastEnterLiveMs; // @synthesize lastEnterLiveMs=_lastEnterLiveMs;
@property(nonatomic) unsigned long long lastLiveRedDotExposeMs; // @synthesize lastLiveRedDotExposeMs=_lastLiveRedDotExposeMs;
@property(nonatomic) unsigned long long lastReceLiveRedDotMs; // @synthesize lastReceLiveRedDotMs=_lastReceLiveRedDotMs;
@property(nonatomic) unsigned long long liveExposeFirstSec; // @synthesize liveExposeFirstSec=_liveExposeFirstSec;
@property(nonatomic) unsigned int liveExposeCount; // @synthesize liveExposeCount=_liveExposeCount;
@property(nonatomic) unsigned long long liveReceTimeMs; // @synthesize liveReceTimeMs=_liveReceTimeMs;
@property(nonatomic) unsigned int liveShowType; // @synthesize liveShowType=_liveShowType;
@property(nonatomic) unsigned int liveCtrlType; // @synthesize liveCtrlType=_liveCtrlType;
@property(retain, nonatomic) NSString *liveTipsId; // @synthesize liveTipsId=_liveTipsId;
@property(nonatomic) unsigned int isShowFinderRedDotBool; // @synthesize isShowFinderRedDotBool=_isShowFinderRedDotBool;
@property(nonatomic) unsigned int isShowFinderBool; // @synthesize isShowFinderBool=_isShowFinderBool;
@property(nonatomic) unsigned long long lastExitFinderMs; // @synthesize lastExitFinderMs=_lastExitFinderMs;
@property(nonatomic) unsigned long long lastEnterFinderMs; // @synthesize lastEnterFinderMs=_lastEnterFinderMs;
@property(nonatomic) unsigned long long lastFinderRedDotExposeMs; // @synthesize lastFinderRedDotExposeMs=_lastFinderRedDotExposeMs;
@property(nonatomic) unsigned long long lastReceFinderRedDotMs; // @synthesize lastReceFinderRedDotMs=_lastReceFinderRedDotMs;
@property(nonatomic) unsigned long long finderExposeFirstSec; // @synthesize finderExposeFirstSec=_finderExposeFirstSec;
@property(nonatomic) unsigned int finderExposeCount; // @synthesize finderExposeCount=_finderExposeCount;
@property(nonatomic) unsigned long long finderReceTimeMs; // @synthesize finderReceTimeMs=_finderReceTimeMs;
@property(nonatomic) unsigned int finderShowType; // @synthesize finderShowType=_finderShowType;
@property(nonatomic) unsigned int finderCtrlType; // @synthesize finderCtrlType=_finderCtrlType;
@property(retain, nonatomic) NSString *finderTipsId; // @synthesize finderTipsId=_finderTipsId;
- (id)debugInfo;
- (id)toArgs;
- (void)collectByEvent:(id)arg1 andStayTimeMs:(unsigned long long)arg2;

@end

