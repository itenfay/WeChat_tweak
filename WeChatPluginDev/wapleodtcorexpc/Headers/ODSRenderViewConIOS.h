//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface ODSRenderViewConIOS : UIViewController
{
    void *_touchManager;
    struct SharedPtr<XDSInputManager> _inputManager;
    struct XSimpleFunction _willLayoutSubviewNotifunc;
    struct XSimpleFunction _willAppearNotifunc;
    struct XSimpleFunction _willDisappearNotifunc;
    function_8a9ca1d4 _willTransitToSizeNotifunc;
    function_07344cbc _didTransitToSizeNotifunc;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) function_07344cbc didTransitToSizeNotifunc; // @synthesize didTransitToSizeNotifunc=_didTransitToSizeNotifunc;
@property(nonatomic) function_8a9ca1d4 willTransitToSizeNotifunc; // @synthesize willTransitToSizeNotifunc=_willTransitToSizeNotifunc;
@property(nonatomic) struct XSimpleFunction willDisappearNotifunc; // @synthesize willDisappearNotifunc=_willDisappearNotifunc;
@property(nonatomic) struct XSimpleFunction willAppearNotifunc; // @synthesize willAppearNotifunc=_willAppearNotifunc;
@property(nonatomic) struct XSimpleFunction willLayoutSubviewNotifunc; // @synthesize willLayoutSubviewNotifunc=_willLayoutSubviewNotifunc;
@property(readonly, nonatomic) const void *inputManager; // @synthesize inputManager=_inputManager;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)bridgeTouches:(id)arg1 withEvent:(id)arg2;
- (void)notifyDetachedByWindowCon;
- (void)notifyAttachedByWindowCon;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
@property(readonly, nonatomic) UIView *renderView;
- (void)viewDidLoad;
- (void)loadView;
- (void)setupInternal;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

