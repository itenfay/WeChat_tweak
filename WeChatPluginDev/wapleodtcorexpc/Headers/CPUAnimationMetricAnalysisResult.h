//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CPUAnimationMetricAnalysisResult : NSObject
{
    double _invokeTime;
    long long _analysisRet;
}

@property(nonatomic) long long analysisRet; // @synthesize analysisRet=_analysisRet;
@property(nonatomic) double invokeTime; // @synthesize invokeTime=_invokeTime;

@end

