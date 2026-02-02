//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, RichTextView, UIButton, UIImageView, UILabel, UIScrollView, UIView, WCPayRealnameGuideInfo;
@protocol WCPayRealNameTipsViewControllerDelegate;

@interface WCPayRealNameTipsViewController
{
    id <WCPayRealNameTipsViewControllerDelegate> _delegate;
    id <WCPayRealNameTipsViewControllerDelegate> _reportDelegate;
    WCPayRealnameGuideInfo *_realNameInfo;
    UIView *_backgroundView;
    UIScrollView *_contentView;
    UIButton *_closeButton;
    UIImageView *_icon;
    UILabel *_titleLabel;
    UIView *_separatorLine;
    UILabel *_subTitleLabel;
    UIButton *_confirmButton;
    RichTextView *_termsOfService;
    MMUIButton *_checkBoxButton;
    RichTextView *_checkBoxInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *checkBoxInfo; // @synthesize checkBoxInfo=_checkBoxInfo;
@property(retain, nonatomic) MMUIButton *checkBoxButton; // @synthesize checkBoxButton=_checkBoxButton;
@property(retain, nonatomic) RichTextView *termsOfService; // @synthesize termsOfService=_termsOfService;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) WCPayRealnameGuideInfo *realNameInfo; // @synthesize realNameInfo=_realNameInfo;
@property(nonatomic) __weak id <WCPayRealNameTipsViewControllerDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(nonatomic) __weak id <WCPayRealNameTipsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutForBalance;
- (id)createDotLabel;
- (void)webViewReturn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)clickCheckBox:(id)arg1;
- (void)openWeb:(id)arg1;
- (void)confirm;
- (void)close;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

