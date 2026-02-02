//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSLock, NSMutableSet, NSString;

@interface ClientCheckMgr
{
    NSLock *_lock;
    NSMutableSet *_setImageList;
}

- (void).cxx_destruct;
- (id)expandFilePath:(id)arg1;
- (id)runningProcesses;
- (id)arrToString:(id)arg1;
- (void)addImage:(const char *)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)reportAppList:(id)arg1;
- (void)checkHookWithSeq:(unsigned int)arg1;
- (void)checkHook:(id)arg1;
- (void)reportFileConsistency:(id)arg1 fileName:(id)arg2 offset:(unsigned int)arg3 bufferSize:(unsigned int)arg4 seq:(unsigned int)arg5;
- (void)checkConsistency:(id)arg1;
- (void)registerAddImageCallBack;
- (id)getImageList;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)test1;
- (void)test;
- (void)onAuthOK;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

