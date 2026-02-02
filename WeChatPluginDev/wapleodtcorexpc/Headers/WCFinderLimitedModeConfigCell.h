//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIFont, UIImageView, UIView;

@interface WCFinderLimitedModeConfigCell
{
    UIFont *m_titleLabelFont;
    UIImageView *_backgroundImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    UIImageView *_arrowImageView;
    UIView *_lineView;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void)initUI;
- (void)showBottomLine:(_Bool)arg1;
- (_Bool)checkTitleLabelCrossLine;
- (void)makeTitleLabelFontSizeToFix:(unsigned long long)arg1;
- (void)updateWithTitle:(id)arg1 subTitle:(id)arg2 pos:(long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

