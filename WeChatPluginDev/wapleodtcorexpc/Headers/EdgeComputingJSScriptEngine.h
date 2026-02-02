//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSContext, NSMutableArray, NSString;

@interface EdgeComputingJSScriptEngine
{
    JSContext *context;
    NSMutableArray *jsApis;
}

- (void).cxx_destruct;
- (void)clear;
- (id)executeArrayFunction:(id)arg1 withData:(id)arg2 withArgs:(id)arg3;
- (id)executeStringFunction:(id)arg1 withData:(id)arg2 withArgs:(id)arg3;
- (long long)executeLongFunction:(id)arg1 withData:(id)arg2 withArgs:(id)arg3;
- (int)executeIntFunction:(id)arg1 withData:(id)arg2 withArgs:(id)arg3;
- (_Bool)loadScript:(id)arg1;
- (void)registerJsApi;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

