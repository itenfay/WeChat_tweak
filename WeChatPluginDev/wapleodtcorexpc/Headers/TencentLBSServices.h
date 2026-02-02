//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSLock;

@interface TencentLBSServices : NSObject
{
    NSLock *_lock;
    double _lastPostLocationTime;
    double _lastWifiTime;
}

+ (id)sharedInstance;
+ (int)getAppNameWithApiKey:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double lastWifiTime; // @synthesize lastWifiTime=_lastWifiTime;
@property(nonatomic) double lastPostLocationTime; // @synthesize lastPostLocationTime=_lastPostLocationTime;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (_Bool)updateLastWifiTime;
- (_Bool)updateLastPostLocationTime;
- (id)init;

@end

