//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController, WAWebViewController;

@interface WASystemPopAnimateTransition : NSObject
{
    _Bool _isInteracting;
    _Bool _forbidInsertToVC;
    _Bool _maskEnable;
    _Bool _toVCOffsetEnable;
    _Bool _forbidShadow;
    UIViewController *animatedTransitionRespondViewController;
    WAWebViewController *_currentWebviewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forbidShadow; // @synthesize forbidShadow=_forbidShadow;
@property(nonatomic) _Bool toVCOffsetEnable; // @synthesize toVCOffsetEnable=_toVCOffsetEnable;
@property(nonatomic) _Bool maskEnable; // @synthesize maskEnable=_maskEnable;
@property(nonatomic) _Bool forbidInsertToVC; // @synthesize forbidInsertToVC=_forbidInsertToVC;
@property(nonatomic) __weak WAWebViewController *currentWebviewController; // @synthesize currentWebviewController=_currentWebviewController;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)init;
- (id)initWithCurrentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

