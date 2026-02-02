//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSData, NSDictionary, NSError, NSString, NSURL, NSUserActivity, UIApplication, UIApplicationShortcutItem, UILocalNotification, UIUserNotificationSettings;

@protocol FlutterApplicationLifeCycleDelegate <UNUserNotificationCenterDelegate>

@optional
- (_Bool)application:(UIApplication *)arg1 continueUserActivity:(NSUserActivity *)arg2 restorationHandler:(void (^)(NSArray *))arg3;
- (_Bool)application:(UIApplication *)arg1 performFetchWithCompletionHandler:(void (^)(unsigned long long))arg2;
- (_Bool)application:(UIApplication *)arg1 handleEventsForBackgroundURLSession:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (_Bool)application:(UIApplication *)arg1 performActionForShortcutItem:(UIApplicationShortcutItem *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
- (_Bool)application:(UIApplication *)arg1 handleOpenURL:(NSURL *)arg2;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (void)application:(UIApplication *)arg1 didReceiveLocalNotification:(UILocalNotification *)arg2;
- (_Bool)application:(UIApplication *)arg1 didReceiveRemoteNotification:(NSDictionary *)arg2 fetchCompletionHandler:(void (^)(unsigned long long))arg3;
- (void)application:(UIApplication *)arg1 didFailToRegisterForRemoteNotificationsWithError:(NSError *)arg2;
- (void)application:(UIApplication *)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)arg2;
- (void)application:(UIApplication *)arg1 didRegisterUserNotificationSettings:(UIUserNotificationSettings *)arg2;
- (void)applicationWillTerminate:(UIApplication *)arg1;
- (void)applicationWillEnterForeground:(UIApplication *)arg1;
- (void)applicationDidEnterBackground:(UIApplication *)arg1;
- (void)applicationWillResignActive:(UIApplication *)arg1;
- (void)applicationDidBecomeActive:(UIApplication *)arg1;
- (_Bool)application:(UIApplication *)arg1 willFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (_Bool)application:(UIApplication *)arg1 didFinishLaunchingWithOptions:(NSDictionary *)arg2;
@end

