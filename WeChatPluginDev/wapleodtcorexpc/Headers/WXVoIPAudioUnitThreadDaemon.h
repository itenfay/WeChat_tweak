//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, WXVoIPAudioUnitThreadDaemonDelegate;

@interface WXVoIPAudioUnitThreadDaemon : NSObject
{
    _Bool _isThreadAlive;
    unsigned short _maxCaptureSampleValue;
    unsigned int _timingIntervalInMS;
    id <WXVoIPAudioUnitThreadDaemonDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
@property unsigned int timingIntervalInMS; // @synthesize timingIntervalInMS=_timingIntervalInMS;
@property unsigned short maxCaptureSampleValue; // @synthesize maxCaptureSampleValue=_maxCaptureSampleValue;
@property _Bool isThreadAlive; // @synthesize isThreadAlive=_isThreadAlive;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;
@property(retain, nonatomic) id <WXVoIPAudioUnitThreadDaemonDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isThreadDead;
- (_Bool)isCaptureMute;
- (_Bool)needPlay;
- (_Bool)needCapture;
- (void)timingProcess;
- (void)notifyPlaying;
- (void)notifyCapturing:(const struct AudioFrame *)arg1;
- (void)initTimer;
- (void)dealloc;
- (id)init:(id)arg1 delegate:(id)arg2 intervalInMs:(unsigned int)arg3;

@end

