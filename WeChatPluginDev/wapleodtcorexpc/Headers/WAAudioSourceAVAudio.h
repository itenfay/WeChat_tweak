//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAudioPlayer, NSString;
@protocol WAAudioSourceDelegate;

@interface WAAudioSourceAVAudio : NSObject
{
    AVAudioPlayer *_player;
    _Bool _isForcePause;
    double _forcePausedPosition;
    _Bool _obeyMuteSwitch;
    _Bool _loop;
    float _duration;
    NSString *_appId;
    NSString *_audioId;
    NSString *_src;
    long long _state;
    id <WAAudioSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAAudioSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) _Bool obeyMuteSwitch; // @synthesize obeyMuteSwitch=_obeyMuteSwitch;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(copy, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (_Bool)isPaused;
- (_Bool)isPlaying;
@property(nonatomic) float currentTime;
- (void)setPlaybackRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (void)setLooping:(_Bool)arg1;
- (void)seek:(double)arg1;
- (void)stop;
- (void)forcePause;
- (void)pause;
- (void)play;
- (void)dealloc;
- (id)fileTypeHintWithSrc:(id)arg1;
- (id)initWithAudioId:(id)arg1 src:(id)arg2 fileData:(id)arg3 appId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

