//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UIScrollViewDelegate-Protocol.h"

@class NSIndexPath, NSString, UIScrollView, UIView, UIViewController, WCFinderArbitraryPageView;

@protocol WCFinderArbitraryPageViewDataDelegate <UIScrollViewDelegate>

@optional
- (UIScrollView *)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 innerScrollViewForPageView:(UIView *)arg2;
- (void)onArbitraryTabView:(WCFinderArbitraryPageView *)arg1 selectedPageChangedFrom:(long long)arg2 to:(long long)arg3;
- (void)onArbitraryTabViewClickRetry:(WCFinderArbitraryPageView *)arg1;
- (void)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 expectPageContentInset:(struct UIEdgeInsets)arg2 minSize:(struct CGSize)arg3 forIndex:(long long)arg4 pageView:(UIView *)arg5 pageVC:(UIViewController *)arg6 identifier:(NSString *)arg7;
- (void)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 didEndDisplayViewAtIndex:(long long)arg2 pageView:(UIView *)arg3;
- (void)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 willEndDisplayViewAtIndex:(long long)arg2 pageView:(UIView *)arg3;
- (void)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 willDisplayViewControllerAtIndex:(long long)arg2 pageViewController:(UIViewController *)arg3;
- (void)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 didDisplayViewAtIndex:(long long)arg2 pageView:(UIView *)arg3;
- (void)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 willDisplayViewAtIndex:(long long)arg2 pageView:(UIView *)arg3;
- (void)onArbitraryTabView:(WCFinderArbitraryPageView *)arg1 selectorItemForIndex:(long long)arg2 path:(NSIndexPath *)arg3;
@end

