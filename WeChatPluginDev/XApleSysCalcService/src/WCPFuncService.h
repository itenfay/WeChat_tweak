//
// WCPFuncService.h
//
// Created by dyf on 17/6/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// Return screen width.
#define WCPScreenWidth   UIScreen.mainScreen.bounds.size.width

// Return screen height.
#define WCPScreenHeight  UIScreen.mainScreen.bounds.size.height

// Judge iPhone.
#define WCPIsIPhone      (UIDevice.currentDevice.userInterfaceIdiom == UIUserInterfaceIdiomPhone)

// Judge iPad.
#define WCPIsIPad        (UIDevice.currentDevice.userInterfaceIdiom == UIUserInterfaceIdiomPad)

// Judge iPhoneX，XS.
#define WCPIsIPhoneX     ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), UIScreen.mainScreen.currentMode.size) && !WCPIsIPad : NO)

// Judge iPhoneXR.
#define WCPIsIPhoneXR    ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), UIScreen.mainScreen.currentMode.size) && !WCPIsIPad : NO)

// Judge iPhoneXS Max.
#define WCPIsIPhoneXSMax ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), UIScreen.mainScreen.currentMode.size) && !WCPIsIPad : NO)

// Judge iPhone X series.
#define WCPIsIPhoneXAll  ({BOOL isPhoneXAll = NO; if (@available(iOS 11.0, *)) { isPhoneXAll = UIApplication.sharedApplication.delegate.window.safeAreaInsets.bottom > 0.0; } isPhoneXAll;})

// Status bar height.
#define WCPStatusBarHeight                 (WCPIsIPhoneXAll ? 44.f : 20.f)

// Navigation bar height.
#define WCPNavigationBarHeight              44.f

// Status bar & navigation bar height.
#define WCPStatusBarAndNavigationBarHeight (WCPIsIPhoneXAll ? 88.f : 64.f)

// Tabbar height.
#define WCPTabBarHeight                    (WCPIsIPhoneXAll ? (49.f+34.f) : 49.f)

// View safe bottom margin.
#define WCPViewSafeBottomMargin            (WCPIsIPhoneXAll ? 34.f : 0.f)

// Date format: "yyyy-MM-dd".
FOUNDATION_EXPORT NSString *const WCPShortDateFormat;

// Date format: "yyyy-MM-dd HH:mm:ss".
FOUNDATION_EXPORT NSString *const WCPLongDateFormat;

@interface WCPFuncService : NSObject

// Return screen width.
+ (CGFloat)screenWidth;

// Return screen height.
+ (CGFloat)screenHeight;

// Filt message from list.
+ (NSMutableArray *)filtMessageFromMsgList:(NSMutableArray *)msgList;

// Convert `NSDate` object to string with formatter.
+ (NSString *)stringFromDate:(NSDate *)date withFormat:(NSString *)format;

@end
