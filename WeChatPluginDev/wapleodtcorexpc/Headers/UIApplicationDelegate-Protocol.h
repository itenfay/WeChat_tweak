//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CKShareMetadata, INIntent, NSArray, NSCoder, NSData, NSDictionary, NSError, NSSet, NSString, NSURL, NSUserActivity, UIApplication, UIApplicationShortcutItem, UILocalNotification, UISceneConfiguration, UISceneConnectionOptions, UISceneSession, UIUserNotificationSettings, UIViewController, UIWindow;

@protocol UIApplicationDelegate <NSObject>

@optional
@property(retain, nonatomic) UIWindow *window;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIWindow",?,&,N

- (_Bool)applicationShouldAutomaticallyLocalizeKeyCommands:(UIApplication *)arg1;
- (void)application:(UIApplication *)arg1 didDiscardSceneSessions:(NSSet *)arg2;
- (UISceneConfiguration *)application:(UIApplication *)arg1 configurationForConnectingSceneSession:(UISceneSession *)arg2 options:(UISceneConnectionOptions *)arg3;
- (void)application:(UIApplication *)arg1 userDidAcceptCloudKitShareWithMetadata:(CKShareMetadata *)arg2;
- (void)application:(UIApplication *)arg1 didUpdateUserActivity:(NSUserActivity *)arg2;
- (void)application:(UIApplication *)arg1 didFailToContinueUserActivityWithType:(NSString *)arg2 error:(NSError *)arg3;
- (_Bool)application:(UIApplication *)arg1 continueUserActivity:(NSUserActivity *)arg2 restorationHandler:(void (^)(NSArray *))arg3;
- (_Bool)application:(UIApplication *)arg1 willContinueUserActivityWithType:(NSString *)arg2;
- (_Bool)application:(UIApplication *)arg1 shouldRestoreApplicationState:(NSCoder *)arg2;
- (_Bool)application:(UIApplication *)arg1 shouldSaveApplicationState:(NSCoder *)arg2;
- (void)application:(UIApplication *)arg1 didDecodeRestorableStateWithCoder:(NSCoder *)arg2;
- (void)application:(UIApplication *)arg1 willEncodeRestorableStateWithCoder:(NSCoder *)arg2;
- (_Bool)application:(UIApplication *)arg1 shouldRestoreSecureApplicationState:(NSCoder *)arg2;
- (_Bool)application:(UIApplication *)arg1 shouldSaveSecureApplicationState:(NSCoder *)arg2;
- (UIViewController *)application:(UIApplication *)arg1 viewControllerWithRestorationIdentifierPath:(NSArray *)arg2 coder:(NSCoder *)arg3;
- (_Bool)application:(UIApplication *)arg1 shouldAllowExtensionPointIdentifier:(NSString *)arg2;
- (unsigned long long)application:(UIApplication *)arg1 supportedInterfaceOrientationsForWindow:(UIWindow *)arg2;
- (void)applicationProtectedDataDidBecomeAvailable:(UIApplication *)arg1;
- (void)applicationProtectedDataWillBecomeUnavailable:(UIApplication *)arg1;
- (void)applicationWillEnterForeground:(UIApplication *)arg1;
- (void)applicationDidEnterBackground:(UIApplication *)arg1;
- (void)application:(UIApplication *)arg1 handleIntent:(INIntent *)arg2 completionHandler:(void (^)(INIntentResponse *))arg3;
- (id)application:(UIApplication *)arg1 handlerForIntent:(INIntent *)arg2;
- (void)applicationShouldRequestHealthAuthorization:(UIApplication *)arg1;
- (void)application:(UIApplication *)arg1 handleWatchKitExtensionRequest:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)application:(UIApplication *)arg1 handleEventsForBackgroundURLSession:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (void)application:(UIApplication *)arg1 performActionForShortcutItem:(UIApplicationShortcutItem *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)application:(UIApplication *)arg1 performFetchWithCompletionHandler:(void (^)(unsigned long long))arg2;
- (void)application:(UIApplication *)arg1 didReceiveRemoteNotification:(NSDictionary *)arg2 fetchCompletionHandler:(void (^)(unsigned long long))arg3;
- (void)application:(UIApplication *)arg1 handleActionWithIdentifier:(NSString *)arg2 forLocalNotification:(UILocalNotification *)arg3 withResponseInfo:(NSDictionary *)arg4 completionHandler:(void (^)(void))arg5;
- (void)application:(UIApplication *)arg1 handleActionWithIdentifier:(NSString *)arg2 forRemoteNotification:(NSDictionary *)arg3 completionHandler:(void (^)(void))arg4;
- (void)application:(UIApplication *)arg1 handleActionWithIdentifier:(NSString *)arg2 forRemoteNotification:(NSDictionary *)arg3 withResponseInfo:(NSDictionary *)arg4 completionHandler:(void (^)(void))arg5;
- (void)application:(UIApplication *)arg1 handleActionWithIdentifier:(NSString *)arg2 forLocalNotification:(UILocalNotification *)arg3 completionHandler:(void (^)(void))arg4;
- (void)application:(UIApplication *)arg1 didReceiveLocalNotification:(UILocalNotification *)arg2;
- (void)application:(UIApplication *)arg1 didReceiveRemoteNotification:(NSDictionary *)arg2;
- (void)application:(UIApplication *)arg1 didFailToRegisterForRemoteNotificationsWithError:(NSError *)arg2;
- (void)application:(UIApplication *)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)arg2;
- (void)application:(UIApplication *)arg1 didRegisterUserNotificationSettings:(UIUserNotificationSettings *)arg2;
- (void)application:(UIApplication *)arg1 didChangeStatusBarFrame:(struct CGRect)arg2;
- (void)application:(UIApplication *)arg1 willChangeStatusBarFrame:(struct CGRect)arg2;
- (void)application:(UIApplication *)arg1 didChangeStatusBarOrientation:(long long)arg2;
- (void)application:(UIApplication *)arg1 willChangeStatusBarOrientation:(long long)arg2 duration:(double)arg3;
- (void)applicationSignificantTimeChange:(UIApplication *)arg1;
- (void)applicationWillTerminate:(UIApplication *)arg1;
- (void)applicationDidReceiveMemoryWarning:(UIApplication *)arg1;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
- (_Bool)application:(UIApplication *)arg1 handleOpenURL:(NSURL *)arg2;
- (void)applicationWillResignActive:(UIApplication *)arg1;
- (void)applicationDidBecomeActive:(UIApplication *)arg1;
- (_Bool)application:(UIApplication *)arg1 didFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (_Bool)application:(UIApplication *)arg1 willFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (void)applicationDidFinishLaunching:(UIApplication *)arg1;
@end

