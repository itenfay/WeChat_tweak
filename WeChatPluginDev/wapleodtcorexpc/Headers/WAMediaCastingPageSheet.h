//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;
@protocol WAMediaCastingPageSheetDelegate;

@interface WAMediaCastingPageSheet
{
    _Bool _shouldRelease;
    id <WAMediaCastingPageSheetDelegate> _delegate;
    UIView *_contentView;
    UIView *_containerView;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldRelease; // @synthesize shouldRelease=_shouldRelease;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WAMediaCastingPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMainWindowFrameChanged;
- (void)deviceDidRotate:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTap:(id)arg1;
- (void)addTapRecognizer;
- (void)reloadInnerView;
- (struct CGPoint)containerDismissAnimationEndPoint;
- (struct CGPoint)containerShowAnimationStartPoint;
- (_Bool)cornerRaduis;
- (struct CGPoint)containerPoint;
- (struct CGSize)contentViewSize;
- (void)dismiss;
- (void)show;
- (void)setupRootViewController;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

