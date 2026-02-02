//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveMinimizeBackgroundMoveView, NSString, UIView;
@protocol MMLiveMinimizeViewControllerDelegate;

@interface MMLiveMinimizeViewController
{
    UIView *_liveView;
    id <MMLiveMinimizeViewControllerDelegate> _liveMinimizeDelegate;
    MMLiveMinimizeBackgroundMoveView *_backgroundMoveView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveMinimizeBackgroundMoveView *backgroundMoveView; // @synthesize backgroundMoveView=_backgroundMoveView;
@property(nonatomic) __weak id <MMLiveMinimizeViewControllerDelegate> liveMinimizeDelegate; // @synthesize liveMinimizeDelegate=_liveMinimizeDelegate;
@property(retain, nonatomic) UIView *liveView; // @synthesize liveView=_liveView;
- (void)onMMLiveMinimizeBackgroundMoveViewTap;
- (void)hideView;
- (void)showView;
- (void)viewDidLayoutSubviews;
- (void)initBackgroundMoveView;
- (void)adsorbToWindow;
- (void)setBackImage:(id)arg1;
- (id)blurView;
- (id)moveView;
- (void)viewDidLoad;
- (id)initWithLiveView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

