//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCFinderTransitionUserInfo, WCFinderZoomAnimatingData, WCFinderZoomAnimatorShareData, WCFinderZoomCacheData;
@protocol WCFinderZoomAnimatorBehavior, WCFinderZoomAnimatorDelegate;

@interface WCFinderZoomAnimator : NSObject
{
    struct CGAffineTransform animatedViewAnimateTransform;
    struct CGAffineTransform snapViewAnimateTransform;
    double finalCornerRadius;
    _Bool _useSpring;
    _Bool _animatedAsCard;
    _Bool _allowDragDownClose;
    _Bool _coverContentMode;
    long long _type;
    double _springDamping;
    double _springVelocity;
    NSString *_refTid;
    id <WCFinderZoomAnimatorDelegate> _delegate;
    CDUnknownBlockType _checker;
    long long _animationCurve;
    long long _style;
    NSString *_animationKey;
    id _strongRefFactory;
    id <WCFinderZoomAnimatorBehavior> _snapFactory;
    NSMutableArray *_completions;
    WCFinderZoomAnimatingData *_animatingData;
    WCFinderTransitionUserInfo *_tempUserInfo;
    WCFinderZoomCacheData *_cacheData;
    WCFinderZoomAnimatorShareData *_shareData;
    double _centerPos;
}

+ (void)RebindAnimztorWithBehavior:(id)arg1 key:(id)arg2;
+ (id)ZoomAnimatorForKey:(id)arg1;
+ (_Bool)HasZoomAnimatorForKey:(id)arg1;
+ (id)defaultShareDataWithSetter:(CDUnknownBlockType)arg1;
+ (id)defaultShareData;
+ (id)animatorWithWeakBehavior:(id)arg1;
+ (id)animatorWithRetainBehavior:(id)arg1;
+ (id)animatorWithView:(id)arg1;
+ (_Bool)finderFeedTransitionAsCard;
- (void).cxx_destruct;
@property(nonatomic) double centerPos; // @synthesize centerPos=_centerPos;
@property(retain, nonatomic) WCFinderZoomAnimatorShareData *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) WCFinderZoomCacheData *cacheData; // @synthesize cacheData=_cacheData;
@property(retain, nonatomic) WCFinderTransitionUserInfo *tempUserInfo; // @synthesize tempUserInfo=_tempUserInfo;
@property(retain, nonatomic) WCFinderZoomAnimatingData *animatingData; // @synthesize animatingData=_animatingData;
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(nonatomic) __weak id <WCFinderZoomAnimatorBehavior> snapFactory; // @synthesize snapFactory=_snapFactory;
@property(retain, nonatomic) id strongRefFactory; // @synthesize strongRefFactory=_strongRefFactory;
@property(retain, nonatomic) NSString *animationKey; // @synthesize animationKey=_animationKey;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long animationCurve; // @synthesize animationCurve=_animationCurve;
@property(nonatomic) _Bool coverContentMode; // @synthesize coverContentMode=_coverContentMode;
@property(nonatomic) _Bool allowDragDownClose; // @synthesize allowDragDownClose=_allowDragDownClose;
@property(nonatomic) _Bool animatedAsCard; // @synthesize animatedAsCard=_animatedAsCard;
@property(copy, nonatomic) CDUnknownBlockType checker; // @synthesize checker=_checker;
@property(nonatomic) __weak id <WCFinderZoomAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *refTid; // @synthesize refTid=_refTid;
@property(nonatomic) double springVelocity; // @synthesize springVelocity=_springVelocity;
@property(nonatomic) double springDamping; // @synthesize springDamping=_springDamping;
@property(nonatomic) _Bool useSpring; // @synthesize useSpring=_useSpring;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)chooseAnimatorWithOther:(CDUnknownBlockType)arg1;
- (void)onAnimationCleanUp:(_Bool)arg1;
- (void)onAnimationPrepare:(long long)arg1 userInfo:(id)arg2;
- (_Bool)shouldPinBackViewWhenDraggingForVC:(id)arg1 userInfo:(id)arg2;
- (_Bool)shouldDragDownAsCardForVC:(id)arg1 userInfo:(id)arg2;
- (_Bool)shouldGestureClosureAsCardForVC:(id)arg1 userInfo:(id)arg2;
- (_Bool)hasCustomAnimationFromVC:(id)arg1 toVC:(id)arg2 type:(long long)arg3 userInfo:(id)arg4;
- (_Bool)shouldDragDownAsCard;
- (_Bool)shouldPinBackView;
- (_Bool)shouldGestureClosureAsCard;
- (void)onAnimationComplete:(_Bool)arg1 context:(id)arg2;
- (void)runPartAnimation:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)_runAnimationExpand:(id)arg1;
- (void)_runAnimationClosure:(id)arg1;
- (void)_runAnimation:(id)arg1;
- (double)customAnimationDuration:(double)arg1 progress:(double)arg2;
- (void)startAnimation:(id)arg1;
@property(readonly, nonatomic) NSString *currentRefTid;
@property(readonly, nonatomic) _Bool isClosure;
- (void)animatedDisappearDirectly:(id)arg1;
- (id)createCacheSnapView;
- (id)snapViewFromFactory:(id)arg1;
- (void)beforeAnimiation:(id)arg1;
@property(readonly, nonatomic) WCFinderTransitionUserInfo *userInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

