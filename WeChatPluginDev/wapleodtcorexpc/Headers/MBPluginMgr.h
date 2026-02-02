//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMapTable, NSString;

@interface MBPluginMgr
{
    NSMapTable *_extPluginsMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *extPluginsMap; // @synthesize extPluginsMap=_extPluginsMap;
- (id)providePlugin:(id)arg1 version:(id)arg2;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

