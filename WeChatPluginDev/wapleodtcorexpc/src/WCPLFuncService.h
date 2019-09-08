//
// WCPLFuncService.h
//
// Created by dyf on 17/6/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

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

// Date format: "yyyy-MM-dd".
FOUNDATION_EXPORT NSString *const WCPLShortDateFormat;

// Date format: "yyyy-MM-dd HH:mm:ss".
FOUNDATION_EXPORT NSString *const WCPLLongDateFormat;

@interface WCPLFuncService : NSObject

// Return screen width.
+ (CGFloat)screenWidth;

// Return screen height.
+ (CGFloat)screenHeight;

// Filt message from list.
+ (NSMutableArray *)filtMessageFromMsgList:(NSMutableArray *)msgList;

// Convert `NSDate` object to string with formatter.
+ (NSString *)stringFromDate:(NSDate *)date withFormat:(NSString *)format;

@end
