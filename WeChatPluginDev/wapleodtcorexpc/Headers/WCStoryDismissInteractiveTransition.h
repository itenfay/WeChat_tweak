//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIPercentDrivenInteractiveTransition;
@protocol WCStoryDismissInteractiveTransitionDelegate;

@interface WCStoryDismissInteractiveTransition : NSObject
{
    UIPercentDrivenInteractiveTransition *m_interactivePopTransition;
    id <WCStoryDismissInteractiveTransitionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCStoryDismissInteractiveTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIPercentDrivenInteractiveTransition *interactivePopTransition; // @synthesize interactivePopTransition=m_interactivePopTransition;
- (void)handlePopGesWithState:(long long)arg1 progress:(double)arg2 isSweepFastBlock:(CDUnknownBlockType)arg3;
- (void)handleDragDownInteractivePopGesture:(id)arg1;
- (void)handlePopBackInteractivePopGesture:(id)arg1;
@property(readonly, nonatomic) _Bool isInteracting;

@end

