//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView;

@interface MMLiveGamePlayTogetherJoinTeamSettingCell
{
    UIView *_containerView;
    UILabel *_optionLabel;
    UILabel *_descLabel;
    UIImageView *_arrowImageView;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *optionLabel; // @synthesize optionLabel=_optionLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)updateSize;
- (void)prepareForReuse;
- (void)updateWithItem:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupAction;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

