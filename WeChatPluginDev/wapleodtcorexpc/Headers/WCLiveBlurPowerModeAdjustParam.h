//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCLiveBlurPowerModeAdjustParam : NSObject
{
    _Bool _isSilenceHandle;
    double _staticBlurPersistBadScoreTime;
    double _staticBlurPersistGoodScoreTime;
    unsigned long long _staticBlurPersistBadScoreMaxCnt;
    unsigned long long _staticBlurPersistOrdinaryScoreMaxCnt;
    NSArray *_staticBlurEnterCheckNumAdjustList;
    unsigned long long _realTimeBlurEnterConstrastCheckCnt;
    unsigned long long _realTimeBlurEnterColorDisCheckCnt;
    double _similarContrastRatio;
    double _similarColorDistance;
    double _similarStandardRate;
    double _monitorScheduleInterval;
}

+ (id)createFourthGearPowerModeAdjustParam;
+ (id)createThirdGearPowerModeAdjustParam;
+ (id)createSecondGearPowerModeAdjustParam;
+ (id)createFirstGearPowerModeAdjustParam;
+ (id)createZerothGearPowerModeAdjustParam;
+ (id)createDefaultPowerModeAdjustParam;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSilenceHandle; // @synthesize isSilenceHandle=_isSilenceHandle;
@property(nonatomic) double monitorScheduleInterval; // @synthesize monitorScheduleInterval=_monitorScheduleInterval;
@property(nonatomic) double similarStandardRate; // @synthesize similarStandardRate=_similarStandardRate;
@property(nonatomic) double similarColorDistance; // @synthesize similarColorDistance=_similarColorDistance;
@property(nonatomic) double similarContrastRatio; // @synthesize similarContrastRatio=_similarContrastRatio;
@property(nonatomic) unsigned long long realTimeBlurEnterColorDisCheckCnt; // @synthesize realTimeBlurEnterColorDisCheckCnt=_realTimeBlurEnterColorDisCheckCnt;
@property(nonatomic) unsigned long long realTimeBlurEnterConstrastCheckCnt; // @synthesize realTimeBlurEnterConstrastCheckCnt=_realTimeBlurEnterConstrastCheckCnt;
@property(retain, nonatomic) NSArray *staticBlurEnterCheckNumAdjustList; // @synthesize staticBlurEnterCheckNumAdjustList=_staticBlurEnterCheckNumAdjustList;
@property(nonatomic) unsigned long long staticBlurPersistOrdinaryScoreMaxCnt; // @synthesize staticBlurPersistOrdinaryScoreMaxCnt=_staticBlurPersistOrdinaryScoreMaxCnt;
@property(nonatomic) unsigned long long staticBlurPersistBadScoreMaxCnt; // @synthesize staticBlurPersistBadScoreMaxCnt=_staticBlurPersistBadScoreMaxCnt;
@property(nonatomic) double staticBlurPersistGoodScoreTime; // @synthesize staticBlurPersistGoodScoreTime=_staticBlurPersistGoodScoreTime;
@property(nonatomic) double staticBlurPersistBadScoreTime; // @synthesize staticBlurPersistBadScoreTime=_staticBlurPersistBadScoreTime;

@end

