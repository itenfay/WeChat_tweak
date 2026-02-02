//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MarsReachability : NSObject
{
    _Bool localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (int)getCacheReachabilityStatus:(_Bool)arg1;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (int)currentReachabilityStatus;
- (_Bool)connectionRequired;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)MarsstopNotifier;
- (_Bool)MarsstartNotifier;

@end

