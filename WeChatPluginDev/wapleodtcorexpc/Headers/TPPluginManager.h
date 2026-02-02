//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, TPRecursiveLock, TPWorkerQueue;

@interface TPPluginManager : NSObject
{
    NSMutableArray *_pluginList;
    TPWorkerQueue *_pluginEventQueue;
    TPRecursiveLock *_pluginListLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPRecursiveLock *pluginListLock; // @synthesize pluginListLock=_pluginListLock;
@property(retain, nonatomic) TPWorkerQueue *pluginEventQueue; // @synthesize pluginEventQueue=_pluginEventQueue;
@property(retain, nonatomic) NSMutableArray *pluginList; // @synthesize pluginList=_pluginList;
- (void)printEvent:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)releasePlugins;
- (void)removePlugin:(id)arg1;
- (void)addPlugin:(id)arg1;
- (void)pushEvent:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

