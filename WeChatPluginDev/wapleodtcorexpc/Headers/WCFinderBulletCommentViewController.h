//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCFinderBulletInputView, WCFinderFeedContentVM;
@protocol WCFinderBulletCommentViewControllerDelegate;

@interface WCFinderBulletCommentViewController
{
    _Bool _shouldShowSwitchButton;
    id <WCFinderBulletCommentViewControllerDelegate> _delegate;
    WCFinderFeedContentVM *_contentVM;
    UIButton *_backgroundButton;
    WCFinderBulletInputView *_bulletInputView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderBulletInputView *bulletInputView; // @synthesize bulletInputView=_bulletInputView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) _Bool shouldShowSwitchButton; // @synthesize shouldShowSwitchButton=_shouldShowSwitchButton;
@property(nonatomic) __weak id <WCFinderBulletCommentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerYReportSdk;
- (void)onInputViewChangeBulletSwitchOpenState:(_Bool)arg1;
- (_Bool)isFinderViewer;
- (void)onCommitBulletCommentWithText:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)onBackgroundButtonClicked:(id)arg1;
- (void)hideBulletInputView;
- (void)showBulletInputView;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

