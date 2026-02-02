//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;

@interface MMTimer : NSObject
{
    _Bool _paused;
    NSTimer *_m_timer;
    NSDate *_pauseStart;
    NSDate *_previousFireDate;
}

+ (id)startTimeCheckWithInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)scheduledNoRetainTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *previousFireDate; // @synthesize previousFireDate=_previousFireDate;
@property(retain, nonatomic) NSDate *pauseStart; // @synthesize pauseStart=_pauseStart;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSTimer *m_timer; // @synthesize m_timer=_m_timer;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)invalidate;
- (void)stopTimeCheck;
- (void)dealloc;

@end

