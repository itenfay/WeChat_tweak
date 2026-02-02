//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PIPPerformanceComputeParamConfig : NSObject
{
    int _fpsPerformanceSwitch;
    int _topFPSDifferenceListCnt;
    int _topFPSLimit;
    double _largeFPSDifference;
    double _lessFPSDifference;
    double _computeResultDifferenceTime;
}

+ (id)createParamConfigWithDict:(id)arg1;
@property(nonatomic) double computeResultDifferenceTime; // @synthesize computeResultDifferenceTime=_computeResultDifferenceTime;
@property(nonatomic) int topFPSLimit; // @synthesize topFPSLimit=_topFPSLimit;
@property(nonatomic) int topFPSDifferenceListCnt; // @synthesize topFPSDifferenceListCnt=_topFPSDifferenceListCnt;
@property(nonatomic) double lessFPSDifference; // @synthesize lessFPSDifference=_lessFPSDifference;
@property(nonatomic) double largeFPSDifference; // @synthesize largeFPSDifference=_largeFPSDifference;
@property(nonatomic) int fpsPerformanceSwitch; // @synthesize fpsPerformanceSwitch=_fpsPerformanceSwitch;

@end

