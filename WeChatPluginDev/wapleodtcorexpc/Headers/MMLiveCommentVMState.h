//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveBoxId, MMLiveTaskId;

@interface MMLiveCommentVMState : NSObject
{
    _Bool _isCustomAppendData;
    _Bool _enableCustomAppendData;
    _Bool _isDisplayUnReadCount;
    _Bool _isInSmoothMode;
    _Bool _isInLowPowerMode;
    _Bool _needEnterLowFrequencyRefreshMode;
    _Bool _isInLowFrequencyRefreshMode;
    _Bool _isRefreshLowFrequencyDistanceData;
    _Bool _isAppendLowFrequencyDistanceData;
    unsigned long long _enableAdjustPerformanceMode;
    CDUnknownBlockType _getCommentVMUnMergeCount;
    MMLiveTaskId *_taskId;
    FinderLiveBoxId *_boxId;
    unsigned long long _maxAppendLineCount;
    double _twoLinesEndDelay;
    double _threeLinesEndDelay;
    double _fourLinesEndDelay;
    double _lowFrequencyModeEnterTime;
    double _lowFrequencyModeLastDuration;
    unsigned long long _lowFrequencyDistanceCnt;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAppendLowFrequencyDistanceData; // @synthesize isAppendLowFrequencyDistanceData=_isAppendLowFrequencyDistanceData;
@property(nonatomic) _Bool isRefreshLowFrequencyDistanceData; // @synthesize isRefreshLowFrequencyDistanceData=_isRefreshLowFrequencyDistanceData;
@property(nonatomic) unsigned long long lowFrequencyDistanceCnt; // @synthesize lowFrequencyDistanceCnt=_lowFrequencyDistanceCnt;
@property(nonatomic) double lowFrequencyModeLastDuration; // @synthesize lowFrequencyModeLastDuration=_lowFrequencyModeLastDuration;
@property(nonatomic) double lowFrequencyModeEnterTime; // @synthesize lowFrequencyModeEnterTime=_lowFrequencyModeEnterTime;
@property(nonatomic) _Bool isInLowFrequencyRefreshMode; // @synthesize isInLowFrequencyRefreshMode=_isInLowFrequencyRefreshMode;
@property(nonatomic) double fourLinesEndDelay; // @synthesize fourLinesEndDelay=_fourLinesEndDelay;
@property(nonatomic) double threeLinesEndDelay; // @synthesize threeLinesEndDelay=_threeLinesEndDelay;
@property(nonatomic) double twoLinesEndDelay; // @synthesize twoLinesEndDelay=_twoLinesEndDelay;
@property(nonatomic) unsigned long long maxAppendLineCount; // @synthesize maxAppendLineCount=_maxAppendLineCount;
@property(retain, nonatomic) FinderLiveBoxId *boxId; // @synthesize boxId=_boxId;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType getCommentVMUnMergeCount; // @synthesize getCommentVMUnMergeCount=_getCommentVMUnMergeCount;
@property(nonatomic) unsigned long long enableAdjustPerformanceMode; // @synthesize enableAdjustPerformanceMode=_enableAdjustPerformanceMode;
@property(nonatomic) _Bool needEnterLowFrequencyRefreshMode; // @synthesize needEnterLowFrequencyRefreshMode=_needEnterLowFrequencyRefreshMode;
@property(nonatomic) _Bool isInLowPowerMode; // @synthesize isInLowPowerMode=_isInLowPowerMode;
@property(nonatomic) _Bool isInSmoothMode; // @synthesize isInSmoothMode=_isInSmoothMode;
@property(nonatomic) _Bool isDisplayUnReadCount; // @synthesize isDisplayUnReadCount=_isDisplayUnReadCount;
@property(nonatomic) _Bool enableCustomAppendData; // @synthesize enableCustomAppendData=_enableCustomAppendData;
@property(nonatomic) _Bool isCustomAppendData; // @synthesize isCustomAppendData=_isCustomAppendData;
- (void)updateLowFrequencyDistanceCnt:(unsigned long long)arg1;
- (void)checkLowFrequencyDistanceDataHasHandled;
- (void)onDistanceDataKeepProgressAppended;
- (void)onDistanceDataKeepProgressRefreshed;
- (_Bool)hasDistanceDataToKeepProgress;
- (_Bool)hasDistanceDataForAppendToKeepProgress;
- (_Bool)hasDistanceDataForRefreshToKeepProgress;
- (void)exitLowFrequencyRefreshModeWithKeepProgress:(_Bool)arg1;
- (void)enterLowFrequencyRefreshModeIfNeeded;
- (double)getActualScrollSpeed;
- (unsigned long long)getCurrentScrollMode;
- (unsigned int)estimateRefreshCommentCountOnce;
- (double)getIntervalNormalizedScale:(double)arg1;
- (double)getEstimateInterval;
- (double)estimateRefreshInterval;
- (double)getLinearScrollFastSpeed;
- (_Bool)isCurrentLinearScrollSpeed;
- (_Bool)isLinearScrollSpeed:(double)arg1;
- (_Bool)isSpeedUseCustomLinearScroll:(double)arg1;
- (double)getScrollSpeed;
- (unsigned long long)getSumContentLines:(id)arg1;
- (unsigned long long)getAppendCountWithCellFrameArray:(id)arg1;
- (double)getCustomAppendPubbleCellInitTopForIndex:(unsigned long long)arg1 finderCellFrames:(id)arg2;
- (double)getCustomAppendDurationForIndex:(unsigned long long)arg1 finderCellFrames:(id)arg2;
- (double)getEndDelayDurationForFinderCellFrames:(id)arg1;
- (_Bool)hasRank:(id)arg1;
- (double)getBeginDelayDurationForFinderCellFrames:(id)arg1 lastCustomAppendLines:(long long)arg2;
- (void)keepProgressAfterExitPowerMode;
- (void)updateIsInLowFrequencyRefreshMode;
- (unsigned long long)getCurrAppendSpeedForPrivateBox;
- (unsigned long long)getCurrAppendSpeedToRefreshForPublicBox;
- (unsigned long long)getCurrAppendSpeedForPublicBox;
- (double)getAppendBeginDuration;
@property(readonly, nonatomic) unsigned long long currUnMergeCnt;
- (unsigned long long)currAppendSpeedToRefresh;
@property(readonly, nonatomic) unsigned long long currAppendSpeed;
- (id)commentDataMgr;
@property(readonly, nonatomic) _Bool isCommentAppendEndDelay;
@property(readonly, nonatomic) _Bool isCommentAppendBeginDelay;
- (void)initData;
- (id)initWithTaskId:(id)arg1 boxId:(id)arg2;

@end

