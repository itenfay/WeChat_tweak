//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIApplication;

@protocol FBSDKURLOpening <NSObject>
- (_Bool)isAuthenticationURL:(NSURL *)arg1;
- (void)applicationDidBecomeActive:(UIApplication *)arg1;
- (_Bool)canOpenURL:(NSURL *)arg1 forApplication:(UIApplication *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
@end

