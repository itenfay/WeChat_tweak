//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WAWorkFlowBase : NSObject
{
    NSString *_workFlowName;
    NSMutableArray *_arrStepInfo;
    id _context;
    _Bool _isStartRun;
    _Bool _isCancel;
    CDUnknownBlockType _completeHandler;
}

- (void).cxx_destruct;
- (void)callSuccess;
- (void)callFail:(id)arg1;
- (void)callCompleteHandler:(_Bool)arg1 error:(id)arg2;
- (_Bool)checkFinishedStepInfo:(id)arg1 getStepInfoIndex:(unsigned long long *)arg2;
- (void)runStepSubWorkFlow:(id)arg1;
- (void)runStepBlock:(id)arg1;
- (_Bool)runOneStep:(id)arg1;
- (void)onWorkFlowEnd;
- (void)onWorkFlowStart;
- (void)onStepFinish:(id)arg1 isSuccess:(_Bool)arg2 error:(id)arg3;
- (void)runSteps;
- (void)cancel;
- (void)runWithContext:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)addStepSubWorkFlow:(id)arg1;
- (void)addStepName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)workFlowName;
- (id)initWithName:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

