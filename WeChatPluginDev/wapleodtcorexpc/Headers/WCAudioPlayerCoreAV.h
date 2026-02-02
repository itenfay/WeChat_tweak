//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVPlayer, NSString, WCAudioInfo;
@protocol IWCAudioPlayerCoreDelegate;

@interface WCAudioPlayerCoreAV : NSObject
{
    _Bool _isPreparing;
    _Bool _isObserving;
    _Bool _isReuse;
    _Bool _isPausedBeforeReset;
    unsigned long long _mode;
    id <IWCAudioPlayerCoreDelegate> _delegate;
    unsigned long long _status;
    double _bufferedTime;
    AVPlayer *_innerPlayer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPausedBeforeReset; // @synthesize isPausedBeforeReset=_isPausedBeforeReset;
@property(nonatomic) _Bool isReuse; // @synthesize isReuse=_isReuse;
@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(nonatomic) _Bool isPreparing; // @synthesize isPreparing=_isPreparing;
@property(retain, nonatomic) AVPlayer *innerPlayer; // @synthesize innerPlayer=_innerPlayer;
@property(nonatomic) double bufferedTime; // @synthesize bufferedTime=_bufferedTime;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <IWCAudioPlayerCoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)onFailedToPlayToEndTimeNotification:(id)arg1;
- (void)onDidPlayToEndTimeNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addAVObserver:(id)arg1;
- (void)removeAVObserver;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (void)seekToTime:(double)arg1 autoPlay:(_Bool)arg2;
- (void)reset;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)playWithAudioInfo:(id)arg1 startTime:(double)arg2;
@property(readonly, nonatomic) WCAudioInfo *currentInfo;
@property(nonatomic) float volume;
@property(nonatomic) float playRate;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double displayTime;
@property(readonly, nonatomic) double currentTime;
- (void)onEvent:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

