//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, MMDragDisplayLinkContext, NSDate, NSString, UIPanGestureRecognizer, UITableView, UIView;

@interface MMDragDownAnimateHelper : NSObject
{
    _Bool _disableDragDown;
    _Bool _isAtDragDownState;
    _Bool _enabled;
    _Bool _hasTriggerDragShock;
    double _hoverTargetOffset;
    double _expandedHeight;
    UITableView *_frontTableView;
    UIView *_frontContainerView;
    double _frontViewTop;
    NSDate *_dragStartTime;
    double _lastMovement;
    double _beginTouchPosY;
    double _lastTouchPosY;
    double _frontViewY;
    double _currentDragProgress;
    double _currentAlpha;
    UIPanGestureRecognizer *_dragPanGesture;
    CDUnknownBlockType _enterHoverAnimation;
    CDUnknownBlockType _enterHoverCompletion;
    CDUnknownBlockType _exitHoverPreparation;
    CDUnknownBlockType _exitHoverAnimation;
    CDUnknownBlockType _exitHoverCompletion;
    CADisplayLink *_dragAnimationLink;
    MMDragDisplayLinkContext *_dragAnimationContext;
    unsigned long long _animationType;
    double _timestamp;
    double _animationCurrentTime;
}

- (void).cxx_destruct;
@property(nonatomic) double animationCurrentTime; // @synthesize animationCurrentTime=_animationCurrentTime;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long animationType; // @synthesize animationType=_animationType;
@property(retain, nonatomic) MMDragDisplayLinkContext *dragAnimationContext; // @synthesize dragAnimationContext=_dragAnimationContext;
@property(retain, nonatomic) CADisplayLink *dragAnimationLink; // @synthesize dragAnimationLink=_dragAnimationLink;
@property(copy, nonatomic) CDUnknownBlockType exitHoverCompletion; // @synthesize exitHoverCompletion=_exitHoverCompletion;
@property(copy, nonatomic) CDUnknownBlockType exitHoverAnimation; // @synthesize exitHoverAnimation=_exitHoverAnimation;
@property(copy, nonatomic) CDUnknownBlockType exitHoverPreparation; // @synthesize exitHoverPreparation=_exitHoverPreparation;
@property(copy, nonatomic) CDUnknownBlockType enterHoverCompletion; // @synthesize enterHoverCompletion=_enterHoverCompletion;
@property(copy, nonatomic) CDUnknownBlockType enterHoverAnimation; // @synthesize enterHoverAnimation=_enterHoverAnimation;
@property(retain, nonatomic) UIPanGestureRecognizer *dragPanGesture; // @synthesize dragPanGesture=_dragPanGesture;
@property(nonatomic) double currentAlpha; // @synthesize currentAlpha=_currentAlpha;
@property(nonatomic) double currentDragProgress; // @synthesize currentDragProgress=_currentDragProgress;
@property(nonatomic) _Bool hasTriggerDragShock; // @synthesize hasTriggerDragShock=_hasTriggerDragShock;
@property(nonatomic) double frontViewY; // @synthesize frontViewY=_frontViewY;
@property(nonatomic) double lastTouchPosY; // @synthesize lastTouchPosY=_lastTouchPosY;
@property(nonatomic) double beginTouchPosY; // @synthesize beginTouchPosY=_beginTouchPosY;
@property(nonatomic) double lastMovement; // @synthesize lastMovement=_lastMovement;
@property(retain, nonatomic) NSDate *dragStartTime; // @synthesize dragStartTime=_dragStartTime;
@property(nonatomic) double frontViewTop; // @synthesize frontViewTop=_frontViewTop;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak UIView *frontContainerView; // @synthesize frontContainerView=_frontContainerView;
@property(nonatomic) __weak UITableView *frontTableView; // @synthesize frontTableView=_frontTableView;
@property(nonatomic) double expandedHeight; // @synthesize expandedHeight=_expandedHeight;
@property(nonatomic) _Bool isAtDragDownState; // @synthesize isAtDragDownState=_isAtDragDownState;
@property(nonatomic) double hoverTargetOffset; // @synthesize hoverTargetOffset=_hoverTargetOffset;
@property(nonatomic) _Bool disableDragDown; // @synthesize disableDragDown=_disableDragDown;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)resetDragCompletion;
- (void)resetDragTransition:(double)arg1;
- (void)exitDragCompletion;
- (void)exitDragTransition:(double)arg1;
- (void)enterDragCompletion;
- (void)enterDragTransition:(double)arg1;
- (void)handleDragDownAnimation;
- (void)invaliateDragAnimation:(unsigned long long)arg1;
- (void)lightShock;
- (void)exitDragDownState:(_Bool)arg1;
- (void)enterDragDownState:(_Bool)arg1;
- (_Bool)canTrigerAtPositionY:(double)arg1;
- (double)progressForCurrentOffset:(double)arg1;
- (void)resetFrontViewOffsetAnimated:(_Bool)arg1;
- (void)handleAlphaAnimateWithFrontViewTopOffset:(double)arg1;
- (void)handlePanGestureAtHoverDisable:(id)arg1;
- (void)handlePanGestureAtHoverEnable:(id)arg1;
- (void)processFrontViewGesture:(id)arg1;
- (void)onDidExitDragDownState;
- (void)onWillExitDragDownState;
- (void)onDidEnterDragDownState;
- (void)onWillEnterDragDownState;
- (void)onInitUI;
- (void)onDragDownProgressChange:(double)arg1;
- (void)onBeginDragging;
- (void)setExitDragDownPreparation:(CDUnknownBlockType)arg1;
- (void)setExitDragDownAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setEnterDragDownAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) double currentDragDownProgress;
- (void)setDisableHover:(_Bool)arg1;
- (void)setupUI;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (id)initWithFrontContainerView:(id)arg1 frontInitialTop:(double)arg2 frontTableView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

