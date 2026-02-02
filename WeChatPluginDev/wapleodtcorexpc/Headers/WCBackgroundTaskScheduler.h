//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSRecursiveLock;

@interface WCBackgroundTaskScheduler : NSObject
{
    _Bool _isAppForeground;
    NSMutableOrderedSet *_tasks;
    NSRecursiveLock *_lock;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAppForeground; // @synthesize isAppForeground=_isAppForeground;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableOrderedSet *tasks; // @synthesize tasks=_tasks;
- (void)onAppEnterBackground:(id)arg1;
- (void)onAppEnterForeground:(id)arg1;
- (void)registerNotifications;
- (id)nextTask;
- (_Bool)unregisterTask:(id)arg1;
- (_Bool)registerTask:(id)arg1;
- (id)init;

@end

