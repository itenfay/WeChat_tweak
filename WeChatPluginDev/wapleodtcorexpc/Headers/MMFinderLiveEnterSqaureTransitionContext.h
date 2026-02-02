//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveHomePageBottomPlayerView, UIImageView, UIView;

@interface MMFinderLiveEnterSqaureTransitionContext
{
    _Bool _isGesturePanEnter;
    double _duration;
    MMFinderLiveHomePageBottomPlayerView *_playerBottomView;
    UIView *_playerControlView;
    UIView *_liveView;
    UIView *_navBar;
    UIImageView *_snapshotLiveView;
    UIView *_liveRoomView;
    UIImageView *_snapshotLiveViewVideoContainer;
    double _snapshotLiveViewTopOffset;
    UIView *_transitionToView;
    struct CGRect _initialPlayerBottomViewFrame;
    struct CGRect _initialLiveFrame;
    struct CGRect _finalPlayerBottomViewFrame;
    struct CGRect _finalLiveFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isGesturePanEnter; // @synthesize isGesturePanEnter=_isGesturePanEnter;
@property(nonatomic) __weak UIView *transitionToView; // @synthesize transitionToView=_transitionToView;
@property(nonatomic) double snapshotLiveViewTopOffset; // @synthesize snapshotLiveViewTopOffset=_snapshotLiveViewTopOffset;
@property(nonatomic) struct CGRect finalLiveFrame; // @synthesize finalLiveFrame=_finalLiveFrame;
@property(nonatomic) struct CGRect finalPlayerBottomViewFrame; // @synthesize finalPlayerBottomViewFrame=_finalPlayerBottomViewFrame;
@property(nonatomic) struct CGRect initialLiveFrame; // @synthesize initialLiveFrame=_initialLiveFrame;
@property(nonatomic) struct CGRect initialPlayerBottomViewFrame; // @synthesize initialPlayerBottomViewFrame=_initialPlayerBottomViewFrame;
@property(retain, nonatomic) UIImageView *snapshotLiveViewVideoContainer; // @synthesize snapshotLiveViewVideoContainer=_snapshotLiveViewVideoContainer;
@property(nonatomic) __weak UIView *liveRoomView; // @synthesize liveRoomView=_liveRoomView;
@property(retain, nonatomic) UIImageView *snapshotLiveView; // @synthesize snapshotLiveView=_snapshotLiveView;
@property(nonatomic) __weak UIView *navBar; // @synthesize navBar=_navBar;
@property(nonatomic) __weak UIView *liveView; // @synthesize liveView=_liveView;
@property(retain, nonatomic) UIView *playerControlView; // @synthesize playerControlView=_playerControlView;
@property(retain, nonatomic) MMFinderLiveHomePageBottomPlayerView *playerBottomView; // @synthesize playerBottomView=_playerBottomView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)description;

@end

