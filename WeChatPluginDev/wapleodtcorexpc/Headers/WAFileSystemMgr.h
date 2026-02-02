//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString, WAFileDescriptorLogic;
@protocol OS_dispatch_queue;

@interface WAFileSystemMgr
{
    NSObject<OS_dispatch_queue> *m_workQueue;
    WAFileDescriptorLogic *m_fdLogic;
}

- (void).cxx_destruct;
- (void)onAppTaskTerminate:(id)arg1;
- (void)updateFileStatusWithPath:(id)arg1 originFileSize:(unsigned long long)arg2 appId:(id)arg3;
- (void)closeFileWithAppId:(id)arg1;
- (void)truncateWithLocalId:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 isSync:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)ftruncateWithFileDescriptor:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 isSync:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)writeFileWithFileDescriptor:(id)arg1 appId:(id)arg2 data:(id)arg3 position:(long long)arg4 isSync:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)readFileWithFileDescriptor:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 position:(long long)arg4 isSync:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fstatFileWithFileDescriptor:(id)arg1 appId:(id)arg2 isSync:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)closeFileWithFileDescriptor:(id)arg1 appId:(id)arg2 isSync:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openFileWithLocalId:(id)arg1 flag:(id)arg2 appId:(id)arg3 isSync:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

