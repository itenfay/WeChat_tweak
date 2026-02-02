//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol WeAppCustomTabbarDelegate;

@interface WeAppCustomTabbar : UIView
{
    id <WeAppCustomTabbarDelegate> _delegate;
    long long _selectedIndex;
    NSArray *_items;
    NSMutableArray *_tabBarBtns;
    NSMutableDictionary *_imageViews;
    NSMutableDictionary *_labelViews;
    NSMutableDictionary *_badgeViews;
    UIView *_intervalLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *intervalLine; // @synthesize intervalLine=_intervalLine;
@property(retain, nonatomic) NSMutableDictionary *badgeViews; // @synthesize badgeViews=_badgeViews;
@property(retain, nonatomic) NSMutableDictionary *labelViews; // @synthesize labelViews=_labelViews;
@property(retain, nonatomic) NSMutableDictionary *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) NSMutableArray *tabBarBtns; // @synthesize tabBarBtns=_tabBarBtns;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <WeAppCustomTabbarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)removeFromSuperview;
- (void)alterIntervalLine;
- (void)setAccessibilityValueForIndex:(unsigned long long)arg1 badgeStr:(id)arg2;
- (void)adjustBadgeViewForIndex:(long long)arg1;
- (void)hideTabBarBadgeForIndex:(long long)arg1;
- (void)setTabBarBadgeString:(id)arg1 color:(id)arg2 forIndex:(long long)arg3;
- (void)setTabBarBadgeAsRedDotForIndex:(long long)arg1;
- (id)badgeViewForIndex:(long long)arg1;
- (void)onBtnClick:(id)arg1;
- (void)layoutButtons;
- (void)updateButtonForIndex:(long long)arg1;
- (void)setTabbarItems:(id)arg1;
- (id)getTabbarLabelForIndex:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

