//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage, UIImageView, UIView, UIViewPropertyAnimator;

@interface NewLifePopTransition : NSObject
{
    _Bool _cancelled;
    _Bool _isFromFlutter;
    _Bool _hasClearSnapshot;
    int _taskId;
    double _duration;
    UIView *_fromView;
    UIView *_fromViewMask;
    UIImageView *_toSnapshotImageView;
    UIView *_toSnapshotView;
    UIView *_toView;
    UIView *_toViewMask;
    UIView *_backgroundView;
    UIColor *_backgroundColor;
    CDUnknownBlockType _endCallback;
    CDUnknownBlockType _popTargetCallback;
    UIImage *_toImage;
    UIViewPropertyAnimator *_animator;
    struct CGPoint _viewOffset;
    struct CGRect _toContentFrame;
    struct CGRect _toFrame;
    struct CGRect _fromFrame;
    struct CGRect _fromContentFrame;
    struct CGRect _maskTargetFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) UIImage *toImage; // @synthesize toImage=_toImage;
@property(copy, nonatomic) CDUnknownBlockType popTargetCallback; // @synthesize popTargetCallback=_popTargetCallback;
@property(copy, nonatomic) CDUnknownBlockType endCallback; // @synthesize endCallback=_endCallback;
@property(nonatomic) _Bool hasClearSnapshot; // @synthesize hasClearSnapshot=_hasClearSnapshot;
@property(nonatomic) _Bool isFromFlutter; // @synthesize isFromFlutter=_isFromFlutter;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGRect maskTargetFrame; // @synthesize maskTargetFrame=_maskTargetFrame;
@property(nonatomic) struct CGRect fromContentFrame; // @synthesize fromContentFrame=_fromContentFrame;
@property(nonatomic) struct CGRect fromFrame; // @synthesize fromFrame=_fromFrame;
@property(nonatomic) struct CGRect toFrame; // @synthesize toFrame=_toFrame;
@property(nonatomic) struct CGRect toContentFrame; // @synthesize toContentFrame=_toContentFrame;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *toViewMask; // @synthesize toViewMask=_toViewMask;
@property(retain, nonatomic) UIView *toView; // @synthesize toView=_toView;
@property(retain, nonatomic) UIView *toSnapshotView; // @synthesize toSnapshotView=_toSnapshotView;
@property(retain, nonatomic) UIImageView *toSnapshotImageView; // @synthesize toSnapshotImageView=_toSnapshotImageView;
@property(retain, nonatomic) UIView *fromViewMask; // @synthesize fromViewMask=_fromViewMask;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(nonatomic) struct CGPoint viewOffset; // @synthesize viewOffset=_viewOffset;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (double)transitionDuration:(id)arg1;
- (void)tryClearSnapShotView;
- (void)animateTransition:(id)arg1;
- (void)cancelTransition;
- (void)continueInteractiveTransition;
- (void)scrollDownInProgress:(double)arg1 translation:(struct CGPoint)arg2;
- (void)dragWithProgress:(double)arg1 translation:(struct CGPoint)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

