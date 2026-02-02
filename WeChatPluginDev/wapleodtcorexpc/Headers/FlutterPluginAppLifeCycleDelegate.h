//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSPointerArray, NSString;

@interface FlutterPluginAppLifeCycleDelegate : NSObject
{
    NSMutableArray *_notificationUnsubscribers;
    unsigned long long _debugBackgroundTask;
    NSPointerArray *_delegates;
}

- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)handleWillTerminate:(id)arg1;
- (void)handleDidBecomeActive:(id)arg1;
- (void)handleWillResignActive:(id)arg1;
- (void)handleWillEnterForeground:(id)arg1;
- (void)handleDidEnterBackground:(id)arg1;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)addDelegate:(id)arg1;
- (_Bool)hasPluginThatRespondsToSelector:(SEL)arg1;
- (_Bool)isSelectorAddedDynamically:(SEL)arg1;
- (void)dealloc;
- (id)init;
- (void)addObserverFor:(id)arg1 selector:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

