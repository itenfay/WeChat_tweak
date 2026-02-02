//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NewLifePopTransition, NewLifePushTransition, UIColor, UIImage, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition, UIScreenEdgePanGestureRecognizer, UIViewController;

@interface NewLifeTransitionManager : NSObject
{
    _Bool _enableScrollDownPop;
    _Bool _isFromFlutter;
    _Bool _cancelByIntercept;
    _Bool _isInteractive;
    int _taskId;
    UIViewController *animatedTransitionRespondViewController;
    NewLifePushTransition *_pushTransition;
    NewLifePopTransition *_popTransition;
    CDUnknownBlockType _pushStartCallback;
    CDUnknownBlockType _pushEndCallback;
    CDUnknownBlockType _popEndCallback;
    CDUnknownBlockType _popTargetCallback;
    double _startTime;
    UIColor *_snapshotBackgroundColor;
    double _edgeDragThreshold;
    double _duration;
    UIImage *_fromImage;
    UIViewController *_viewController;
    UIScreenEdgePanGestureRecognizer *_edgeGesture;
    UIPanGestureRecognizer *_scrollGesure;
    long long _operation;
    UIPercentDrivenInteractiveTransition *_interactive;
    struct CGPoint _viewOffset;
    struct CGRect _fromFrame;
    struct CGRect _fromContentFrame;
    struct CGRect _toContentFrame;
}

+ (struct CGAffineTransform)getToViewFromTransform:(struct CGRect)arg1 toFrame:(struct CGRect)arg2 fromContentFrame:(struct CGRect)arg3 toContentFrame:(struct CGRect)arg4;
+ (struct CGAffineTransform)getFromViewToTransform:(struct CGRect)arg1 toFrame:(struct CGRect)arg2 fromContentFrame:(struct CGRect)arg3 toContentFrame:(struct CGRect)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactive; // @synthesize interactive=_interactive;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(retain, nonatomic) UIPanGestureRecognizer *scrollGesure; // @synthesize scrollGesure=_scrollGesure;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture; // @synthesize edgeGesture=_edgeGesture;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIImage *fromImage; // @synthesize fromImage=_fromImage;
@property(nonatomic) struct CGRect toContentFrame; // @synthesize toContentFrame=_toContentFrame;
@property(nonatomic) struct CGRect fromContentFrame; // @synthesize fromContentFrame=_fromContentFrame;
@property(nonatomic) struct CGRect fromFrame; // @synthesize fromFrame=_fromFrame;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double edgeDragThreshold; // @synthesize edgeDragThreshold=_edgeDragThreshold;
@property(nonatomic) _Bool cancelByIntercept; // @synthesize cancelByIntercept=_cancelByIntercept;
@property(nonatomic) _Bool isFromFlutter; // @synthesize isFromFlutter=_isFromFlutter;
@property(retain, nonatomic) UIColor *snapshotBackgroundColor; // @synthesize snapshotBackgroundColor=_snapshotBackgroundColor;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CDUnknownBlockType popTargetCallback; // @synthesize popTargetCallback=_popTargetCallback;
@property(copy, nonatomic) CDUnknownBlockType popEndCallback; // @synthesize popEndCallback=_popEndCallback;
@property(copy, nonatomic) CDUnknownBlockType pushEndCallback; // @synthesize pushEndCallback=_pushEndCallback;
@property(copy, nonatomic) CDUnknownBlockType pushStartCallback; // @synthesize pushStartCallback=_pushStartCallback;
@property(nonatomic) struct CGPoint viewOffset; // @synthesize viewOffset=_viewOffset;
@property(nonatomic) int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool enableScrollDownPop; // @synthesize enableScrollDownPop=_enableScrollDownPop;
@property(retain, nonatomic) NewLifePopTransition *popTransition; // @synthesize popTransition=_popTransition;
@property(retain, nonatomic) NewLifePushTransition *pushTransition; // @synthesize pushTransition=_pushTransition;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController;
- (id)getInteractiveTransition;
- (_Bool)updateOperation:(long long)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (_Bool)_endCardDragging:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 isFast:(_Bool)arg3;
- (void)cancelPopWithInteractive;
- (void)continuePopWithInteractive;
- (void)popWithInteractive;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleScrollGesture:(id)arg1;
- (void)handleGesture:(id)arg1;
- (void)dealloc;
- (void)setupPopTransition;
- (void)setupPushTransition;
- (_Bool)hasCustomPopTransition;
- (void)setupViewController:(id)arg1;
- (void)enableEdgeDrag:(_Bool)arg1;
- (void)updateSnapshot:(id)arg1 frame:(struct CGRect)arg2 contentFrame:(struct CGRect)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

