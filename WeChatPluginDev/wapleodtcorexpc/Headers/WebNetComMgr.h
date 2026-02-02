//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSRecursiveLock, NSString;

@interface WebNetComMgr
{
    struct shared_ptr<WebNetCallBack> m_spCallback;
    NSMutableSet *m_TaskCallbackSet;
    NSRecursiveLock *m_CallbackLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)OnDownloadCompleted:(id)arg1 response:(id)arg2;
- (void)OnUploadCompleted:(id)arg1 response:(id)arg2;
- (void)OnProgressChanged:(id)arg1 completedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)UnRegisterTaskCallBack:(id)arg1;
- (void)RegisterTaskCallBack:(id)arg1;
- (int)StartURLDownloadTask:(id)arg1 withUrl:(id)arg2 withSavePath:(id)arg3 withIPList:(id)arg4 withIsGzip:(_Bool)arg5 withFileType:(int)arg6;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

