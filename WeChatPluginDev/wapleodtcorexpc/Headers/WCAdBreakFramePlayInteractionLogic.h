//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink;

@interface WCAdBreakFramePlayInteractionLogic
{
    _Bool _beginPosSetFlag;
    _Bool _hasPlayed;
    int _interactionState;
    int _changeAnimationTargetState;
    CADisplayLink *_changeAnimationDisplayLink;
    double _changeAnimationStartTimeMs;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasPlayed; // @synthesize hasPlayed=_hasPlayed;
@property(nonatomic) _Bool beginPosSetFlag; // @synthesize beginPosSetFlag=_beginPosSetFlag;
@property(nonatomic) int changeAnimationTargetState; // @synthesize changeAnimationTargetState=_changeAnimationTargetState;
@property(nonatomic) double changeAnimationStartTimeMs; // @synthesize changeAnimationStartTimeMs=_changeAnimationStartTimeMs;
@property(retain, nonatomic) CADisplayLink *changeAnimationDisplayLink; // @synthesize changeAnimationDisplayLink=_changeAnimationDisplayLink;
@property(nonatomic) int interactionState; // @synthesize interactionState=_interactionState;
- (void)reportUserAction:(int)arg1;
- (void)notifyStateChanged;
- (void)resumePlayerAlpha;
- (void)realPausePlayer;
- (void)displayLinkCheck;
- (void)stopChangeAnimation;
- (void)tryToStartChangeWithAnimation:(int)arg1;
- (void)changeToInteractionStateWithAnimation:(int)arg1;
- (int)fetchNextInteractionState;
- (_Bool)checkPlaybackTimeInCurrentPlayStateSection:(double)arg1;
- (id)fetchCurrentPlayStateItem;
- (id)fetchPlayStateItem:(int)arg1;
- (void)changeToInteractionState:(int)arg1 neeSeek:(_Bool)arg2;
- (void)changeToInteractionState:(int)arg1;
- (void)initLogic;
- (void)onPlayerSeekComplete:(double)arg1;
- (void)onPlayEnd:(_Bool)arg1;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)onSelfComment;
- (void)onSelfCancelLike;
- (void)onSelfLike;
- (void)onReferenceVideoStop;
- (void)onReferenceVideoPlay;
- (void)reset;
- (_Bool)checkPlayMode;
- (void)dealloc;
- (id)initWithBreakFrameInfo:(id)arg1 dataItem:(id)arg2 alphaVideoView:(id)arg3 bTimelineScene:(_Bool)arg4;

@end

