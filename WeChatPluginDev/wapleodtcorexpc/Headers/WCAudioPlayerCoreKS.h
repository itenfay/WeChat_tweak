//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KSAudioPlayer, NSString, WCAudioInfo, WCAudioPlayerCoreKSPauseContext, WCAudioPlayerSeekingContext;
@protocol IWCAudioPlayerCoreDelegate;

@interface WCAudioPlayerCoreKS : NSObject
{
    _Bool _isKSResuming;
    unsigned long long _mode;
    id <IWCAudioPlayerCoreDelegate> _delegate;
    KSAudioPlayer *_innerPlayer;
    unsigned long long _status;
    WCAudioPlayerCoreKSPauseContext *_pauseContext;
    WCAudioPlayerSeekingContext *_seekingContext;
}

+ (void)cleanCache;
+ (id)cacheRootPath;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAudioPlayerSeekingContext *seekingContext; // @synthesize seekingContext=_seekingContext;
@property(nonatomic) _Bool isKSResuming; // @synthesize isKSResuming=_isKSResuming;
@property(retain, nonatomic) WCAudioPlayerCoreKSPauseContext *pauseContext; // @synthesize pauseContext=_pauseContext;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) KSAudioPlayer *innerPlayer; // @synthesize innerPlayer=_innerPlayer;
@property(nonatomic) __weak id <IWCAudioPlayerCoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)audioPlayer:(id)arg1 dataBuffering:(double)arg2;
- (void)audioPlayer:(id)arg1 status:(unsigned long long)arg2 params:(id)arg3;
- (unsigned long long)_updateStateWithStatus:(unsigned long long)arg1 songInfo:(id)arg2 params:(id)arg3;
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
@property(readonly, nonatomic) double bufferedTime;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double displayTime;
@property(readonly, nonatomic) double currentTime;
- (id)fileCacheIdForAudioInfo:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

