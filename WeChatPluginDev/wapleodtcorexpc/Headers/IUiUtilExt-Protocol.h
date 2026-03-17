//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol IUiUtilExt <NSObject>

@optional
- (void)onTabBarRootViewControllerDidAppear;
- (void)onNavigationBarAlphaChanged;
- (void)onNavigationBarHiddenChanged;
- (void)onNavigationBarFrameChanged;
- (void)onStatusBarHiddenChanged:(long long)arg1;
- (void)onTopBarFrameChanged;
- (void)onMainWindowFrameChangedFrom:(struct CGRect)arg1 to:(struct CGRect)arg2;
- (void)onMainWindowFrameChanged;
@end

