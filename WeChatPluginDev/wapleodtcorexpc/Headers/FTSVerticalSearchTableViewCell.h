//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributeLabel, UIImageView, UIView;

@interface FTSVerticalSearchTableViewCell
{
    AttributeLabel *_tipsLabel;
    UIImageView *_searchIcon;
    UIView *_lineView;
    UIImageView *_indicatorView;
}

+ (double)getCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *searchIcon; // @synthesize searchIcon=_searchIcon;
@property(retain, nonatomic) AttributeLabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (unsigned long long)accessibilityTraits;
- (void)addBottomSeperateLine;
- (void)updateTips:(id)arg1 hightLightText:(id)arg2;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

