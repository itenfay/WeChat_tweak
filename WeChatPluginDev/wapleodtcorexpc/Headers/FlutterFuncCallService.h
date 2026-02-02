//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface FlutterFuncCallService
{
    NSMutableDictionary *_funcImpl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *funcImpl; // @synthesize funcImpl=_funcImpl;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)unRegisterFunc:(id)arg1;
- (void)registerFunc:(id)arg1;
- (id)callHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

