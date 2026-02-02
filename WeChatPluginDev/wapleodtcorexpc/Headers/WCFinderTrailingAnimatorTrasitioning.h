//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIView, WCFinderTransitionAnimatorList, WCFinderTransitionUserInfo;
@protocol WCFinderTrailingAnimatorDelegate;

@interface WCFinderTrailingAnimatorTrasitioning : NSObject
{
    WCFinderTransitionAnimatorList *_transitioningAnimationProvider;
    WCFinderTransitionUserInfo *_provderUserInfo;
    long long _type;
    id <WCFinderTrailingAnimatorDelegate> _delegate;
    NSMutableArray *_completions;
    UIView *_cellMaskView;
    UIView *_copyedTabBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *copyedTabBar; // @synthesize copyedTabBar=_copyedTabBar;
@property(retain, nonatomic) UIView *cellMaskView; // @synthesize cellMaskView=_cellMaskView;
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(nonatomic) __weak id <WCFinderTrailingAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) WCFinderTransitionUserInfo *provderUserInfo; // @synthesize provderUserInfo=_provderUserInfo;
@property(retain, nonatomic) WCFinderTransitionAnimatorList *transitioningAnimationProvider; // @synthesize transitioningAnimationProvider=_transitioningAnimationProvider;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

