//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CPUAnimationMetricRecord : NSObject
{
    double _invokeTime;
    unsigned long long _duration;
}

@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) double invokeTime; // @synthesize invokeTime=_invokeTime;

@end

