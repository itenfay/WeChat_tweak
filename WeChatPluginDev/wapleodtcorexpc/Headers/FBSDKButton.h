//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@interface FBSDKButton : UIButton
{
    _Bool _skipIntrinsicContentSizing;
    _Bool _isExplicitlyDisabled;
}

- (double)_textPaddingCorrectionForHeight:(double)arg1;
- (double)_paddingForHeight:(double)arg1;
- (double)_marginForHeight:(double)arg1;
- (double)_heightForFont:(id)arg1;
- (double)_heightForContentRect:(struct CGRect)arg1;
- (double)_fontSizeForHeight:(double)arg1;
- (void)_configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4 selectedTitle:(id)arg5 selectedIcon:(id)arg6 selectedColor:(id)arg7 selectedHighlightedColor:(id)arg8;
- (id)_backgroundImageWithColor:(id)arg1 cornerRadius:(double)arg2 scale:(double)arg3;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 title:(id)arg2;
@property(readonly, nonatomic, getter=isImplicitlyDisabled) _Bool implicitlyDisabled;
- (id)defaultSelectedColor;
- (id)defaultIcon;
- (id)defaultHighlightedColor;
- (id)defaultFont;
- (id)defaultDisabledColor;
- (id)defaultBackgroundColor;
- (void)configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4 selectedTitle:(id)arg5 selectedIcon:(id)arg6 selectedColor:(id)arg7 selectedHighlightedColor:(id)arg8;
- (void)configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4;
- (void)configureButton;
- (void)checkImplicitlyDisabled;
- (void)logTapEventWithEventName:(id)arg1 parameters:(id)arg2;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

