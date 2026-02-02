//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ButtonAttachManager, FixTitleColorButtonChainModel, MMUIActivityIndicatorView, NSMutableDictionary, NSMutableSet, UIColor, UIView;

@interface FixTitleColorButton
{
    NSMutableSet *m_titleColorStateSet;
    NSMutableSet *m_backgroundImageStateSet;
    double m_fixHeight;
    double m_fixWidth;
    double m_fixLeftRightMargin;
    UIColor *m_fixBackgroundColor;
    _Bool _loading;
    _Bool _isBlurForDefault;
    _Bool _isBlurForDisable;
    _Bool _oldStyle;
    _Bool _wideStyle;
    _Bool _bigStyle;
    _Bool _halfScreenStyle;
    _Bool _mediumStyle;
    _Bool _smallStyle;
    _Bool _weakStyle;
    NSMutableDictionary *m_titleColorStateDict;
    UIColor *_m_highlighBorderColor;
    UIColor *_m_disabledBorderColor;
    UIColor *_m_normalBorderColor;
    UIColor *_defaultBGColor;
    UIColor *_defaultFGColor;
    UIColor *_disableBGColor;
    UIColor *_disableFGColor;
    double _maxWidth;
    ButtonAttachManager *_attachManager;
    double _verticalPadding;
    double _horizontalPadding;
    MMUIActivityIndicatorView *_indicatorView;
    UIView *_animatedMaskView;
}

+ (CDUnknownBlockType)zz_create;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *animatedMaskView; // @synthesize animatedMaskView=_animatedMaskView;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(retain, nonatomic) ButtonAttachManager *attachManager; // @synthesize attachManager=_attachManager;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) _Bool weakStyle; // @synthesize weakStyle=_weakStyle;
@property(nonatomic) _Bool smallStyle; // @synthesize smallStyle=_smallStyle;
@property(nonatomic) _Bool mediumStyle; // @synthesize mediumStyle=_mediumStyle;
@property(nonatomic) _Bool halfScreenStyle; // @synthesize halfScreenStyle=_halfScreenStyle;
@property(nonatomic) _Bool bigStyle; // @synthesize bigStyle=_bigStyle;
@property(nonatomic) _Bool wideStyle; // @synthesize wideStyle=_wideStyle;
@property(nonatomic) _Bool oldStyle; // @synthesize oldStyle=_oldStyle;
@property(nonatomic) _Bool isBlurForDisable; // @synthesize isBlurForDisable=_isBlurForDisable;
@property(nonatomic) _Bool isBlurForDefault; // @synthesize isBlurForDefault=_isBlurForDefault;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) UIColor *disableFGColor; // @synthesize disableFGColor=_disableFGColor;
@property(retain, nonatomic) UIColor *disableBGColor; // @synthesize disableBGColor=_disableBGColor;
@property(retain, nonatomic) UIColor *defaultFGColor; // @synthesize defaultFGColor=_defaultFGColor;
@property(retain, nonatomic) UIColor *defaultBGColor; // @synthesize defaultBGColor=_defaultBGColor;
@property(retain, nonatomic) UIColor *m_normalBorderColor; // @synthesize m_normalBorderColor=_m_normalBorderColor;
@property(retain, nonatomic) UIColor *m_disabledBorderColor; // @synthesize m_disabledBorderColor=_m_disabledBorderColor;
@property(retain, nonatomic) UIColor *m_highlighBorderColor; // @synthesize m_highlighBorderColor=_m_highlighBorderColor;
@property(retain, nonatomic) NSMutableSet *m_backgroundImageStateSet; // @synthesize m_backgroundImageStateSet;
@property(retain, nonatomic) NSMutableDictionary *m_titleColorStateDict; // @synthesize m_titleColorStateDict;
- (_Bool)adjustsImageWhenHighlighted;
- (id)currentAttributedTitle;
- (id)currentImage;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)sendActionsForControlEvents:(unsigned long long)arg1;
- (void)sendAction:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)init;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setFixLeftRightMargin:(double)arg1;
- (void)setFixHeight:(double)arg1;
- (double)fixWidth;
- (void)setFixWidth:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (double)adjustHeight;
- (double)adjustWidthForWidth:(double)arg1;
- (double)adjustWidthForWidth:(double)arg1 ignoreFixWidth:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)calcWidthNoAttr;
- (struct CGSize)calculateFittingSize;
- (double)calTitleVerticalEdge;
- (struct CGSize)calImageFitSizeByImage:(id)arg1;
- (struct UIEdgeInsets)titleEdgeInsets;
- (double)iconImgHeight;
- (double)iconImgPadding;
- (struct UIEdgeInsets)imageEdgeInsetsWithSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)imageEdgeInsets;
- (struct CGSize)calAttributedSize;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)addTouchAnimations;
- (void)updateRedesignBackgroundColor;
- (_Bool)isClearColor:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) FixTitleColorButtonChainModel *zz_setup;

@end

