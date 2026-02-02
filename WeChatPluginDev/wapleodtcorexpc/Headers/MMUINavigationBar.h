//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UINavigationBar.h>

@class UIView;

@interface MMUINavigationBar : UINavigationBar
{
    _Bool _disable;
    _Bool _customBlurEffectHidden;
    CDUnknownBlockType _onLayoutSubviews;
    UIView *_effectSubview;
    long long _lastUpdateStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastUpdateStyle; // @synthesize lastUpdateStyle=_lastUpdateStyle;
@property(retain, nonatomic) UIView *effectSubview; // @synthesize effectSubview=_effectSubview;
@property(copy, nonatomic) CDUnknownBlockType onLayoutSubviews; // @synthesize onLayoutSubviews=_onLayoutSubviews;
@property(nonatomic) _Bool customBlurEffectHidden; // @synthesize customBlurEffectHidden=_customBlurEffectHidden;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
- (id)currentViewController;
- (id)navigationContentView;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)isTransparentNavBar;
- (id)getTopViewController;
- (void)setAlpha:(double)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setTranslucent:(_Bool)arg1;
- (id)findBlurEffectView:(id)arg1;
- (void)adjustBlurEffect;
- (void)adjustContentViewToFitMargin;
- (void)setFrame:(struct CGRect)arg1;
- (void)checkHookContentView;
- (void)layoutSubviews;
- (void)configCustomBlurEffect;
- (id)initWithFrame:(struct CGRect)arg1;

@end

