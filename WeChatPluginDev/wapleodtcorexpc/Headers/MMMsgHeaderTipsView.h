//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIColor, UIImage, UIImageView, UILabel;
@protocol MMMsgHeaderTipsViewDelegate;

@interface MMMsgHeaderTipsView : UIView
{
    _Bool _showRightArrow;
    _Bool _showBorder;
    _Bool _isExpanded;
    id <MMMsgHeaderTipsViewDelegate> _delegate;
    double _maxWidth;
    UIImage *_iconImage;
    NSArray *_iconImages;
    double _animationDuration;
    NSString *_title;
    UIColor *_titleColor;
    UIColor *_rightArrowColor;
    UIColor *_borderColor;
    double _borderWidth;
    UIButton *_button;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
    struct CGSize _iconSize;
}

+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) _Bool showBorder; // @synthesize showBorder=_showBorder;
@property(retain, nonatomic) UIColor *rightArrowColor; // @synthesize rightArrowColor=_rightArrowColor;
@property(nonatomic) _Bool showRightArrow; // @synthesize showRightArrow=_showRightArrow;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSArray *iconImages; // @synthesize iconImages=_iconImages;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) __weak id <MMMsgHeaderTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onButtonClick;
- (void)updateIconSize;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)initUI;
- (void)setExpanded:(_Bool)arg1 animate:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

