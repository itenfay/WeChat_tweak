//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage, WCFinderMinimizePlayInfo;
@protocol WCFinderMinimizePlayCtrlPlayDelegate, WCFinderMinimizePlayCtrlPlayNotifyExtDelegate;

@interface WCFinderMinimizePlayCtrl : NSObject
{
    _Bool _isPlayerDidPlay;
    _Bool _isInterruptWhenStartup;
    _Bool _lastRequestToPlay;
    _Bool _isMakeAudioModule;
    id <WCFinderMinimizePlayCtrlPlayDelegate> _controlDelegate;
    id <WCFinderMinimizePlayCtrlPlayNotifyExtDelegate> _extDelegate;
    WCFinderMinimizePlayInfo *_playInfo;
    long long _state;
    UIImage *_coverImage;
    long long _statusMask;
}

+ (void)setupRemoteButton:(id)arg1 enable:(_Bool)arg2 target:(id)arg3 action:(SEL)arg4;
+ (void)cleanControlCenter;
- (void).cxx_destruct;
@property(nonatomic) _Bool isMakeAudioModule; // @synthesize isMakeAudioModule=_isMakeAudioModule;
@property(nonatomic) _Bool lastRequestToPlay; // @synthesize lastRequestToPlay=_lastRequestToPlay;
@property(nonatomic) long long statusMask; // @synthesize statusMask=_statusMask;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(nonatomic) _Bool isInterruptWhenStartup; // @synthesize isInterruptWhenStartup=_isInterruptWhenStartup;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) WCFinderMinimizePlayInfo *playInfo; // @synthesize playInfo=_playInfo;
@property(nonatomic) _Bool isPlayerDidPlay; // @synthesize isPlayerDidPlay=_isPlayerDidPlay;
@property(nonatomic) __weak id <WCFinderMinimizePlayCtrlPlayNotifyExtDelegate> extDelegate; // @synthesize extDelegate=_extDelegate;
@property(nonatomic) __weak id <WCFinderMinimizePlayCtrlPlayDelegate> controlDelegate; // @synthesize controlDelegate=_controlDelegate;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)resignAudioModule;
- (_Bool)tryActiveAudioModule;
@property(readonly, copy) NSString *description;
- (void)onMinimizePlayViewImageDidUpdate:(id)arg1;
- (_Bool)minimizePlayViewNeedSeekBegin;
- (void)onMinimizePlayViewDidPlayToEnd;
- (void)onMinimizePlayViewDidPause;
- (void)onMinimizePlayViewDidPlay;
- (void)afterDoMinimize;
- (void)keepHandlePlayer;
- (void)updatePlayInfo:(id)arg1;
- (long long)onPauseAction:(id)arg1;
- (long long)onPlayAction:(id)arg1;
- (void)updateControlCenterInfo;
- (void)setupControlCenter;
- (void)resumeForSystemCall;
- (void)pauseForSystemCall;
- (void)updatePlayerStatus:(_Bool)arg1;
- (void)showToast;
- (_Bool)resumePlayCheckFlag:(long long)arg1;
- (void)pauseWithFlag:(long long)arg1;
- (void)onOutterResume;
- (void)onOutterInterrupt;
- (_Bool)isEnterOtherMediaPage;
- (void)onExitOtherMediaPage;
- (void)onEnterOtherMediaPage;
- (void)pauseByInterrupt:(_Bool)arg1 playToEnd:(_Bool)arg2 releaseAudio:(_Bool)arg3;
- (void)pause;
- (void)playNotifyOutterMute:(_Bool)arg1 showForbidenToast:(_Bool)arg2;
- (void)play;
- (void)configPIPActive:(_Bool)arg1;
@property(nonatomic) _Bool isFloatingViewHidden;
@property(readonly, nonatomic) _Bool playCtrlBtnIsPlaying;
- (double)queryCurrentPlayPosition;
- (_Bool)needCleanPauseStateWhenEnterStream;
@property(readonly, nonatomic) _Bool isMinimizePlaying;
- (_Bool)isMinimizing;
@property(readonly, nonatomic) _Bool isValid;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

