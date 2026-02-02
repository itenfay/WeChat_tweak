//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJPlaybackConfiguration, OMCPlaybackSession, OMCTimeline, UBBooleanSignal, UBDictionarySignal, UBValueSignal, WCAudioModuleProxy;
@protocol MJPlaybackViewModelDelegate;

@interface MJPlaybackViewModel : NSObject
{
    _Bool _isPlaying;
    id <MJPlaybackViewModelDelegate> _delegate;
    UBDictionarySignal *_videoFrameTimeDidChangeSignal;
    UBDictionarySignal *_playbackTimeDidChangeSignal;
    UBValueSignal *_skimTimeDidChangeSignal;
    UBBooleanSignal *_isPlayingDidChangeSignal;
    OMCTimeline *_timeline;
    OMCPlaybackSession *_playbackSession;
    MJPlaybackConfiguration *_playbackConfiguration;
    WCAudioModuleProxy *_auidoModuleProxy;
    CDStruct_1b6d18a9 _lastSkimTime;
    CDStruct_1b6d18a9 _lastClipSkimTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAudioModuleProxy *auidoModuleProxy; // @synthesize auidoModuleProxy=_auidoModuleProxy;
@property(readonly, nonatomic) MJPlaybackConfiguration *playbackConfiguration; // @synthesize playbackConfiguration=_playbackConfiguration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 lastClipSkimTime; // @synthesize lastClipSkimTime=_lastClipSkimTime;
@property(nonatomic) CDStruct_1b6d18a9 lastSkimTime; // @synthesize lastSkimTime=_lastSkimTime;
@property(readonly, nonatomic) OMCPlaybackSession *playbackSession; // @synthesize playbackSession=_playbackSession;
@property(readonly, nonatomic) OMCTimeline *timeline; // @synthesize timeline=_timeline;
@property(readonly, nonatomic) UBBooleanSignal *isPlayingDidChangeSignal; // @synthesize isPlayingDidChangeSignal=_isPlayingDidChangeSignal;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) UBValueSignal *skimTimeDidChangeSignal; // @synthesize skimTimeDidChangeSignal=_skimTimeDidChangeSignal;
@property(readonly, nonatomic) UBDictionarySignal *playbackTimeDidChangeSignal; // @synthesize playbackTimeDidChangeSignal=_playbackTimeDidChangeSignal;
@property(readonly, nonatomic) UBDictionarySignal *videoFrameTimeDidChangeSignal; // @synthesize videoFrameTimeDidChangeSignal=_videoFrameTimeDidChangeSignal;
@property(nonatomic) __weak id <MJPlaybackViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)leaveClosedTimeRangeModeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enterClosedTimeRangeModeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)snapshotAtTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deactiveAudioModule;
- (void)activeAudioModule;
- (void)_updateIsPlaying:(_Bool)arg1;
- (void)removeAllDecorationBoxes;
- (void)addDecorationBoxesWithConfigs:(id)arg1;
- (void)endTrackingSafeArea;
- (void)beginTrackingSafeAreaWithSegmentID:(id)arg1 normalizedSafeRect:(struct CGRect)arg2 trackingHandler:(CDUnknownBlockType)arg3;
- (void)temporaryUpdatePlaybackDuration:(CDStruct_1b6d18a9)arg1;
- (void)skipRefreshNextVideoFrame;
- (void)commitUpdateWithPreviewTime:(CDStruct_1b6d18a9)arg1 shouldForceUpdatePreview:(_Bool)arg2 isFullUpdate:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clipSkimToTime:(CDStruct_1b6d18a9)arg1 forceUpdate:(_Bool)arg2;
- (void)clipSkimToTime:(CDStruct_1b6d18a9)arg1;
- (void)skimToTime:(CDStruct_1b6d18a9)arg1 forceUpdate:(_Bool)arg2 shouldNotDrop:(_Bool)arg3;
- (void)skimToTime:(CDStruct_1b6d18a9)arg1 forceUpdate:(_Bool)arg2;
- (void)skimToTime:(CDStruct_1b6d18a9)arg1;
- (void)skimToProgress:(double)arg1 forceUpdate:(_Bool)arg2 shouldNotDrop:(_Bool)arg3;
- (void)skimToProgress:(double)arg1 forceUpdate:(_Bool)arg2;
- (void)skimToProgress:(double)arg1;
- (void)endClipSkimming;
- (void)beginClipSkimmingWithVisualClipSegmentVM:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginClipSkimmingWithVisualClipSegmentVM:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopPlayingAndBeginClipSkimmingWithVisualClipSegmentVM:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopPlaying;
- (void)startPlayingWithTimeRange:(CDStruct_e83c9415)arg1 initialStartTime:(CDStruct_1b6d18a9)arg2 playbackLoopCount:(int)arg3 isAudioEnabled:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)startPlayingWithTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeWithDeactiveAudioModule:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)openWithPreviewTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unbindRenderView;
- (_Bool)bindRenderView:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) CDStruct_e83c9415 mediaTimeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 lastVideoFrameTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 playbackTime;
- (void)dealloc;
- (id)initWithTimeline:(id)arg1;

@end

