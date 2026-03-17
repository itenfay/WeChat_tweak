//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCCPUHandler : NSObject
{
    float m_tickTok;
    float m_totalCPUCost;
    float m_totalTrackingTime;
    _Bool m_bTracking;
    float m_backgroundTotalCPU;
    float m_backgroundTotalSec;
    _Bool m_background;
    _Bool m_backgroundCPUTooSmall;
}

- (void)cultivateBackgroundCpu:(float)arg1 periodTime:(float)arg2;
- (_Bool)cultivateCpuUsage:(float)arg1 periodTime:(float)arg2;
- (_Bool)isBackgroundCPUTooSmall;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (id)initWithCPULimit:(float)arg1;
- (id)init;

@end

