//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;
@protocol WCCardCodeAnimatorDelegate;

@interface WCCardCodeAnimator
{
    UIView *_view;
    UIView *_oldSuperView;
    UIView *_maskView;
    UIView *_newSuperView;
    struct CGRect _oriFrame;
    _Bool _bAnimating;
    double _animationDuration;
    double _scale;
    _Bool _bRotateRight;
    id <WCCardCodeAnimatorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) _Bool bRotateRight; // @synthesize bRotateRight=_bRotateRight;
@property(nonatomic) __weak id <WCCardCodeAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleExitFullScreen;
- (void)handleEnterFullScreen;
- (void)onTapRecognizer:(id)arg1;
- (void)setupView;
- (id)initWithView:(id)arg1 superView:(id)arg2;

@end

