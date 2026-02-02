//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, UIImageView, UIStackView, UIView;

@interface FTSWebSearchCell
{
    MMUILabel *_keyLabel;
    MMWebImageView *_searchIcon;
    UIStackView *_labelContentView;
    MMUILabel *_labelLeft;
    MMUILabel *_subTitleLabel;
    UIImageView *_indicatorView;
    UIView *_bottomView;
}

+ (double)IconViewWidth;
+ (double)GetCellHeightForSublabelText:(id)arg1 width:(double)arg2;
+ (double)getCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)layoutSubviewsOfKeywordStyle;
- (void)layoutSubviews;
- (void)updateWord:(id)arg1 subTips:(id)arg2;
- (void)initViewOfKeywordStyle;
- (void)initView;
- (void)canShowLocalPageResult:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

