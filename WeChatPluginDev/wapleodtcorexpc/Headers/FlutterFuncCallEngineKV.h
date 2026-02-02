//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLRUCache, NSString;

@interface FlutterFuncCallEngineKV
{
    MMLRUCache *_kvMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLRUCache *kvMap; // @synthesize kvMap=_kvMap;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)callHost:(id)arg1 engineId:(id)arg2;
- (id)funcName;
- (void)remove:(id)arg1;
- (void)put:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

