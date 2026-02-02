//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, TXCAudioSessionManagerDelegate;

@interface TXCAudioSessionManager : NSObject
{
    _Bool _isAppActive;
    _Bool _isStereoCaptureInFront;
    _Bool _isOtherAppPlaying;
    int _outputVolume;
    id <TXCAudioSessionManagerDelegate> _delegate;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    long long _currentStereoOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentStereoOrientation; // @synthesize currentStereoOrientation=_currentStereoOrientation;
@property(retain) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;
@property(retain) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property int outputVolume; // @synthesize outputVolume=_outputVolume;
@property _Bool isOtherAppPlaying; // @synthesize isOtherAppPlaying=_isOtherAppPlaying;
@property _Bool isStereoCaptureInFront; // @synthesize isStereoCaptureInFront=_isStereoCaptureInFront;
@property _Bool isAppActive; // @synthesize isAppActive=_isAppActive;
@property __weak id <TXCAudioSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>>)categoryToString:(id)arg1;
- (struct SystemError)updateCategory:(id)arg1 mode:(id)arg2;
- (struct SystemError)updateCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3;
- (struct SystemError)endConfigration;
- (struct SystemError)beginConfigration:(id)arg1;
- (_Bool)updateStereoCaptureDirectrion:(_Bool)arg1;
- (void)enableBuiltInStereoCaptureIfNeeded;
- (id)findSuitableDatasource;
- (_Bool)setStereoCaptureWithDatasrouce:(id)arg1;
- (_Bool)updateStereoOrientation;
- (void)notifyDeviceOrientationDidChange:(id)arg1;
- (void)notifyDidChangeOtherAppPlayoutState:(_Bool)arg1;
- (void)notifyDidChangeOutputVolume:(int)arg1;
- (void)notifyMediaServicesWereReset;
- (void)notifyMediaServicesWereLost;
- (void)notifyDidChangeRouteWithReason:(unsigned long long)arg1 previousRoute:(id)arg2;
- (void)notifyDidEndInterruptionWithShouldResumeSession:(_Bool)arg1;
- (void)notifyDidBeginInterruption;
- (void)handleApplicationWillResignActive:(id)arg1;
- (void)handleApplicationDidBecomeActive:(id)arg1;
- (void)handleSilenceSecondaryAudioHintNotification:(id)arg1;
- (void)handleMediaServicesWereReset:(id)arg1;
- (void)handleMediaServicesWereLost:(id)arg1;
- (void)handleRouteChangeNotification:(id)arg1;
- (void)handleInterruptionNotification:(id)arg1;
- (void)onTimer;
- (void)stopStatusTimer;
- (void)startStatusTimer;
- (void)updateAppActiveState;
- (void)dealloc;
- (id)init;

@end

