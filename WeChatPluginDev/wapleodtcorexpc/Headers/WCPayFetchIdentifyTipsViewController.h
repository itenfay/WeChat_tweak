//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UILabel, UIView, WCPayLargeAccountTipsDialog;
@protocol WCPayFetchIdentifyTipsViewControllerDelegate;

@interface WCPayFetchIdentifyTipsViewController
{
    WCPayLargeAccountTipsDialog *m_data;
    id <WCPayFetchIdentifyTipsViewControllerDelegate> _delegate;
    UIView *_backgroundView;
    UIView *_contentView;
    UIButton *_closeButton;
    UIButton *_confirmButton;
    UIImageView *_icon;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <WCPayFetchIdentifyTipsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutContentView;
- (void)confirm;
- (void)close;
- (void)refreshView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

@end

