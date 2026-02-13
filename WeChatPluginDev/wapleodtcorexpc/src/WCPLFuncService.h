//
// WCPLFuncService.h
//
// Created by dyf on 17/6/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// The width of the screen.
#define WCPLScreenWidth   UIScreen.mainScreen.bounds.size.width

// The height of the screen.
#define WCPLScreenHeight  UIScreen.mainScreen.bounds.size.height

// Judge iPhone.
#define WCPLIsPhone       (UIDevice.currentDevice.userInterfaceIdiom == UIUserInterfaceIdiomPhone)

// Judge iPad.
#define WCPLIsPad         (UIDevice.currentDevice.userInterfaceIdiom == UIUserInterfaceIdiomPad)

// Judge iPhoneX，XS.
#define WCPLIsPhoneX      ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), UIScreen.mainScreen.currentMode.size) && !WCPLIsPad : NO)

// Judge iPhoneXR.
#define WCPLIsPhoneXR     ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), UIScreen.mainScreen.currentMode.size) && !WCPLIsPad : NO)

// Judge iPhoneXS Max.
#define WCPLIsPhoneXSMax  ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), UIScreen.mainScreen.currentMode.size) && !WCPLIsPad : NO)

// Judge iPhone X series.
#define WCPLIsPhoneXAll   ({BOOL isPhoneXAll = NO; if (@available(iOS 11.0, *)) { isPhoneXAll = UIApplication.sharedApplication.delegate.window.safeAreaInsets.bottom > 0.0; } isPhoneXAll;})

// Status bar height.
#define WCPLStatusBarHeight                 (WCPLIsPhoneXAll ? 44.f : 20.f)

// Navigation bar height.
#define WCPLNavigationBarHeight              44.f

// Status bar & navigation bar height.
#define WCPLStatusBarAndNavigationBarHeight (WCPLIsPhoneXAll ? 88.f : 64.f)

// Tabbar height.
#define WCPLTabBarHeight                    (WCPLIsPhoneXAll ? (49.f+34.f) : 49.f)

// View safe bottom margin.
#define WCPLViewSafeBottomMargin            (WCPLIsPhoneXAll ? 34.f : 0.f)

@interface WCPLFuncService : NSObject

// Filt message from list.
+ (NSMutableArray *)filtMessageFromMsgList:(NSMutableArray *)msgList;
// Check if a single message should be ignored.
+ (BOOL)shouldIgnoreMessageWrap:(id)msgWrap;

// Sync ignored users to WeChat notify status (屏蔽=免打扰, 取消屏蔽=恢复提醒).
+ (BOOL)syncIgnoreUserToSystemNotifyStatus:(NSString *)userName enabled:(BOOL)enabled;
+ (void)syncIgnoredUsersToSystemNotifyStatus:(NSArray<NSString *> *)ignoredUsers
                     previousIgnoredUsers:(nullable NSArray<NSString *> *)previousIgnoredUsers;

@end

NS_ASSUME_NONNULL_END
