//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIButton, UIImageView, UILabel, UIView;
@protocol WCFinderRictTextTipsViewControllerDelegate;

@interface WCFinderRichTextTipsViewController
{
    id <WCFinderRictTextTipsViewControllerDelegate> _delegate;
    UIView *_backgroundView;
    UIView *_contentView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    RichTextView *_tipsLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) RichTextView *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <WCFinderRictTextTipsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)roundCornersOnView:(id)arg1 onTopLeft:(_Bool)arg2 topRight:(_Bool)arg3 bottomLeft:(_Bool)arg4 bottomRight:(_Bool)arg5 radius:(float)arg6;
- (void)realHideWithoutReport;
- (void)hide;
- (void)confirm;
- (void)cancel;
- (void)showTipsWithTipsTitle:(id)arg1 tipsDetail:(id)arg2 cancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4 viewController:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

