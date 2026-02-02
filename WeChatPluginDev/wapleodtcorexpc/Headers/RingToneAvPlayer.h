//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <AVFoundation/AVPlayer.h>

@class NSObject, NSString, RingToneDetail, RingToneVibrateController;

@interface RingToneAvPlayer : AVPlayer
{
    _Bool _enableVibrate;
    _Bool _customVibrateEnabled;
    RingToneVibrateController *_vibrateController;
    double _lastPlayTime;
    unsigned long long _playTimeStamp;
    RingToneDetail *_curRing;
    NSString *_ringId;
    NSObject *_timeObserver;
    NSString *_curPlayFile;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *curPlayFile; // @synthesize curPlayFile=_curPlayFile;
@property(retain, nonatomic) NSObject *timeObserver; // @synthesize timeObserver=_timeObserver;
@property(copy, nonatomic) NSString *ringId; // @synthesize ringId=_ringId;
@property(retain, nonatomic) RingToneDetail *curRing; // @synthesize curRing=_curRing;
@property(nonatomic) unsigned long long playTimeStamp; // @synthesize playTimeStamp=_playTimeStamp;
@property(nonatomic) double lastPlayTime; // @synthesize lastPlayTime=_lastPlayTime;
@property(retain, nonatomic) RingToneVibrateController *vibrateController; // @synthesize vibrateController=_vibrateController;
@property(nonatomic) _Bool customVibrateEnabled; // @synthesize customVibrateEnabled=_customVibrateEnabled;
@property(nonatomic) _Bool enableVibrate; // @synthesize enableVibrate=_enableVibrate;
- (double)currentPlayTime;
- (void)restart;
- (void)setMute:(_Bool)arg1;
- (void)resume;
- (void)pause;
- (void)vibrateWithRing:(id)arg1;
- (void)vibrateWithCaller:(id)arg1;
- (void)continuePlayWhenAppEnterForeground;
- (void)onFailPlayEnd;
- (void)onPlayEnd;
- (void)startToPlay;
- (void)playAudioFile:(id)arg1;
- (void)playMusicFile:(id)arg1;
- (void)clearResource;
- (void)stopPlay;
- (void)playDefaultRing;
- (void)playRing:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

