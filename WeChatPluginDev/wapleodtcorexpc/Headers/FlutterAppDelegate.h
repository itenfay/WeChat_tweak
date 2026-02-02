//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIResponder.h>

@class FlutterPluginAppLifeCycleDelegate, NSString, UIWindow;

@interface FlutterAppDelegate : UIResponder
{
    FlutterPluginAppLifeCycleDelegate *_lifeCycleDelegate;
    UIWindow *_window;
    CDUnknownBlockType _rootFlutterViewControllerGetter;
}

@property(copy, nonatomic) CDUnknownBlockType rootFlutterViewControllerGetter; // @synthesize rootFlutterViewControllerGetter=_rootFlutterViewControllerGetter;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (long long)lastAppModificationTime;
- (_Bool)application:(id)arg1 shouldRestoreSecureApplicationState:(id)arg2;
- (_Bool)application:(id)arg1 shouldSaveSecureApplicationState:(id)arg2;
- (_Bool)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;
- (_Bool)application:(id)arg1 shouldSaveApplicationState:(id)arg2;
- (void)logCapabilityConfigurationWarningIfNeeded:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)delegateRespondsSelectorToPlugins:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)addApplicationLifeCycleDelegate:(id)arg1;
- (id)valuePublishedByPlugin:(id)arg1;
- (_Bool)hasPlugin:(id)arg1;
- (id)registrarForPlugin:(id)arg1;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)openURL:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)rootFlutterViewController;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

