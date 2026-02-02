//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMapTable, NSString;

@interface MMFlutterEngineCache
{
    NSMapTable *_cachedEngines;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *cachedEngines; // @synthesize cachedEngines=_cachedEngines;
- (void)dealloc;
- (void)remove:(id)arg1;
- (void)put:(id)arg1 engine:(id)arg2;
- (id)get:(id)arg1;
- (_Bool)contains:(id)arg1;
- (id)createEngineWithEntryPoint:(id)arg1 initialRoute:(id)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

