//
// WCPFuncService.h
//
// Created by dyf on 17/6/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// The width of the screen.
#define WCPScreenWidth   UIScreen.mainScreen.bounds.size.width

// The height of the screen.
#define WCPScreenHeight  UIScreen.mainScreen.bounds.size.height

// Judge iPhone.
#define WCPIsPhone       (UIDevice.currentDevice.userInterfaceIdiom == UIUserInterfaceIdiomPhone)

// Judge iPad.
#define WCPIsPad         (UIDevice.currentDevice.userInterfaceIdiom == UIUserInterfaceIdiomPad)

// Judge iPhoneX，XS.
#define WCPIsPhoneX      ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), UIScreen.mainScreen.currentMode.size) && !WCPIsPad : NO)

// Judge iPhoneXR.
#define WCPIsPhoneXR     ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), UIScreen.mainScreen.currentMode.size) && !WCPIsPad : NO)

// Judge iPhoneXS Max.
#define WCPIsPhoneXSMax  ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), UIScreen.mainScreen.currentMode.size) && !WCPIsPad : NO)

// Judge iPhone X series.
#define WCPIsPhoneXAll   ({BOOL isPhoneXAll = NO; if (@available(iOS 11.0, *)) { isPhoneXAll = UIApplication.sharedApplication.delegate.window.safeAreaInsets.bottom > 0.0; } isPhoneXAll;})

// Status bar height.
#define WCPStatusBarHeight                 (WCPIsPhoneXAll ? 44.f : 20.f)

// Navigation bar height.
#define WCPNavigationBarHeight              44.f

// Status bar & navigation bar height.
#define WCPStatusBarAndNavigationBarHeight (WCPIsPhoneXAll ? 88.f : 64.f)

// Tabbar height.
#define WCPTabBarHeight                    (WCPIsPhoneXAll ? (49.f+34.f) : 49.f)

// View safe bottom margin.
#define WCPViewSafeBottomMargin            (WCPIsPhoneXAll ? 34.f : 0.f)

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
