//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QProgressAnimation : NSObject
{
    double _duration;
    double _step;
    double _startTime;
}

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double step; // @synthesize step=_step;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)update:(double)arg1;
- (id)init;

@end

