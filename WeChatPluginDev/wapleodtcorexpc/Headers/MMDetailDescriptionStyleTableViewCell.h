//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, UIView;

@interface MMDetailDescriptionStyleTableViewCell
{
    _Bool _centerTitleIfNeeded;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_lineView;
}

+ (double)getSeparatorRightPadding;
+ (double)getSeparatorLeftPadding;
+ (double)getLabelsRightPadding;
+ (double)getLabelsLeftPadding;
+ (id)getTitleLabelColor;
+ (id)getSubTitleLabelFont;
+ (id)getTitleLabelFont;
+ (double)heightForTitle:(id)arg1 subTitleAttributeString:(id)arg2 cellWidth:(double)arg3;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool centerTitleIfNeeded; // @synthesize centerTitleIfNeeded=_centerTitleIfNeeded;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1 subTitleAttributeString:(id)arg2;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

