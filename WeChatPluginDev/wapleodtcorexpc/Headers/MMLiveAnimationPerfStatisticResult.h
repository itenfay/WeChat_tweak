//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMLiveAnimationPerfStatisticResult
{
    float _minAnimFrameRate;
    float _maxAnimFrameRate;
    float _sumAnimFrameRate;
}

@property(nonatomic) float sumAnimFrameRate; // @synthesize sumAnimFrameRate=_sumAnimFrameRate;
@property(nonatomic) float maxAnimFrameRate; // @synthesize maxAnimFrameRate=_maxAnimFrameRate;
@property(nonatomic) float minAnimFrameRate; // @synthesize minAnimFrameRate=_minAnimFrameRate;
@property(readonly, nonatomic) float averAnimFrameRate;
- (void)addAnimFrameRate:(float)arg1;
- (void)addAnimationPerfRecord:(id)arg1;

@end

