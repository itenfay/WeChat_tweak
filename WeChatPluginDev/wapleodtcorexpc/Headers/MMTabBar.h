//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITabBar.h>

@class NSMutableArray, UIView;
@protocol MMTabBarDelegate;

@interface MMTabBar : UITabBar
{
    id <MMTabBarDelegate> _customDelegate;
    UIView *_backgroundView;
    NSMutableArray *_tabBarItemViews;
    double _extraKeyboardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double extraKeyboardHeight; // @synthesize extraKeyboardHeight=_extraKeyboardHeight;
@property(retain, nonatomic) NSMutableArray *tabBarItemViews; // @synthesize tabBarItemViews=_tabBarItemViews;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <MMTabBarDelegate> customDelegate; // @synthesize customDelegate=_customDelegate;
- (void)configureClearBackground;
- (void)relayoutTabBarItems;
- (void)createTabBarItemViews;
- (id)findShadowView:(id)arg1;
- (id)findBlurEffectView:(id)arg1;
- (void)layoutSubviews;
- (void)addCustomBackground;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (double)calcHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (long long)semanticContentAttribute;
- (void)setTabBarBackgroundColor:(id)arg1 useBlur:(_Bool)arg2;
- (id)tabBarItemViewAtIndex:(long long)arg1;
- (_Bool)targetIndexIsSelected:(long long)arg1;
- (void)selectIndex:(long long)arg1;
- (void)updateFrameWithKeyboard:(id)arg1;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboradWillShow:(id)arg1;
- (void)removeFromSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

