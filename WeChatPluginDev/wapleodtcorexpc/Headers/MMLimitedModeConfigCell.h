//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIImageView, UIView;

@interface MMLimitedModeConfigCell
{
    _Bool _showBottomLine;
    _Bool _showRightArrow;
    _Bool _isSelected;
    NSString *_title;
    UIImageView *_backgroundImageView;
    MMUILabel *_titleLabel;
    UIImageView *_selectedImageView;
    UIImageView *_arrowImageView;
    UIView *_lineView;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool showRightArrow; // @synthesize showRightArrow=_showRightArrow;
@property(nonatomic) _Bool showBottomLine; // @synthesize showBottomLine=_showBottomLine;
- (void)initUI;
- (unsigned long long)accessibilityTraits;
- (void)updateWithBiz:(long long)arg1 cellType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

