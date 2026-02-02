//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FBSDKGraphRequestPiggybackManager : NSObject
{
}

+ (void)addServerConfigurationPiggyback:(id)arg1;
+ (void)addRefreshPiggybackIfStale:(id)arg1;
+ (void)addRefreshPiggyback:(id)arg1 permissionHandler:(CDUnknownBlockType)arg2;
+ (void)addPiggybackRequests:(id)arg1;

@end

