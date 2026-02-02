//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveUIPerfStatisticResult : NSObject
{
    int _sumRecordCnt;
    double _startTime;
    double _endTime;
    double _duration;
    double _sumComposeArea;
    double _sumComposeAreaPercent;
}

@property(nonatomic) double sumComposeAreaPercent; // @synthesize sumComposeAreaPercent=_sumComposeAreaPercent;
@property(nonatomic) double sumComposeArea; // @synthesize sumComposeArea=_sumComposeArea;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int sumRecordCnt; // @synthesize sumRecordCnt=_sumRecordCnt;
- (void)addComposeAreaPercent:(double)arg1;
- (void)addComposeArea:(struct CGSize)arg1;
- (void)updateStartTime:(double)arg1 endTime:(double)arg2;

@end

