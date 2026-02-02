//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL, UIApplication;

@protocol FBSDKApplicationObserving <NSObject>

@optional
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
- (_Bool)application:(UIApplication *)arg1 didFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (void)applicationDidEnterBackground:(UIApplication *)arg1;
- (void)applicationDidBecomeActive:(UIApplication *)arg1;
@end

