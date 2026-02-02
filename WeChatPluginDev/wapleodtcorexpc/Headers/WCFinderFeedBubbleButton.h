//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface WCFinderFeedBubbleButton
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (struct CGSize)intrinsicContentSize;
- (double)getActionButtonHeight;
- (void)updateLayout;
- (void)updateTitle:(id)arg1 titleColor:(id)arg2 subtitle:(id)arg3 iconImage:(id)arg4;
- (void)setupUI;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

