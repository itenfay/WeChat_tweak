//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MiniTaskEdgeGestureHandler, MinimizeTaskData, MultiTaskPageActionInfo, UIImage;
@protocol MiniTaskTransitionAnimationDelegate;

@interface MiniTaskTransitionContext : NSObject
{
    _Bool _isPresent;
    _Bool _isFromFlutterScenes;
    unsigned int _fromSource;
    unsigned int _animationType;
    MinimizeTaskData *_taskData;
    UIImage *_snapshotImage;
    UIImage *_iconImage;
    UIImage *_dismissSnapshotImage;
    UIImage *_frontImage;
    CDUnknownBlockType _snapshotFrameGetter;
    CDUnknownBlockType _presentEndCallback;
    CDUnknownBlockType _dimissBeginCallback;
    CDUnknownBlockType _dimissEndCallback;
    MiniTaskEdgeGestureHandler *_presentGestureHandler;
    id <MiniTaskTransitionAnimationDelegate> _animationDelegate;
    double _fadeAnimateDuration;
    MultiTaskPageActionInfo *_pageActionInfo;
    struct CGRect _snapshotFrameToSuperView;
    struct CGRect _snapshotFrameToWindow;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromFlutterScenes; // @synthesize isFromFlutterScenes=_isFromFlutterScenes;
@property(retain, nonatomic) MultiTaskPageActionInfo *pageActionInfo; // @synthesize pageActionInfo=_pageActionInfo;
@property(nonatomic) unsigned int animationType; // @synthesize animationType=_animationType;
@property(nonatomic) double fadeAnimateDuration; // @synthesize fadeAnimateDuration=_fadeAnimateDuration;
@property(nonatomic) __weak id <MiniTaskTransitionAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(retain, nonatomic) MiniTaskEdgeGestureHandler *presentGestureHandler; // @synthesize presentGestureHandler=_presentGestureHandler;
@property(copy, nonatomic) CDUnknownBlockType dimissEndCallback; // @synthesize dimissEndCallback=_dimissEndCallback;
@property(copy, nonatomic) CDUnknownBlockType dimissBeginCallback; // @synthesize dimissBeginCallback=_dimissBeginCallback;
@property(copy, nonatomic) CDUnknownBlockType presentEndCallback; // @synthesize presentEndCallback=_presentEndCallback;
@property(copy, nonatomic) CDUnknownBlockType snapshotFrameGetter; // @synthesize snapshotFrameGetter=_snapshotFrameGetter;
@property(retain, nonatomic) UIImage *frontImage; // @synthesize frontImage=_frontImage;
@property(retain, nonatomic) UIImage *dismissSnapshotImage; // @synthesize dismissSnapshotImage=_dismissSnapshotImage;
@property(nonatomic) struct CGRect snapshotFrameToWindow; // @synthesize snapshotFrameToWindow=_snapshotFrameToWindow;
@property(nonatomic) struct CGRect snapshotFrameToSuperView; // @synthesize snapshotFrameToSuperView=_snapshotFrameToSuperView;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property(retain, nonatomic) MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
@property(nonatomic) unsigned int fromSource; // @synthesize fromSource=_fromSource;
- (void)onDismissTransitionEnd:(unsigned int)arg1 finish:(_Bool)arg2;
- (void)onDismissTransitionBegin:(unsigned int)arg1;
- (void)onPresentTransitionEnd:(_Bool)arg1;
- (void)tryUpdateSnapshotFrame;

@end

