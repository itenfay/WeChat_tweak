//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUILabel, MMUIViewController, NSArray, NSObject, NSString, UIEvent, UINavigationController, UIViewController, UIWindow;
@protocol IWCCTRichTextViewProtocol;

@protocol IWCViewManager <NSObject>
- (MMUILabel<IWCCTRichTextViewProtocol> *)getCTRichTextView;
- (NSObject *)showAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 btnTitle:(NSString *)arg3;
- (void)remoteControlReceivedWithEvent:(UIEvent *)arg1;
- (_Bool)isNavigationInWeAppSheetMode:(UINavigationController *)arg1;
- (_Bool)isWeAppStatusBarHidden;
- (double)tabBarHeight;
- (UIViewController *)tabBarController_currentViewController;
- (_Bool)isVCUseCustomPopTransitioning:(Class)arg1;
- (Class)WAWebViewControllerClass;
- (Class)MMTabBarBaseViewControllerClass;
- (Class)MMTabBarControllerClass;
- (void)setStatusBarStyle:(long long)arg1 viewController:(UIViewController *)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 animation:(long long)arg2 viewController:(UIViewController *)arg3;
- (_Bool)isVisibleChildViewControllerOf:(UIViewController *)arg1 ToFindViewController:(UIViewController *)arg2;
- (UINavigationController *)getPrevNavigationControllerFor:(UIViewController *)arg1;
- (void)setPrimaryShown;
- (void)setPrimaryHidden;
- (double)getLeftColumnWidthForSplitView;
- (void)setRightViewControllerForSplitView:(UIViewController *)arg1 forPush:(_Bool)arg2 complete:(void (^)(void))arg3;
- (void)setRightViewControllerForSplitView:(UIViewController *)arg1 forPush:(_Bool)arg2;
- (UIViewController *)getRightViewControllerForSplitView;
- (_Bool)isUsingSplitView;
- (_Bool)shouldUseSplitView;
- (_Bool)getUseWxamDecReport;
- (_Bool)getUseWxamEncReport;
- (_Bool)getUseWxamAdapResolution;
- (_Bool)getUseWxamFullRangeEnc;
- (NSString *)ApplicationDidBecomeActiveNotificationName;
- (NSArray *)navigationControllerListWithViewController:(UIViewController *)arg1;
- (UIViewController *)topViewControllerOfMainWindow;
- (UIViewController *)getMainWindowViewController;
- (UINavigationController *)topNavigationControllerOnMainWindow;
- (unsigned long long)ParserDetectorTypeWith:(unsigned long long)arg1;
- (UIViewController *)topMostController;
- (UINavigationController *)getCurrentNavigationController;
- (UIViewController *)topViewControllerOfWindow:(UIWindow *)arg1;
- (MMUIViewController *)getTopViewController;
- (UIWindow *)getMainWindow;
- (void)removeViewController:(MMUIViewController *)arg1;
- (void)addViewController:(MMUIViewController *)arg1;
@end

