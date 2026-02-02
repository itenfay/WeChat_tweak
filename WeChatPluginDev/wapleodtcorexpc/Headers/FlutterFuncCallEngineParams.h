//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface FlutterFuncCallEngineParams
{
    NSMutableDictionary *_paramsMap;
}

+ (void)engineParamsArray:(id)arg1 fromArray:(id)arg2;
+ (void)engineParamsMap:(id)arg1 fromMap:(id)arg2;
+ (void)enginePramsItem:(id)arg1 fromValue:(id)arg2;
+ (void)engineParams:(id)arg1 fromMap:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *paramsMap; // @synthesize paramsMap=_paramsMap;
- (id)getEngineParams:(id)arg1;
- (void)setEngineParams:(id)arg1 fromMap:(id)arg2;
- (void)setEngineParams:(id)arg1 params:(id)arg2;
- (id)nextParamsKey;
- (id)callHost:(id)arg1 engineId:(id)arg2;
- (id)funcName;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

