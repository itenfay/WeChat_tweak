//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView;

@interface MMCheckExpandStyleTableViewCell
{
    UIImageView *_leftCheckMark;
    UIImageView *_rightArrow;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_lineView;
}

+ (double)getSeparatorRightPadding;
+ (double)getSeparatorLeftPadding;
+ (id)getTitleLabelFont;
+ (id)getTitleLabelColor;
+ (double)getRightArrowRightPadding;
+ (double)getTitleLabelRightPadding;
+ (double)getTitleLabelLeftPadding;
+ (double)getCheckmarkLeftPadding;
+ (double)heightForTitle:(id)arg1 subTitle:(id)arg2 cellWidth:(double)arg3;
+ (double)heightForTitle:(id)arg1 cellWidth:(double)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(retain, nonatomic) UIImageView *leftCheckMark; // @synthesize leftCheckMark=_leftCheckMark;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1 subTitle:(id)arg2 isChecked:(_Bool)arg3 isExpanded:(_Bool)arg4 checkColor:(id)arg5;
- (void)updateWithTitle:(id)arg1 isChecked:(_Bool)arg2 isExpanded:(_Bool)arg3 checkColor:(id)arg4;
- (void)initView;
- (void)toggleArrowHidden:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

