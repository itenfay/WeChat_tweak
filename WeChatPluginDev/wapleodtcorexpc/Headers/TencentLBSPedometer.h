//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface TencentLBSPedometer : NSObject
{
    _Bool _isStart;
    id _pedometer;
    NSOperationQueue *_queue;
    double _version;
}

+ (_Bool)isStepCountingAvailable;
- (void).cxx_destruct;
@property _Bool isStart; // @synthesize isStart=_isStart;
@property double version; // @synthesize version=_version;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id pedometer; // @synthesize pedometer=_pedometer;
- (void)stopPedometerUpdates;
- (void)startPedometerUpdatesFromDate:(id)arg1 withPedometerHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

