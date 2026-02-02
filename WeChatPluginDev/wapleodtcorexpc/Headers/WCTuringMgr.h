//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WCTuringMgr
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _bEnable;
}

- (void).cxx_destruct;
- (void)reportOwnerRecord;
- (void)reportHumenRecord;
- (void)onAuthOK;
- (void)keyboardWillDisappear:(id)arg1 withContext:(id)arg2 isFinishInput:(_Bool)arg3;
- (void)keyboardWillAppear:(id)arg1 withContext:(id)arg2;
- (void)start:(unsigned long long)arg1 action:(int)arg2 duration:(float)arg3;
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

