//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AudioPlayerUserData, MMTimer, NSString;
@protocol AudioPlayerDelegate;

@interface BaseAudioPlayer : NSObject
{
    struct PlayerState *mAqData;
    int mLastNumber;
    float lastMeterPeak;
    _Bool mRouteChanging;
    _Bool _isFixingEarVolume;
    _Bool _stopInBackground;
    id <AudioPlayerDelegate> mNotifyListener;
    AudioPlayerUserData *_mUserData;
    MMTimer *_meterTimer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool stopInBackground; // @synthesize stopInBackground=_stopInBackground;
@property(nonatomic) _Bool isFixingEarVolume; // @synthesize isFixingEarVolume=_isFixingEarVolume;
@property(retain, nonatomic) MMTimer *meterTimer; // @synthesize meterTimer=_meterTimer;
@property(retain) AudioPlayerUserData *mUserData; // @synthesize mUserData=_mUserData;
@property(nonatomic) __weak id <AudioPlayerDelegate> delegate; // @synthesize delegate=mNotifyListener;
- (void)unregisterNotification;
- (void)registerNotification;
- (void)handleInterruption;
- (float)TimerCheckMeter;
- (void)onWCAudioSessionOverride;
- (void)onWCAudioSessionCategoryChange:(unsigned long long)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onProximityStateChangeToAwayFromEar;
- (void)onProximityStateChangeToCloseEar;
- (void)openActionRecognition;
- (void)EndNotifyOnMainThread;
- (void)BeginNotifyOnMainThread:(id)arg1;
- (void)switchOutputToEarpieceMode;
- (void)swithOutputToMicroPhone;
- (void)setAutoMode;
- (void)setEarpieceMode;
- (void)setSpeakerMode;
- (_Bool)isPlaying;
- (int)getCurrentTimeMs;
- (unsigned int)currentTime;
- (void)stopButNotNotify;
- (void)stopAndNotifyUI;
- (void)autostop;
- (void)stop;
- (void)asyncPlayAtTime:(unsigned int)arg1;
- (void)playAtTime:(unsigned int)arg1;
- (void)replay;
- (void)resume;
- (void)pause;
- (void)setProgress:(unsigned int)arg1;
- (void)play;
- (id)getUserData;
- (void)setUserData:(id)arg1;
- (void)asyncPreparePlayWithFile:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (_Bool)preparePlayWithFile:(id)arg1 sync:(_Bool)arg2;
- (_Bool)preparePlayWithFile:(id)arg1;
- (_Bool)preparePlayNotNotify;
- (void)updateStatus;
- (void)updateSetting;
- (void)asyncUpdateSession;
- (void)updateSession;
- (_Bool)initQueue;
- (void)initSession;
- (void)dealloc;
- (void)observeOutputVolume;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

