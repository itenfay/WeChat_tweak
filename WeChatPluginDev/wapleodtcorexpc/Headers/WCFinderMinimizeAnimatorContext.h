//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView, UIViewController, WCFinderTransitionUserInfo;
@protocol UIViewControllerContextTransitioning;

@interface WCFinderMinimizeAnimatorContext : NSObject
{
    _Bool _fromGesture;
    _Bool _isExpand;
    UIView *_fromView;
    UIViewController *_fromVC;
    UIView *_toView;
    UIViewController *_toVC;
    double _gestureMaskAlpha;
    WCFinderTransitionUserInfo *_userInfo;
    id <UIViewControllerContextTransitioning> _ctx;
}

+ (id)wrapContext:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> ctx; // @synthesize ctx=_ctx;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
@property(retain, nonatomic) WCFinderTransitionUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double gestureMaskAlpha; // @synthesize gestureMaskAlpha=_gestureMaskAlpha;
@property(nonatomic) _Bool fromGesture; // @synthesize fromGesture=_fromGesture;
@property(retain, nonatomic) UIViewController *toVC; // @synthesize toVC=_toVC;
@property(retain, nonatomic) UIView *toView; // @synthesize toView=_toView;
@property(retain, nonatomic) UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
- (struct CGRect)backViewInitialFrame;
- (struct CGRect)backViewFinalFrame;
- (struct CGRect)frontViewFinalFrame;
- (struct CGRect)frontViewInitialFrame;
- (struct CGRect)toViewInitialFrame;
- (struct CGRect)toViewFinalFrame;
- (struct CGRect)fromViewInitialFrame;
@property(readonly, nonatomic) _Bool isPresentingOrDismiss;
- (id)backVC;
- (id)frontVC;
- (id)backView;
- (id)frontView;
@property(readonly, nonatomic) UIView *container;

@end

