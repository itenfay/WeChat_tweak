//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OpenIMContactOPCodePB;

@interface OpenIMContactOPService
{
    _Bool m_bSyncOplogIng;
    OpenIMContactOPCodePB *m_openImContactOPlogCache;
    NSString *m_openImContactOPlogCacheDateFilePath;
}

- (void).cxx_destruct;
- (_Bool)p_saveOpenImContactOPlogCacheDataFileInternal;
- (id)p_getOpenIMContactOPItemIdWithOplog:(unsigned int)arg1 oplogData:(id)arg2;
- (id)p_getOpenImContactOPlogCacheDataFilePath;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnOpenIMOplogResp:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)startOpenIMOplogType:(unsigned int)arg1 dtInput:(id)arg2 observer:(id)arg3;
- (unsigned int)startOpenIMOplogType:(unsigned int)arg1 dtInput:(id)arg2;
- (void)startSyncOplog;
- (void)checkSyncOplog;
- (void)NeedToSyncOplog;
- (_Bool)InsertOpenImOplog:(unsigned int)arg1 dtInput:(id)arg2 needSync:(_Bool)arg3;
- (void)onServiceEnterForeground;
- (void)loadOpenImOPLogCacheInternal;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

