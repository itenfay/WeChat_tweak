//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OMJMoviePlayerDelegate;

@interface OMJMoviePlayer : NSObject
{
    _Bool _isAudioEnabled;
    int _loopCount;
    id <OMJMoviePlayerDelegate> _delegate;
    shared_ptr_c90976e0 _backingPlayer;
    shared_ptr_85cde1ea _backingRenderView;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_e83c9415 _timeRange;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_85cde1ea backingRenderView; // @synthesize backingRenderView=_backingRenderView;
@property(nonatomic) shared_ptr_c90976e0 backingPlayer; // @synthesize backingPlayer=_backingPlayer;
@property(nonatomic) _Bool isAudioEnabled; // @synthesize isAudioEnabled=_isAudioEnabled;
@property(nonatomic) int loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) __weak id <OMJMoviePlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateIsAudioMuted:(_Bool)arg1;
- (id)skimTo:(CDStruct_1b6d18a9)arg1;
- (id)stopPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)startPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setTimeRange:(CDStruct_e83c9415)arg1 startTime:(CDStruct_1b6d18a9)arg2 loopCount:(int)arg3 isAudioEnabled:(_Bool)arg4;
- (CDStruct_1b6d18a9)playbackDuration;
- (CDStruct_1b6d18a9)currentPlaybackTime;
- (id)shutdownPlaybackWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)startupPlaybackWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)teardownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)cancelMovieCreationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)startMovieCreationWithClipBundleID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupPlaybackDidFinishCallback;
- (void)setupPlaybackTimeDidChangeCallback;
- (_Bool)connectToRenderView:(const void *)arg1 error:(id *)arg2;
- (id)renderView;
- (id)initWithBackingPlayer:(const void *)arg1;

@end

