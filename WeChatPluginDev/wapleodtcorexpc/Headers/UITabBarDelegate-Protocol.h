//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, UITabBar, UITabBarItem;

@protocol UITabBarDelegate <NSObject>

@optional
- (void)tabBar:(UITabBar *)arg1 didEndCustomizingItems:(NSArray *)arg2 changed:(_Bool)arg3;
- (void)tabBar:(UITabBar *)arg1 willEndCustomizingItems:(NSArray *)arg2 changed:(_Bool)arg3;
- (void)tabBar:(UITabBar *)arg1 didBeginCustomizingItems:(NSArray *)arg2;
- (void)tabBar:(UITabBar *)arg1 willBeginCustomizingItems:(NSArray *)arg2;
- (void)tabBar:(UITabBar *)arg1 didSelectItem:(UITabBarItem *)arg2;
@end

