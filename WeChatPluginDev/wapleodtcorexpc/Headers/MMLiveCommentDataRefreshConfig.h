//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveCommentDataRefreshConfig : NSObject
{
    _Bool _isSpeedDifference;
    _Bool _isCustomAppendDelay;
    unsigned int _maxMsgTempCacheCnt;
    unsigned int _maxRefreshMsgCntOnce;
    unsigned int _maxRefreshHistoryMsgCntOnce;
    unsigned int _refreshHistoryMsgInterval;
    unsigned int _refreshMsgIntervalMs;
    unsigned int _minimunShowMsgLikeCnt;
    unsigned int _customRefreshFastMsgCntOnce;
    unsigned int _customRefreshSlowMsgCntOnce;
    unsigned int _customAppendMsgCntOnce;
    unsigned int _customAppendMsgCntOnceInSmoothMode;
    unsigned int _customAppendMsgCntOnceInLowPowerMode;
    unsigned int _maxFloatMsgTrackNum;
    double _appendBeginDelayDuration;
    double _linearAppendScrollSpeed;
    double _appendBeginDelayDurationInSmoothMode;
    double _appendBeginDelayDurationInLowPowerMode;
    double _landscapeBarrageMoveDuration;
    double _landscapeBarrageTriggerInterval;
}

+ (double)defaultLandscapeBarrageTriggerIntervalForTaskId:(id)arg1;
+ (double)defaultLandscapeBarrageMoveDurationForTaskId:(id)arg1;
+ (double)defaultAppendBeginDelayDurationInLowPowerModeForTaskId:(id)arg1;
+ (unsigned int)defaultCustomAppendMsgCntOnceInLowPowerModeForTaskId:(id)arg1;
+ (double)defaultAppendBeginDelayDurationInSmoothModeForTaskId:(id)arg1;
+ (unsigned int)defaultCustomAppendMsgCntOnceInSmoothModeForTaskId:(id)arg1;
+ (double)defaultLinearAppendScrollSpeedForTaskId:(id)arg1;
+ (double)defaultAppendBeginDelayDurationForTaskId:(id)arg1;
+ (unsigned int)defaultCustomAppendMsgCntOnceForTaskId:(id)arg1;
+ (_Bool)defaultCustomAppendDelayForTaskId:(id)arg1;
+ (_Bool)defaultSpeedDifferenceForTaskId:(id)arg1;
+ (unsigned int)defaultRefreshHistoryMsgIntervalForTaskId:(id)arg1;
+ (unsigned int)defaultMaxRefreshHistoryMsgCntOnceForTaskId:(id)arg1;
+ (unsigned int)defaultRefreshMsgIntervalMsForTaskId:(id)arg1;
+ (unsigned int)defaultMaxRefreshMsgCntOnceForTaskId:(id)arg1;
+ (unsigned int)defaultMaxMsgTempCacheCntForTaskId:(id)arg1 boxId:(id)arg2;
+ (unsigned int)defaultMaxMsgTempCacheCntForTaskId:(id)arg1;
@property(nonatomic) unsigned int maxFloatMsgTrackNum; // @synthesize maxFloatMsgTrackNum=_maxFloatMsgTrackNum;
@property(nonatomic) double landscapeBarrageTriggerInterval; // @synthesize landscapeBarrageTriggerInterval=_landscapeBarrageTriggerInterval;
@property(nonatomic) double landscapeBarrageMoveDuration; // @synthesize landscapeBarrageMoveDuration=_landscapeBarrageMoveDuration;
@property(nonatomic) double appendBeginDelayDurationInLowPowerMode; // @synthesize appendBeginDelayDurationInLowPowerMode=_appendBeginDelayDurationInLowPowerMode;
@property(nonatomic) unsigned int customAppendMsgCntOnceInLowPowerMode; // @synthesize customAppendMsgCntOnceInLowPowerMode=_customAppendMsgCntOnceInLowPowerMode;
@property(nonatomic) double appendBeginDelayDurationInSmoothMode; // @synthesize appendBeginDelayDurationInSmoothMode=_appendBeginDelayDurationInSmoothMode;
@property(nonatomic) unsigned int customAppendMsgCntOnceInSmoothMode; // @synthesize customAppendMsgCntOnceInSmoothMode=_customAppendMsgCntOnceInSmoothMode;
@property(nonatomic) double linearAppendScrollSpeed; // @synthesize linearAppendScrollSpeed=_linearAppendScrollSpeed;
@property(nonatomic) double appendBeginDelayDuration; // @synthesize appendBeginDelayDuration=_appendBeginDelayDuration;
@property(nonatomic) unsigned int customAppendMsgCntOnce; // @synthesize customAppendMsgCntOnce=_customAppendMsgCntOnce;
@property(nonatomic) _Bool isCustomAppendDelay; // @synthesize isCustomAppendDelay=_isCustomAppendDelay;
@property(nonatomic) _Bool isSpeedDifference; // @synthesize isSpeedDifference=_isSpeedDifference;
@property(nonatomic) unsigned int customRefreshSlowMsgCntOnce; // @synthesize customRefreshSlowMsgCntOnce=_customRefreshSlowMsgCntOnce;
@property(nonatomic) unsigned int customRefreshFastMsgCntOnce; // @synthesize customRefreshFastMsgCntOnce=_customRefreshFastMsgCntOnce;
@property(nonatomic) unsigned int minimunShowMsgLikeCnt; // @synthesize minimunShowMsgLikeCnt=_minimunShowMsgLikeCnt;
@property(nonatomic) unsigned int refreshMsgIntervalMs; // @synthesize refreshMsgIntervalMs=_refreshMsgIntervalMs;
@property(nonatomic) unsigned int refreshHistoryMsgInterval; // @synthesize refreshHistoryMsgInterval=_refreshHistoryMsgInterval;
@property(nonatomic) unsigned int maxRefreshHistoryMsgCntOnce; // @synthesize maxRefreshHistoryMsgCntOnce=_maxRefreshHistoryMsgCntOnce;
@property(nonatomic) unsigned int maxRefreshMsgCntOnce; // @synthesize maxRefreshMsgCntOnce=_maxRefreshMsgCntOnce;
@property(nonatomic) unsigned int maxMsgTempCacheCnt; // @synthesize maxMsgTempCacheCnt=_maxMsgTempCacheCnt;
- (id)initWithTaskId:(id)arg1;

@end

