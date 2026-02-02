//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController, WAWebViewController;

@interface WAAppDismissAnimateTransition : NSObject
{
    _Bool _isInteracting;
    _Bool _maskEnable;
    _Bool _needZoom;
    _Bool _forbidRoundCorner;
    UIViewController *animatedTransitionRespondViewController;
    WAWebViewController *_currentWebviewController;
    long long _orientationToRestore;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forbidRoundCorner; // @synthesize forbidRoundCorner=_forbidRoundCorner;
@property(nonatomic) long long orientationToRestore; // @synthesize orientationToRestore=_orientationToRestore;
@property(nonatomic) _Bool needZoom; // @synthesize needZoom=_needZoom;
@property(nonatomic) _Bool maskEnable; // @synthesize maskEnable=_maskEnable;
@property(nonatomic) __weak WAWebViewController *currentWebviewController; // @synthesize currentWebviewController=_currentWebviewController;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithCurrentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

