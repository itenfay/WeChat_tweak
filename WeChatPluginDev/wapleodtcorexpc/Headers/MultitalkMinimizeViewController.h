//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BackgroundMoveView, MultitalkMinimizeView, NSString;
@protocol MultitalkMinimizeViewControllerDelegate;

@interface MultitalkMinimizeViewController
{
    BackgroundMoveView *m_backgroundImageView;
    id <MultitalkMinimizeViewControllerDelegate> m_delegate;
    MultitalkMinimizeView *_m_minimizeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MultitalkMinimizeView *m_minimizeView; // @synthesize m_minimizeView=_m_minimizeView;
@property(nonatomic) __weak id <MultitalkMinimizeViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) BackgroundMoveView *m_backgroundImageView; // @synthesize m_backgroundImageView;
- (void)onBackgroundMoveViewTap;
- (void)updateDescMode:(unsigned long long)arg1 withDisplayTime:(double)arg2;
- (void)startTimer;
- (void)viewDidLayoutSubviews;
- (void)initContainerView;
- (void)initBackgroundView;
- (void)viewDidLoad;
- (void)adsorbToWindow;
- (id)containerView;
- (id)backgroundImage;
- (id)backgroundView;
- (struct CGRect)moveViewOriginRect;
- (id)moveView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

