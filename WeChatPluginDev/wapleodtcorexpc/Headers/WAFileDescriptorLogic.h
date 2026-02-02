//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface WAFileDescriptorLogic
{
    NSMutableDictionary *m_dicAppId2DicFileWrap;
    NSObject<OS_dispatch_queue> *m_workQueue;
    NSRecursiveLock *m_genFdLock;
}

- (void).cxx_destruct;
- (int)getFlagWithString:(id)arg1;
- (id)genFdWithAppId:(id)arg1;
- (id)getFilePathWithOuterFileDescriptor:(id)arg1 appId:(id)arg2;
- (unsigned int)truncateWithLocalId:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 retErrMsg:(id *)arg4;
- (unsigned int)ftruncateWithFileDescriptor:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 retErrMsg:(id *)arg4;
- (void)closeFileWithAppId:(id)arg1;
- (unsigned int)writeFileWithFileDescriptor:(id)arg1 appId:(id)arg2 data:(id)arg3 position:(long long)arg4 retErrMsg:(id *)arg5;
- (unsigned int)readFileWithFileDescriptor:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 position:(long long)arg4 retErrMsg:(id *)arg5 retData:(id *)arg6;
- (unsigned int)fstatFileWithFileDescriptor:(id)arg1 appId:(id)arg2 retErrMsg:(id *)arg3 stat:(struct stat *)arg4;
- (unsigned int)closeFileWithFileDescriptor:(id)arg1 appId:(id)arg2 retErrMsg:(id *)arg3;
- (_Bool)isOpenedFileReachLimitWithAppId:(id)arg1;
- (void)removeFileWrapWithFd:(id)arg1 appId:(id)arg2;
- (_Bool)addFileWrap:(id)arg1 fd:(id)arg2;
- (id)getFileWrapWithOuterFileDescriptor:(id)arg1 appId:(id)arg2;
- (unsigned int)openFileWithLocalId:(id)arg1 flag:(id)arg2 appId:(id)arg3 retErrMsg:(id *)arg4 retFd:(id *)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

