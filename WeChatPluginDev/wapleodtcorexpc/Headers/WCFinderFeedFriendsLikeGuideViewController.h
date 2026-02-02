//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIImageView, UILabel, UIView;
@protocol WCFinderFeedFriendsLikeGuideViewControllerDelegate;

@interface WCFinderFeedFriendsLikeGuideViewController
{
    id <WCFinderFeedFriendsLikeGuideViewControllerDelegate> _delegate;
    NSString *_tipsTitle;
    NSString *_tipsSubtitle;
    NSString *_cancelButtonTitle;
    NSString *_confirmButtonTitle;
    UIView *_backgroundView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_iconImageView;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSString *confirmButtonTitle; // @synthesize confirmButtonTitle=_confirmButtonTitle;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) NSString *tipsSubtitle; // @synthesize tipsSubtitle=_tipsSubtitle;
@property(copy, nonatomic) NSString *tipsTitle; // @synthesize tipsTitle=_tipsTitle;
@property(nonatomic) __weak id <WCFinderFeedFriendsLikeGuideViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideMyself;
- (void)onConfirm;
- (void)onCancel;
- (void)setupSubviews;
- (void)showTips;
- (void)viewDidLoad;

@end

