//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface WCFinderIconArrowField : UIView
{
    UILabel *_textField;
    UIImageView *_iconView;
    UIImageView *_arrowView;
    double _arrowPaddingText;
    CDUnknownBlockType _tapAction;
}

+ (struct CGPoint)iconCenterWithHeight:(double)arg1;
+ (double)textPaddingLeft;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(nonatomic) double arrowPaddingText; // @synthesize arrowPaddingText=_arrowPaddingText;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *textField; // @synthesize textField=_textField;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)debugDescription;
- (void)_onClickTap;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
@property(retain, nonatomic) NSString *text;
@property(readonly, nonatomic) CDUnknownBlockType iconWithSVG;
@property(readonly, nonatomic) CDUnknownBlockType iconWithSVGSize;
@property(readonly, nonatomic) CDUnknownBlockType onTap;
@property(readonly, nonatomic) CDUnknownBlockType arrow;
@property(readonly, nonatomic) CDUnknownBlockType icon;
@property(readonly, nonatomic) CDUnknownBlockType configText;
@property(readonly, nonatomic) CDUnknownBlockType textColor;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) CDUnknownBlockType arrowOrNoneWithTheme;
@property(readonly, nonatomic) CDUnknownBlockType arrowWithTheme;
@property(readonly, nonatomic) CDUnknownBlockType themeIconSVG;

@end

