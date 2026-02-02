//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GCMRedpointExposureControlModel : NSObject
{
    _Bool _blockLog;
    NSMutableDictionary *_controlInfoDict;
    unsigned long long _logicType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool blockLog; // @synthesize blockLog=_blockLog;
@property(nonatomic) unsigned long long logicType; // @synthesize logicType=_logicType;
@property(retain, nonatomic) NSMutableDictionary *controlInfoDict; // @synthesize controlInfoDict=_controlInfoDict;
- (void)didShowNewRedPoint;
- (_Bool)checkIsSameDay:(id)arg1 nowDate:(id)arg2;
- (_Bool)checkCanReExposure;
- (void)logWithFormat:(id)arg1;
- (_Bool)checkOverMinIntervalClickRedPoint:(double)arg1;
- (_Bool)checkIsOverLastExitTimeLimit:(unsigned int)arg1;
- (_Bool)checkIsOverSameDayMaxCntLimit:(unsigned long long)arg1;
- (_Bool)checkIsOverLastShowInterval:(double)arg1;
- (_Bool)checkCanReExposureWithMaxCnt:(int)arg1 minIntervalClickRedPoint:(double)arg2 minIntervalBeforeLastShow:(double)arg3 lastExitTimeLimit:(unsigned int)arg4;
- (_Bool)checkCanReExposureWithMaxCnt:(int)arg1 minIntervalClickRedPoint:(double)arg2;
- (void)saveRedPointTimeControlInfoDict;
- (void)updateLastRedPointDisppearTime;
- (id)logicControlInfoKey;
- (id)initWithRedPointLogicType:(unsigned long long)arg1;

@end

