//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIColor, UIImageView, UILabel, UIView;
@protocol WCFinderTipsViewControllerDelegate;

@interface WCFinderTipsViewController
{
    _Bool _supportLandscape;
    _Bool _lockOrientation;
    id <WCFinderTipsViewControllerDelegate> _delegate;
    UIColor *_confirmButtonBkgColor;
    UIColor *_confirmButtonTextColor;
    UIColor *_cancelButtonTextColor;
    UIButton *_confirmButton;
    UIView *_backgroundView;
    UIView *_contentView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_tipsLabel;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool lockOrientation; // @synthesize lockOrientation=_lockOrientation;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) _Bool supportLandscape; // @synthesize supportLandscape=_supportLandscape;
@property(retain, nonatomic) UIColor *cancelButtonTextColor; // @synthesize cancelButtonTextColor=_cancelButtonTextColor;
@property(retain, nonatomic) UIColor *confirmButtonTextColor; // @synthesize confirmButtonTextColor=_confirmButtonTextColor;
@property(retain, nonatomic) UIColor *confirmButtonBkgColor; // @synthesize confirmButtonBkgColor=_confirmButtonBkgColor;
@property(nonatomic) __weak id <WCFinderTipsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)roundCornersOnView:(id)arg1 onTopLeft:(_Bool)arg2 topRight:(_Bool)arg3 bottomLeft:(_Bool)arg4 bottomRight:(_Bool)arg5 radius:(float)arg6;
- (void)realHideWithoutReport;
- (void)hide;
- (void)confirm;
- (void)cancel;
- (void)setButtonTextFont:(id)arg1;
- (void)showTipsWithTipsTitle:(id)arg1 tipsDetail:(id)arg2 cancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4;
- (void)showTipsWithTipsDetail:(id)arg1 confirmButtonTitle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidLoad;

@end

