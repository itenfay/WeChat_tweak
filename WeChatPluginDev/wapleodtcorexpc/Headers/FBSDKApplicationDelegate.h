//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface FBSDKApplicationDelegate : NSObject
{
    NSHashTable *_applicationObservers;
    _Bool _isAppLaunched;
}

+ (_Bool)isSDKInitialized;
+ (long long)applicationState;
+ (id)sharedInstance;
+ (void)initializeSDK:(id)arg1;
+ (void)initializeWithLaunchData:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (_Bool)isAppLaunched;
- (void)_logSDKInitialize;
- (void)_logIfAppLinkEvent:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)dealloc;
- (id)init;

@end

