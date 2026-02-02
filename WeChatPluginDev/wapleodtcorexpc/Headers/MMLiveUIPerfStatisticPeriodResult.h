//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMLiveUIPerfStatisticPeriodResult : NSObject
{
    NSArray *_blurPerfStatResultList;
    NSArray *_uiAnimPerfStatResultList;
    NSArray *_pagAnimPerfStatResultList;
}

+ (double)standardPercent:(double)arg1 digitNum:(unsigned long long)arg2 limit:(_Bool)arg3;
+ (double)getAverAnimFrameRateInPeriod:(double)arg1 fromStatResults:(id)arg2;
+ (double)getMaxAverAnimFrameRateInPeriod:(double)arg1 fromStatResults:(id)arg2;
+ (double)getMaxAnimFrameRateInPeriod:(double)arg1 fromStatResults:(id)arg2;
+ (double)getMaxComposeAreaPercentInPeriod:(double)arg1 fromStatResults:(id)arg2;
+ (double)getPersistTimePercentInPeriod:(double)arg1 fromStatResults:(id)arg2;
+ (int)getMaxRecordCntInPeriod:(double)arg1 fromStatResults:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *pagAnimPerfStatResultList; // @synthesize pagAnimPerfStatResultList=_pagAnimPerfStatResultList;
@property(retain, nonatomic) NSArray *uiAnimPerfStatResultList; // @synthesize uiAnimPerfStatResultList=_uiAnimPerfStatResultList;
@property(retain, nonatomic) NSArray *blurPerfStatResultList; // @synthesize blurPerfStatResultList=_blurPerfStatResultList;
- (double)getAverPAGAnimationFrameRateInPeriod:(double)arg1;
- (double)getMaxPAGAnimationAverFrameRateInPeriod:(double)arg1;
- (double)getMaxPAGAnimationFrameRateInPeriod:(double)arg1;
- (double)getMaxPAGAnimationAreaPercentInPeriod:(double)arg1;
- (double)getPAGAnimationPersistTimePercentInPeriod:(double)arg1;
- (int)getMaxPAGAnimationCntInPeriod:(double)arg1;
- (double)getAverUIAnimationFrameRateInPeriod:(double)arg1;
- (double)getMaxUIAnimationAverFrameRateInPeriod:(double)arg1;
- (double)getMaxUIAnimationFrameRateInPeriod:(double)arg1;
- (double)getMaxUIAnimationAreaPercentInPeriod:(double)arg1;
- (double)getUIAnimationPersistTimePercentInPeriod:(double)arg1;
- (int)getMaxUIAnimationCntInPeriod:(double)arg1;
- (double)getMaxBlurAreaPercentInPeriod:(double)arg1;
- (double)getBlurPersistTimePercentInPeriod:(double)arg1;
- (int)getMaxBlurCntInPeriod:(double)arg1;

@end

