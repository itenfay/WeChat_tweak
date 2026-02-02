//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class HLCarriorInfo, NSMutableDictionary, NSRecursiveLock;

@interface HLSchInfo : NSObject
{
    HLCarriorInfo *_carrior;
    NSMutableDictionary *_mapApnToSchInfo;
    NSRecursiveLock *_lock;
    long long _schIndex;
    struct __SCNetworkReachability *_ref;
    id _backObserver;
}

+ (_Bool)isJailbroken;
+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) id backObserver; // @synthesize backObserver=_backObserver;
@property(nonatomic) struct __SCNetworkReachability *ref; // @synthesize ref=_ref;
@property(nonatomic) long long schIndex; // @synthesize schIndex=_schIndex;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *mapApnToSchInfo; // @synthesize mapApnToSchInfo=_mapApnToSchInfo;
- (void)switchIP:(id)arg1 domain:(id)arg2 carrior:(id)arg3;
- (id)ipForDomain:(id)arg1 count:(long long *)arg2;
- (id)settingValueForKey:(id)arg1 appID:(long long)arg2 carrior:(id)arg3;
- (void)touchScheduler;
- (void)asyncTouchScheduler;
- (void)configReachability;
@property(retain) HLCarriorInfo *carrior; // @synthesize carrior=_carrior;
- (void)dealloc;
- (id)init;

@end

