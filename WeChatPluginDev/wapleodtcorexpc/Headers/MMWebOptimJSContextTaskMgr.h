//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSVirtualMachine, MMWebOptimJSContextTaskLoader, NSMutableDictionary, NSString;

@interface MMWebOptimJSContextTaskMgr
{
    MMWebOptimJSContextTaskLoader *_taskLoader;
    NSMutableDictionary *_dicTaskId2Task;
    JSVirtualMachine *_jsVirtualMachine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSVirtualMachine *jsVirtualMachine; // @synthesize jsVirtualMachine=_jsVirtualMachine;
@property(retain, nonatomic) NSMutableDictionary *dicTaskId2Task; // @synthesize dicTaskId2Task=_dicTaskId2Task;
@property(retain, nonatomic) MMWebOptimJSContextTaskLoader *taskLoader; // @synthesize taskLoader=_taskLoader;
- (void)callBackWithFailBlock:(CDUnknownBlockType)arg1 config:(id)arg2 startTime:(unsigned long long)arg3;
- (void)callBackWithSuccessBlock:(CDUnknownBlockType)arg1 config:(id)arg2 startTime:(unsigned long long)arg3;
- (void)closeAllTask;
- (id)taskWithUrl:(id)arg1;
- (void)closeTaskWithTaskId:(id)arg1;
- (void)closeTask:(id)arg1;
- (id)taskWithTaskId:(id)arg1;
- (id)taskWithConfig:(id)arg1;
- (void)launchTaskWithConfig:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailed:(CDUnknownBlockType)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

