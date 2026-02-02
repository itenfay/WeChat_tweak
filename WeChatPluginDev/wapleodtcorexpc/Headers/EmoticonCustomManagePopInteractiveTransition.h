//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIPercentDrivenInteractiveTransition;
@protocol EmoticonCustomManagePopInteractiveTransitionDelegate;

@interface EmoticonCustomManagePopInteractiveTransition : NSObject
{
    id <EmoticonCustomManagePopInteractiveTransitionDelegate> _delegate;
    UIPercentDrivenInteractiveTransition *_interactivePopTransition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactivePopTransition; // @synthesize interactivePopTransition=_interactivePopTransition;
@property(nonatomic) __weak id <EmoticonCustomManagePopInteractiveTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handlePopBackInteractivePopGesture:(id)arg1;
- (_Bool)isInteracting;

@end

