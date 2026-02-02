//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveMagicRewardMemoryMonitorTask : NSObject
{
    _Bool _isStartMonitor;
    CDUnknownBlockType _getMonitorTimeCallback;
}

+ (double)defaultMonitorTime;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType getMonitorTimeCallback; // @synthesize getMonitorTimeCallback=_getMonitorTimeCallback;
@property(nonatomic) _Bool isStartMonitor; // @synthesize isStartMonitor=_isStartMonitor;
- (double)getMonitorTime;
- (void)cancel;
- (void)forceCheckMemoryIfNeedAfterTime:(double)arg1;
- (void)checkMemory;
- (void)restartMonitor;
- (void)stopMonitor;
- (void)startMonitor;

@end

