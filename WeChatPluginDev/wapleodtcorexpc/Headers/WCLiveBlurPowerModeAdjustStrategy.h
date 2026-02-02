//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, NSArray, NSString, WCLiveBlurPowerModeAdjustParam;

@interface WCLiveBlurPowerModeAdjustStrategy : NSObject
{
    NSString *_rootId;
    CDUnknownBlockType _badScoreCntOverLimitBlock;
    CDUnknownBlockType _ordinaryScoreCntOverLimitBlock;
    CDUnknownBlockType _adjustParamChangeBlock;
    MMLiveTaskId *_taskId;
    WCLiveBlurPowerModeAdjustParam *_currentAdjustParam;
    unsigned long long _currBadScoreCnt;
    unsigned long long _currOrdinaryScoreCnt;
    unsigned long long _currAdjustedCheckNumIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currAdjustedCheckNumIndex; // @synthesize currAdjustedCheckNumIndex=_currAdjustedCheckNumIndex;
@property(nonatomic) unsigned long long currOrdinaryScoreCnt; // @synthesize currOrdinaryScoreCnt=_currOrdinaryScoreCnt;
@property(nonatomic) unsigned long long currBadScoreCnt; // @synthesize currBadScoreCnt=_currBadScoreCnt;
@property(retain, nonatomic) WCLiveBlurPowerModeAdjustParam *currentAdjustParam; // @synthesize currentAdjustParam=_currentAdjustParam;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType adjustParamChangeBlock; // @synthesize adjustParamChangeBlock=_adjustParamChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType ordinaryScoreCntOverLimitBlock; // @synthesize ordinaryScoreCntOverLimitBlock=_ordinaryScoreCntOverLimitBlock;
@property(copy, nonatomic) CDUnknownBlockType badScoreCntOverLimitBlock; // @synthesize badScoreCntOverLimitBlock=_badScoreCntOverLimitBlock;
@property(retain, nonatomic) NSString *rootId; // @synthesize rootId=_rootId;
- (_Bool)isSilenceHandle;
- (double)similarStandardRate;
@property(readonly, nonatomic) double similarColorDistance;
@property(readonly, nonatomic) double similarContrastRatio;
@property(readonly, nonatomic) unsigned long long sumWeakScoreMaxCnt;
@property(readonly, nonatomic) unsigned long long maxStaticBlurEnterCheckCnt;
@property(readonly, nonatomic) unsigned long long currStaticBlurEnterCheckCnt;
@property(readonly, nonatomic) _Bool isAdjustFailed;
@property(readonly, nonatomic) unsigned long long enhanceCheckNumOrdinaryScoreStandardCnt;
@property(readonly, nonatomic) unsigned long long enhanceCheckNumBadScoreStandardCnt;
@property(readonly, nonatomic) unsigned long long maxRealTimeBlurEnterColorDisCheckCnt;
@property(readonly, nonatomic) unsigned long long maxRealTimeBlurEnterContrastCheckCnt;
@property(readonly, nonatomic) unsigned long long currRealTimeBlurEnterColorDisCheckCnt;
@property(readonly, nonatomic) unsigned long long currRealTimeBlurEnterContrastCheckCnt;
@property(readonly, nonatomic) NSArray *staticBlurEnterCheckNumList;
@property(readonly, nonatomic) unsigned long long ordinaryScoreMaxCnt;
@property(readonly, nonatomic) unsigned long long badScoreMaxCnt;
@property(readonly, nonatomic) double goodScoreAnalysisTime;
@property(readonly, nonatomic) double badScoreAnalysisTime;
- (void)checkAdjustParamEmpty;
- (void)increaseOrdinaryScoreCntWithCheckLimit;
- (void)clearOrdinaryScoreRecords;
- (void)increaseBadScoreCntWithCheckLimit;
- (void)clearBadScoreRecords;
- (_Bool)reduceCheckNumIfNeeded;
- (_Bool)enhanceCheckNumIfNeeded;
- (void)handleAnalysisScore:(unsigned long long)arg1;
- (void)updateAdjustParam:(id)arg1;
- (void)clearAllStates;
- (void)analyzeStaticBlurPersistTime:(double)arg1;
- (id)initWithTaskId:(id)arg1 adjustParam:(id)arg2;

@end

