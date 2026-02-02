//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILongPressGestureRecognizer.h>

@class MMTimer;
@protocol WCFinderLongPressIntervalGestureRecognizerDelegate;

@interface WCFinderLongPressIntervalGestureRecognizer : UILongPressGestureRecognizer
{
    id <WCFinderLongPressIntervalGestureRecognizerDelegate> _m_delegate;
    MMTimer *_timer;
    double _timeInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <WCFinderLongPressIntervalGestureRecognizerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (_Bool)gestureIsOver;
- (void)triggerIntervalTimerAction;
- (void)onLongPressAction:(id)arg1;
- (void)dealloc;
- (id)initWithInterval:(double)arg1;

@end

