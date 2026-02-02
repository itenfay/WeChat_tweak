//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIButton, UIImageView, UILabel, UIScrollView, UIView, WCPayRealnameGuideInfo;
@protocol WCPayUploadIDCardTipsViewControllerDelegate;

@interface WCPayUploadIDCardTipsViewController
{
    id <WCPayUploadIDCardTipsViewControllerDelegate> _delegate;
    WCPayRealnameGuideInfo *_realNameInfo;
    UIView *_backgroundView;
    UIScrollView *_contentView;
    UIButton *_closeButton;
    UIImageView *_icon;
    UILabel *_titleLabel;
    UIView *_separatorLine;
    UILabel *_subTitleLabel;
    UIButton *_uploadButton;
    RichTextView *_termsOfService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *termsOfService; // @synthesize termsOfService=_termsOfService;
@property(retain, nonatomic) UIButton *uploadButton; // @synthesize uploadButton=_uploadButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) WCPayRealnameGuideInfo *realNameInfo; // @synthesize realNameInfo=_realNameInfo;
@property(nonatomic) __weak id <WCPayUploadIDCardTipsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)createDotLabel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)openTermsOfService;
- (void)uploadIdCard;
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

