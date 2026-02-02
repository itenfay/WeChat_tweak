//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;
@protocol MsgAudioPlayerDelegate;

@interface MsgAudioUnitPlayer
{
    _Bool m_isForceStop;
    NSMutableDictionary *m_settings;
    _Bool _isNeedUnmuteLongVideoPlay;
    int _soundControlMode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNeedUnmuteLongVideoPlay; // @synthesize isNeedUnmuteLongVideoPlay=_isNeedUnmuteLongVideoPlay;
@property(nonatomic) int soundControlMode; // @synthesize soundControlMode=_soundControlMode;
- (void)EndNotifyOnMainThread;
- (void)stopAndNotifyUI;
- (id)getUserData;
- (void)setUserData:(id)arg1;
- (void)setAutoMode;
- (void)setEarpieceMode;
- (void)onProximityStateChangeToAwayFromEar;
- (void)onProximityStateChangeToCloseEar;
- (void)updatePlayVoiceMode;
- (void)doBusinessWorkAfterPlay;
- (void)doBusinessWorkBeforePlay;
- (void)doWorkAfterPlay;
- (void)doWorkBeforePlay;
- (void)addProximityMonitorIfNeed;
- (void)closeMonitorDetection;
- (void)openMonitorDetection;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onAppWillResignActive;
- (id)attributeForKey:(id)arg1;
- (void)addAttribute:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <MsgAudioPlayerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

