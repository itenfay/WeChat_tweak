//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView;

@interface MMLiveGamePrepareOptionCell
{
    UIView *_contentView;
    UIImageView *_iconView;
    UILabel *_optionLabel;
    UILabel *_selectLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *selectLabel; // @synthesize selectLabel=_selectLabel;
@property(retain, nonatomic) UILabel *optionLabel; // @synthesize optionLabel=_optionLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)adjustSubViewsCenterY;
- (void)sizeToFit;
- (void)updateLabel:(id)arg1;
- (void)updateLabelWithSelectedJoinTeamMode:(unsigned int)arg1 labelText:(id)arg2 coinValue:(unsigned int)arg3;
- (id)initWith:(double)arg1 target:(id)arg2 selector:(SEL)arg3 title:(id)arg4 rightText:(id)arg5 icon:(id)arg6;

@end

