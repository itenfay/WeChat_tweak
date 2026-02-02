//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol NotMainQueueTimerDelegate, OS_dispatch_source;

@interface NotMainQueueTimer : NSObject
{
    NSObject<OS_dispatch_source> *m_timerSource;
    id <NotMainQueueTimerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NotMainQueueTimerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *m_timerSource; // @synthesize m_timerSource;
- (void)stop;
- (id)initWithDelegate:(id)arg1 interval:(float)arg2 delay:(float)arg3;

@end

