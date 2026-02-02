//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UILabel, WCFinderComment;
@protocol WCFinderPostingCommentFailBubbleViewDelegate;

@interface WCFinderPostingCommentFailBubbleView
{
    id <WCFinderPostingCommentFailBubbleViewDelegate> _delegate;
    WCFinderComment *_commentFailInfo;
    UIButton *_backGroundButton;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *backGroundButton; // @synthesize backGroundButton=_backGroundButton;
@property(retain, nonatomic) WCFinderComment *commentFailInfo; // @synthesize commentFailInfo=_commentFailInfo;
@property(nonatomic) __weak id <WCFinderPostingCommentFailBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getBubbleBtn;
- (void)clickButtonAction;
- (void)adjustButtonWidth:(double)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

