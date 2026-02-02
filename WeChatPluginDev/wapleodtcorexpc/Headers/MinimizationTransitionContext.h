//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface MinimizationTransitionContext : NSObject
{
    _Bool _snapshotSync;
    UIView *_floatSnapshotView;
    UIView *_taskSnapshotView;
    double _transitionDuration;
    UIView *_fakeFromView;
    UIView *_realFromView;
    UIView *_backgroundShadowView;
    struct CGSize _floatContentSize;
    struct CGRect _floatFrame;
    struct CGRect _taskSnapshotViewInitFrame;
    struct CGRect _fromViewInitFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect fromViewInitFrame; // @synthesize fromViewInitFrame=_fromViewInitFrame;
@property(retain, nonatomic) UIView *backgroundShadowView; // @synthesize backgroundShadowView=_backgroundShadowView;
@property(retain, nonatomic) UIView *realFromView; // @synthesize realFromView=_realFromView;
@property(retain, nonatomic) UIView *fakeFromView; // @synthesize fakeFromView=_fakeFromView;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) struct CGRect taskSnapshotViewInitFrame; // @synthesize taskSnapshotViewInitFrame=_taskSnapshotViewInitFrame;
@property(retain, nonatomic) UIView *taskSnapshotView; // @synthesize taskSnapshotView=_taskSnapshotView;
@property(nonatomic) _Bool snapshotSync; // @synthesize snapshotSync=_snapshotSync;
@property(nonatomic) struct CGSize floatContentSize; // @synthesize floatContentSize=_floatContentSize;
@property(nonatomic) struct CGRect floatFrame; // @synthesize floatFrame=_floatFrame;
@property(retain, nonatomic) UIView *floatSnapshotView; // @synthesize floatSnapshotView=_floatSnapshotView;
- (void)clearAnimationContext;
- (id)init;

@end

