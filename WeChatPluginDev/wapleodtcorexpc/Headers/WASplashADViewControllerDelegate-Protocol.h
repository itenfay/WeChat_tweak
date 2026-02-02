//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WASplashADViewController;

@protocol WASplashADViewControllerDelegate <NSObject>
- (double)webViewCapsuleMenuHeight;
- (double)webViewCapsuleMenuWidth;
- (void)onSplashADViewControllerWillEnterForeground:(WASplashADViewController *)arg1;
- (void)onSplashADViewControllerDidEnterBackground:(WASplashADViewController *)arg1;
- (void)onSplashADViewControllerDidClosed:(WASplashADViewController *)arg1;
- (void)onSplashADViewControllerDidDisappear:(WASplashADViewController *)arg1;
- (void)onSplashADViewControllerWillDisappear:(WASplashADViewController *)arg1;
- (void)onSplashADViewControllerDidAppear:(WASplashADViewController *)arg1;
- (void)onSplashADViewControllerWillAppear:(WASplashADViewController *)arg1;
- (void)onSplashADViewControllerViewWillLayoutSubviews:(WASplashADViewController *)arg1;
- (void)onSplashADViewControllerViewDidLoad:(WASplashADViewController *)arg1;
- (void)onSplashADViewControllerMenuButtonClicked:(WASplashADViewController *)arg1;
- (void)onSplashADViewControllerCloseButtonClicked:(WASplashADViewController *)arg1;
@end

