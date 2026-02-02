//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, NSString, RichTextView, UIButton, UIImageView, UILabel, UIScrollView, UIView;
@protocol MMAuthorizeViewControllerDelegate;

@interface MMAuthorizeOverseasViewController
{
    id <MMAuthorizeViewControllerDelegate> _delegate;
    UIButton *_comfirmBtn;
    UIButton *_denyBtn;
    UIView *_scrollContainerView;
    UIScrollView *_scrollView;
    CAGradientLayer *_gradientMaskLayer;
    UILabel *_titleLabel;
    UIImageView *_dot1;
    UIImageView *_dot2;
    RichTextView *_contentLabel1;
    RichTextView *_contentLabel2;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *contentLabel2; // @synthesize contentLabel2=_contentLabel2;
@property(retain, nonatomic) RichTextView *contentLabel1; // @synthesize contentLabel1=_contentLabel1;
@property(retain, nonatomic) UIImageView *dot2; // @synthesize dot2=_dot2;
@property(retain, nonatomic) UIImageView *dot1; // @synthesize dot1=_dot1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CAGradientLayer *gradientMaskLayer; // @synthesize gradientMaskLayer=_gradientMaskLayer;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *scrollContainerView; // @synthesize scrollContainerView=_scrollContainerView;
@property(retain, nonatomic) UIButton *denyBtn; // @synthesize denyBtn=_denyBtn;
@property(retain, nonatomic) UIButton *comfirmBtn; // @synthesize comfirmBtn=_comfirmBtn;
@property(nonatomic) __weak id <MMAuthorizeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onReturn;
- (void)onDenyBtnClick;
- (void)onComfirmBtnClick;
- (void)initFooterView;
- (void)fillContentLabel;
- (id)genContentTextView;
- (void)initContentView;
- (void)initTitleView;
- (void)viewDidLayoutSubviews;
- (void)initSubviews;
- (_Bool)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

