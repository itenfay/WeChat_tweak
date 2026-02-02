//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIButton, UIImageView;
@protocol MMWebLiveTitleViewDelegate;

@interface MMWebLiveTitleView
{
    id <MMWebLiveTitleViewDelegate> _delegate;
    MMUILabel *_titleView;
    UIImageView *_arrowImageView;
    UIImageView *_liveImageView;
    UIButton *_titleButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) UIImageView *liveImageView; // @synthesize liveImageView=_liveImageView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <MMWebLiveTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTitleViewClicked;
- (void)layoutSubviews;
- (void)initView;
- (id)init;

@end

