//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITabBarController.h>

@class NSMutableArray, NSString, UITapGestureRecognizer;
@protocol MMTabBarControllerDelegate;

@interface MMTabBarController : UITabBarController
{
    unsigned long long _viewControllersCount;
    NSMutableArray *_tabBarBtns;
    UITapGestureRecognizer *_doubleTapGesture;
    _Bool _hasAddTapGesture;
    UITapGestureRecognizer *_singleTapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGesture; // @synthesize singleTapGesture=_singleTapGesture;
- (id)customTabBar;
- (void)onTabBarHiddenChanged:(_Bool)arg1;
- (id)getCurrentViewController;
- (void)onTabBarItemViewsRelayout;
- (struct CGRect)tabBarBtnFrameAtIndex:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)getTabbarItemForIndex:(unsigned long long)arg1;
- (void)removeRedDotOnTabBarItemAtIndex:(unsigned long long)arg1;
- (void)showRedDotOnTabBarItemAtIndex:(unsigned long long)arg1;
- (void)setTabBarBadgeString:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)setTabBarBadgeValue:(unsigned long long)arg1 forIndex:(unsigned long long)arg2;
- (id)getViewControllerAtIndex:(unsigned int)arg1;
- (id)currentTopViewController;
- (id)currentViewController;
- (void)setTabBarItemTitle:(id)arg1 forIndex:(unsigned long long)arg2;
- (_Bool)tabBarItemIsSelectedAtIndex:(unsigned long long)arg1;
- (void)setTabBarItemSelectedIndex:(unsigned long long)arg1;
- (void)clearTabBtns;
- (id)getTabBarBtnForIndex:(unsigned long long)arg1;
- (id)getTabBarBtnViews;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)removeTapGesture;
- (void)addTapGesture;
- (void)showTabBarWithNoViewHeightUpdateForIndex:(unsigned long long)arg1;
- (void)hideTabBarWithNoViewHeightUpdateForIndex:(unsigned long long)arg1;
- (void)showTabBarForIndex:(unsigned long long)arg1;
- (void)hideTabBarForIndex:(unsigned long long)arg1;
- (void)showTabBar;
- (void)hideTabBar;
- (void)setAllTabBarItemEnabled:(_Bool)arg1;
- (void)setViewControllers:(id)arg1;
- (void)relayoutButtons:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)makeSureFrame;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <MMTabBarControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

