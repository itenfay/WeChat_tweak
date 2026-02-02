//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WAJSCoreService;

@interface WAJSContextPluginScheduler : NSObject
{
    WAJSCoreService *_ownerContext;
    NSMutableDictionary *_pluginName2InstanceDic;
    NSString *_lastOperateMusicPluginName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *lastOperateMusicPluginName; // @synthesize lastOperateMusicPluginName=_lastOperateMusicPluginName;
@property(readonly, nonatomic) NSMutableDictionary *pluginName2InstanceDic; // @synthesize pluginName2InstanceDic=_pluginName2InstanceDic;
@property(readonly, nonatomic) __weak WAJSCoreService *ownerContext; // @synthesize ownerContext=_ownerContext;
- (void)setWAAppTaskRunningState:(unsigned long long)arg1;
- (void)setWAAppTaskState:(unsigned long long)arg1;
- (void)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)loadPluginForEvent:(long long)arg1;
- (id)GetPluginInstanceIfExsist:(id)arg1;
- (id)GetPluginInstanceByName:(id)arg1;
- (void)createPluginInstanceIfNotExsist:(id)arg1;
- (void)commonCreatePluginWithPluginConfigArray:(id)arg1;
- (void)loadPluginWhenInit;
- (void)loadingInitPluginArray;
- (void)dealloc;
- (id)initWithOwnerJSContext:(id)arg1;
- (void)updateLastOperateMusicPluginName:(id)arg1;
- (id)operateMusicInstance;

@end

