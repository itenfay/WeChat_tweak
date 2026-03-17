//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIColor, UIViewController, WAUINavigationController;

@protocol WAUINavigationControllerDelegate <NSObject>

@optional
- (void)navigationControllerViewDidLayout:(WAUINavigationController *)arg1;
- (struct CGSize)navigationControllerPreferredSize:(WAUINavigationController *)arg1;
- (UIColor *)ipadCompatibleModeBottomViewBackgroundColorForNavigationController:(WAUINavigationController *)arg1;
- (_Bool)navigationController:(WAUINavigationController *)arg1 shouldUsePresentWhenPushViewController:(UIViewController *)arg2 animated:(_Bool)arg3 scene:(unsigned long long)arg4;
- (_Bool)navigationControllerShouldForceLightMode:(WAUINavigationController *)arg1;
- (void)navigationController:(WAUINavigationController *)arg1 navigationViewDidDisappear:(_Bool)arg2;
- (void)navigationController:(WAUINavigationController *)arg1 navigationViewWillDisappear:(_Bool)arg2;
- (void)navigationController:(WAUINavigationController *)arg1 navigationViewDidAppear:(_Bool)arg2;
- (void)navigationController:(WAUINavigationController *)arg1 navigationViewWillAppear:(_Bool)arg2;
- (void)navigationController:(WAUINavigationController *)arg1 didShowViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)navigationController:(WAUINavigationController *)arg1 willShowViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
@end

