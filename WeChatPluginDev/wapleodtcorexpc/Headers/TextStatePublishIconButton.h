//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class MMUILabel, MMWebImageView, NSString, TextStateIcon, UIColor, UIImageView, UIView;

@interface TextStatePublishIconButton : UIControl
{
    _Bool _hideDescription;
    _Bool _hideArrow;
    _Bool _autoExpandHitArea;
    _Bool _showingRedDot;
    unsigned int _redDotStyle;
    UIColor *_tintColor;
    TextStateIcon *_iconWrap;
    NSString *_customIconDescription;
    NSString *_forceDescription;
    double _iconSideLength;
    MMWebImageView *_iconImageView;
    MMUILabel *_iconDescriptionLabel;
    UIImageView *_arrowImageView;
    UIView *_redDotView;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isShowingRedDot) _Bool showingRedDot; // @synthesize showingRedDot=_showingRedDot;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *iconDescriptionLabel; // @synthesize iconDescriptionLabel=_iconDescriptionLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool autoExpandHitArea; // @synthesize autoExpandHitArea=_autoExpandHitArea;
@property(nonatomic) _Bool hideArrow; // @synthesize hideArrow=_hideArrow;
@property(nonatomic) _Bool hideDescription; // @synthesize hideDescription=_hideDescription;
@property(nonatomic) double iconSideLength; // @synthesize iconSideLength=_iconSideLength;
@property(retain, nonatomic) NSString *forceDescription; // @synthesize forceDescription=_forceDescription;
@property(retain, nonatomic) NSString *customIconDescription; // @synthesize customIconDescription=_customIconDescription;
@property(retain, nonatomic) TextStateIcon *iconWrap; // @synthesize iconWrap=_iconWrap;
@property(nonatomic) unsigned int redDotStyle; // @synthesize redDotStyle=_redDotStyle;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)hideRedDot;
- (void)showRedDot;
- (void)addShadowEffect;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)refreshIconDescriptionLabel;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)initDefaultValues;
- (id)initWithFrame:(struct CGRect)arg1;

@end

