//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, UIView;
@protocol OS_dispatch_group;

@interface OMCPlaybackSession : NSObject
{
    struct XTMTime _backingPlaybackTime;
    struct XTMTime _backingLastVideoFrameTime;
    CADisplayLink *_displayLink;
    struct vector<std::tuple<sunnyvale::core::SharedPtr<XIKImage>, XIKImageQualityInfo>, std::allocator<std::tuple<sunnyvale::core::SharedPtr<XIKImage>, XIKImageQualityInfo>>> _tempSnapshot;
    struct XIKImageQualityCalculator _calc;
    NSObject<OS_dispatch_group> *_group;
    _Bool _isHandleBoxEnabled;
    CDUnknownBlockType _videoFrameTimeDidChangeHandler;
    CDUnknownBlockType _playbackTimeDidChangeHandler;
    CDUnknownBlockType _playbackDidFinishHandler;
    CDUnknownBlockType _playbackDidFailHandler;
    CDUnknownBlockType _playingStateDidEnterHandler;
    CDUnknownBlockType _playingStateWillLeaveHandler;
    CDUnknownBlockType _handleBoxSettingsDidChangeFunc;
    SharedPtr_37df0930 _backingSession;
    SharedPtr_f7d96994 _windowCon;
    UIView *_renderView;
    CDStruct_1b6d18a9 _playbackTime;
    CDStruct_1b6d18a9 _lastVideoFrameTime;
    optional_9436b898 _windowName;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) SharedPtr_f7d96994 windowCon; // @synthesize windowCon=_windowCon;
@property(readonly, nonatomic) SharedPtr_37df0930 backingSession; // @synthesize backingSession=_backingSession;
@property(nonatomic) optional_9436b898 windowName; // @synthesize windowName=_windowName;
@property(copy, nonatomic) CDUnknownBlockType handleBoxSettingsDidChangeFunc; // @synthesize handleBoxSettingsDidChangeFunc=_handleBoxSettingsDidChangeFunc;
@property(nonatomic) _Bool isHandleBoxEnabled; // @synthesize isHandleBoxEnabled=_isHandleBoxEnabled;
@property(nonatomic) CDStruct_1b6d18a9 lastVideoFrameTime; // @synthesize lastVideoFrameTime=_lastVideoFrameTime;
@property(nonatomic) CDStruct_1b6d18a9 playbackTime; // @synthesize playbackTime=_playbackTime;
@property(copy, nonatomic) CDUnknownBlockType playingStateWillLeaveHandler; // @synthesize playingStateWillLeaveHandler=_playingStateWillLeaveHandler;
@property(copy, nonatomic) CDUnknownBlockType playingStateDidEnterHandler; // @synthesize playingStateDidEnterHandler=_playingStateDidEnterHandler;
@property(copy, nonatomic) CDUnknownBlockType playbackDidFailHandler; // @synthesize playbackDidFailHandler=_playbackDidFailHandler;
@property(copy, nonatomic) CDUnknownBlockType playbackDidFinishHandler; // @synthesize playbackDidFinishHandler=_playbackDidFinishHandler;
@property(copy, nonatomic) CDUnknownBlockType playbackTimeDidChangeHandler; // @synthesize playbackTimeDidChangeHandler=_playbackTimeDidChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType videoFrameTimeDidChangeHandler; // @synthesize videoFrameTimeDidChangeHandler=_videoFrameTimeDidChangeHandler;
- (void)makeCoverWithSnapshotOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)makeCoverWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)leaveClosedTimeRangeModeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enterClosedTimeRangeModeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateVideoFrameTime:(const void *)arg1 timeRange:(const void *)arg2;
- (void)updatePlaybackTime:(const void *)arg1 timeRange:(const void *)arg2;
- (void)updatePlaybackTime;
- (void)stopObservingPlaybackTime;
- (void)startObservingPlaybackTime;
@property(readonly, nonatomic) CDStruct_e83c9415 mediaTimeRange;
- (void)skipRefreshNextVideoFrame;
- (void)commitUpdateWithTimeline:(id)arg1 previewTime:(CDStruct_1b6d18a9)arg2 shouldForceUpdatePreview:(_Bool)arg3 isFullUpdate:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)snapshotAtTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDStruct_1b6d18a9)clipSkimToTime:(CDStruct_1b6d18a9)arg1 forceUpdate:(_Bool)arg2;
- (CDStruct_1b6d18a9)skimToTime:(CDStruct_1b6d18a9)arg1 forceUpdate:(_Bool)arg2 shouldNotDrop:(_Bool)arg3;
- (CDStruct_1b6d18a9)skimToTime:(CDStruct_1b6d18a9)arg1 forceUpdate:(_Bool)arg2;
- (CDStruct_1b6d18a9)skimToProgress:(double)arg1 forceUpdate:(_Bool)arg2 shouldNotDrop:(_Bool)arg3;
- (CDStruct_1b6d18a9)skimToProgress:(double)arg1 forceUpdate:(_Bool)arg2;
- (void)endClipSkimmingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginClipSkimmingWithClipSegment:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginClipSkimmingWithClipSegment:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)temporaryUpdatePlaybackDuration:(CDStruct_1b6d18a9)arg1;
- (void)updatePlaybackOptionsWithTimeRange:(CDStruct_e83c9415)arg1 playbackLoopCount:(long long)arg2 shouldResetFinishedLoopCount:(_Bool)arg3;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startPlayingWithTimeRange:(CDStruct_e83c9415)arg1 initialStartTime:(CDStruct_1b6d18a9)arg2 playbackLoopCount:(long long)arg3 isAudioEnabled:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)isPlaying;
- (void)close;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)openWithTimeline:(id)arg1 initialPreviewTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)destroyWindowCon;
- (void)unbindRenderView;
- (_Bool)bindRenderView:(id)arg1 error:(id *)arg2;
- (void)teardownIfNeeded;
- (void)dealloc;
- (id)init;
- (void)addDecorationBoxTitleWithSegmentID:(id)arg1 corner:(int)arg2 textOverlayDesc:(id)arg3;
- (void)removeAllDecorationBoxes;
- (void)addDecorationBoxesWithConfigs:(id)arg1;
- (void)endTrackingSafeArea;
- (void)beginTrackingSafeAreaWithSegmentID:(id)arg1 normalizedSafeRect:(struct CGRect)arg2 trackingHandler:(CDUnknownBlockType)arg3;
- (void)updateRenderAreaRotation:(double)arg1;
- (void)updateRenderAreaScale:(double)arg1;
- (void)updateRenderAreaPosition:(struct CGPoint)arg1;
- (void)fetchRenderAreaRotationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchRenderAreaScaleWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchRenderAreaPositionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)isHandleBoxHittedAtLocation:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct CGPoint)renderPointSize;
- (void)configHandleBoxWithRenderNodeID:(const void *)arg1 enabledRectCornerBits:(unsigned int)arg2 edgeInsets:(const void *)arg3 isHandleBoxEnabled:(_Bool)arg4 borderStyleDesc:(const void *)arg5;
- (void)addHandleBoxTitleWithCorner:(int)arg1 textOverlayDesc:(id)arg2;
- (void)removeAllHandleBoxTitles;
- (void)addHandleBoxButtonWithCorner:(int)arg1 buttonImage:(const void *)arg2 buttonImageSize:(const void *)arg3;
- (void)removeAllHandleBoxButtons;
- (void)removeHandleBox;
- (void)showHandleBoxForSegment:(id)arg1 items:(id)arg2 titles:(id)arg3 edgeInsets:(struct UIEdgeInsets)arg4 borderStyle:(id)arg5;
- (void)showHandleBoxForSegment:(id)arg1 itemAtCorners:(id)arg2 titles:(id)arg3 edgeInsets:(struct UIEdgeInsets)arg4 borderStyle:(id)arg5;
- (void)showHandleBoxForSegment:(id)arg1 items:(id)arg2 edgeInsets:(struct UIEdgeInsets)arg3 borderStyle:(id)arg4;
- (void)showHandleBoxForSegment:(id)arg1 itemAtCorners:(id)arg2 edgeInsets:(struct UIEdgeInsets)arg3 borderStyle:(id)arg4;
- (void)updateHandleBoxEnabled:(_Bool)arg1;
- (void)disableHandleBox;
- (void)enableHandleBox;
- (struct CGRect)calcRenderRectForNormalizedViewRect:(struct CGRect)arg1;
- (float)calcViewSpaceRotationAngleForRenderSpaceRotationAngle:(float)arg1;
- (float)calcRenderSpaceRotationAngleForViewSpaceRotationAngle:(float)arg1;
- (struct CGPoint)calcViewPointForHandleBoxPoint:(struct CGPoint)arg1;
- (struct CGRect)calcViewFrameForRenderSpaceFrame:(const void *)arg1;
- (struct CGSize)calcViewSizeForRenderSpaceSize:(const void *)arg1;
- (struct CGPoint)calcPointForRenderCoord:(struct CGPoint)arg1;
- (struct CGPoint)calcRenderCoordForPoint:(struct CGPoint)arg1;
- (struct CGRect)renderFrameForSegmentWithID:(id)arg1;
- (id)segmentIDAndFrame:(struct CGRect *)arg1 atLocation:(struct CGPoint)arg2 hitTestInsets:(struct UIEdgeInsets)arg3;
- (id)segmentIDAndFrame:(struct CGRect *)arg1 atLocation:(struct CGPoint)arg2;
- (void)registerHandleBoxSettingsDidChangeNotification;

@end

