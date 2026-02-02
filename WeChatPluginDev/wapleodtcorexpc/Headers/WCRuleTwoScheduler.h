//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCRuleTwoScheduler
{
    double _lapseRate;
    double _sliceTime;
    double _secondFuncLapseRate;
    double _limitTimes;
    double _connectPointX;
}

@property(nonatomic) double connectPointX; // @synthesize connectPointX=_connectPointX;
@property(nonatomic) double limitTimes; // @synthesize limitTimes=_limitTimes;
@property(nonatomic) double secondFuncLapseRate; // @synthesize secondFuncLapseRate=_secondFuncLapseRate;
@property(nonatomic) double sliceTime; // @synthesize sliceTime=_sliceTime;
@property(nonatomic) double lapseRate; // @synthesize lapseRate=_lapseRate;
- (double)getNextDownloadTimeWhenPlaying;
- (double)getFirstFuncYWithX:(double)arg1;
- (double)getFuncLapseRate:(struct CGPoint)arg1;

@end

