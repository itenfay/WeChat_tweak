//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIButton, UIImageView;
@protocol MMWebMProfileTitleViewDelegate;

@interface MMWebMProfileTitleView
{
    id <MMWebMProfileTitleViewDelegate> _delegate;
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
@property(nonatomic) __weak id <MMWebMProfileTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)titleLabelHorizonalOffset;
- (void)onTitleViewClicked:(id)arg1;
- (void)layoutSubviews;
- (void)resetUIStatus;
- (void)updateLiveStatus:(_Bool)arg1;
- (void)updateTitle:(id)arg1;
- (void)initView;
- (id)init;

@end

