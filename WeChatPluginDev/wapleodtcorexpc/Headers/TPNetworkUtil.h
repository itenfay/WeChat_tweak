//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable, TPRecursiveLock;

@interface TPNetworkUtil : NSObject
{
    struct __SCNetworkReachability *_defaultRouteReachability;
    _Bool _started;
    long long _reachableState;
    TPRecursiveLock *_delegateLock;
    NSHashTable *_delegateArray;
    long long _cellNetType;
}

+ (_Bool)isNetworkType5G:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property long long cellNetType; // @synthesize cellNetType=_cellNetType;
@property(retain, nonatomic) NSHashTable *delegateArray; // @synthesize delegateArray=_delegateArray;
@property(retain, nonatomic) TPRecursiveLock *delegateLock; // @synthesize delegateLock=_delegateLock;
@property long long reachableState; // @synthesize reachableState=_reachableState;
- (void)updateRadioAccessTechnology;
- (void)handleTPNetworkCTRadioAccessTechnologyDidChangeNotification;
- (void)stopListenRadioAccessTechnology;
- (void)startListenRadioAccessTechnology;
- (_Bool)isWWANAcitve;
- (_Bool)isWifiAcitve;
- (_Bool)isNetWorkReachable;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)reset:(long long)arg1;
- (void)stopListenNetworkState;
- (void)startListenNetworkState;
- (void)stopIfNeeded;
- (void)startIfNeeded;
@property(readonly) long long networkType;
- (id)init;

@end

