//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, RingToneAvPlayer, RingToneFinderPlayerView;
@protocol RingTonePlayer;

@interface RingToneMixPlayer : NSObject
{
    _Bool _customVibrateEnabled;
    _Bool _shouldPlayForcibly;
    unsigned long long _scene;
    NSString *_identifier;
    NSObject<RingTonePlayer> *_curPlayer;
    RingToneFinderPlayerView *_finderPlayerView;
    RingToneAvPlayer *_avPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RingToneAvPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) RingToneFinderPlayerView *finderPlayerView; // @synthesize finderPlayerView=_finderPlayerView;
@property(retain, nonatomic) NSObject<RingTonePlayer> *curPlayer; // @synthesize curPlayer=_curPlayer;
@property(nonatomic) _Bool shouldPlayForcibly; // @synthesize shouldPlayForcibly=_shouldPlayForcibly;
@property(nonatomic) _Bool customVibrateEnabled; // @synthesize customVibrateEnabled=_customVibrateEnabled;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (double)currentPlayTime;
- (void)stopAllPlay;
- (void)stopPlay;
- (void)__playRing:(id)arg1 isUsingFinderPlayer:(_Bool)arg2;
- (void)playRing:(id)arg1;
- (void)playDefaultRing;
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

