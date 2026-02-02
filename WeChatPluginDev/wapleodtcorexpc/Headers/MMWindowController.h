//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIWindow, UIViewController;

@interface MMWindowController : NSObject
{
    int _transitionAnimationOptions;
    int _animType;
    _Bool _bIsAnimationAlpha;
    MMUIWindow *_window;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsAnimationAlpha; // @synthesize bIsAnimationAlpha=_bIsAnimationAlpha;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) MMUIWindow *window; // @synthesize window=_window;
- (void)doWindowCloseAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)closeWindowAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)closeWindowAnimated:(_Bool)arg1;
- (void)showWindowAnimateType:(int)arg1 withTransitionAnimation:(int)arg2;
- (void)showWindowAnimated:(_Bool)arg1 withTransitionAnimation:(int)arg2;
- (void)showWindowAnimated:(_Bool)arg1;
- (void)setupWindowWithLevel:(int)arg1;
- (id)getMainWindow;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 windowLevel:(int)arg2;

@end

