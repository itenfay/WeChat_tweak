//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface QBReachability : NSObject
{
    _Bool reachableOnWWAN;
    struct __SCNetworkReachability *reachabilityRef;
    NSObject<OS_dispatch_queue> *reachabilitySerialQueue;
    id reachabilityObject;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
@property(retain, nonatomic) id reachabilityObject; // @synthesize reachabilityObject;
@property(nonatomic) _Bool reachableOnWWAN; // @synthesize reachableOnWWAN;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilitySerialQueue; // @synthesize reachabilitySerialQueue;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef;
- (void).cxx_destruct;
- (void)reachabilityChanged:(unsigned int)arg1;
- (long long)currentReachabilityStatus;
- (_Bool)isReachableViaWiFi;
- (_Bool)isReachable;
- (_Bool)isReachableWithFlags:(unsigned int)arg1;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (void)dealloc;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;

@end

