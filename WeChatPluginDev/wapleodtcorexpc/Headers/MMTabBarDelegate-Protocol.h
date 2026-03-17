//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol MMTabBarDelegate <NSObject>
- (struct CGRect)tabBarBtnFrameAtIndex:(long long)arg1;

@optional
- (void)onTabBarHiddenChanged:(_Bool)arg1;
- (void)onTabBarItemViewsRelayout;
- (UIViewController *)getCurrentViewController;
@end

