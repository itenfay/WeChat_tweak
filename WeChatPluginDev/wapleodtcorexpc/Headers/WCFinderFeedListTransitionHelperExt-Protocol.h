//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController, WCFinderTransitionUserInfo;

@protocol WCFinderFeedListTransitionHelperExt <NSObject>

@optional
- (void)onTransitionHelperCancelClousureForVC:(UIViewController *)arg1 userInfo:(WCFinderTransitionUserInfo *)arg2;
- (void)onTransitionHelperDoClosureForVC:(UIViewController *)arg1 userInfo:(WCFinderTransitionUserInfo *)arg2;
- (void)onTransitionHelperWillClousureFromVC:(UIViewController *)arg1 toVC:(UIViewController *)arg2 userInfo:(WCFinderTransitionUserInfo *)arg3;
- (void)onTransitionHelperWillExpandFromVC:(UIViewController *)arg1 toVC:(UIViewController *)arg2 userInfo:(WCFinderTransitionUserInfo *)arg3;
@end

