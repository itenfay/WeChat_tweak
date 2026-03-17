//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UITabBarController, UIViewController;

@protocol MainTabBarControllerDelegate <NSObject>
- (void)mainTabBarController:(UITabBarController *)arg1 didSelectViewController:(UIViewController *)arg2;
- (_Bool)mainTabBarController:(UITabBarController *)arg1 shouldSelectViewController:(UIViewController *)arg2;
- (void)onMainTabBarMainFrameSingleClicked:(id)arg1;
- (void)onMainTabBarMainFrameDoubleClicked:(id)arg1;
@end

