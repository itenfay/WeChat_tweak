//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface MMTemplateMsgAuthService
{
    _Bool _isScopeItemWrapFetching;
    NSMutableArray *_pendingScopeItemWrapQueue;
}

- (void).cxx_destruct;
- (_Bool)isMsgItemValid:(id)arg1;
- (_Bool)removeMsgItemWrapFromQueue:(id)arg1;
- (_Bool)addMsgItemWrapToQueue:(id)arg1;
- (_Bool)updateMsgItemWrap:(id)arg1 isHandling:(_Bool)arg2;
- (id)getMsgItemWrapWithScopeID:(id)arg1 forUser:(id)arg2;
- (id)filterOutHandlingMsgItem;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)updateScopeItem:(id)arg1 forUser:(id)arg2;
- (void)handleFetchScopeItemScopeRecv:(id)arg1;
- (void)fetchScopeItemScopeRecvInPendingList;
- (void)fetchScopeItemScopeRecvWithScopeID:(id)arg1 businessType:(unsigned int)arg2 forUser:(id)arg3;
- (void)fetchScopeItemScopeRecvWithScopeID:(id)arg1 forUser:(id)arg2;
- (void)handleUpdateScopeItemScopeRecv:(id)arg1;
- (_Bool)updateScopeCacheScopeList:(id)arg1 forUser:(id)arg2 scene:(unsigned int)arg3;
- (_Bool)updateScopeCacheGlobalRecv:(_Bool)arg1 forUser:(id)arg2;
- (void)handleFetchScopeList:(id)arg1;
- (void)fetchScopeListForUser:(id)arg1;
- (void)handleUpdateAccountGlobalNotifyOrScopeGlobalRecv:(id)arg1;
- (void)handleFetchAccountCacheAndScopeGlobalRecv:(id)arg1;
- (id)convertMsgItems2ScopeItems:(id)arg1 isShowInSetting:(_Bool)arg2 cacheMaxAge:(unsigned int)arg3;
- (void)cleanUpShowInSettingScopeListForUser:(id)arg1;
- (void)setScopeList:(id)arg1 forUser:(id)arg2 isOverWriteDescInfo:(_Bool)arg3 settingEntry:(unsigned long long)arg4;
- (void)setFetchFailMsgItem:(id)arg1 maxValidTime:(unsigned int)arg2;
- (void)setScopeGlobalRecv:(_Bool)arg1 forUser:(id)arg2;
- (id)getScopeItemWithScopeID:(id)arg1 forUser:(id)arg2;
- (id)getScopeItemCopyWithScopeID:(id)arg1 forUser:(id)arg2;
- (id)getScopeCacheCopyForUser:(id)arg1;
- (void)addNotifyItem:(id)arg1 toAccountList:(id)arg2;
- (_Bool)isNotifyItemValid:(id)arg1;
- (void)addAccountListWithResp:(id)arg1;
- (void)cleanUpAccountListWithoutNotify;
- (void)setAccountGlobalNotify:(_Bool)arg1;
- (id)getAccountCacheCopy;
- (id)readScopeCacheIfNilThenCreate:(id)arg1;
- (id)readAccountCacheIfNilThenCreate;
- (void)writeScopeCacheToFile:(id)arg1;
- (id)readScopeCacheFromFile:(id)arg1;
- (void)writeAccountCacheToFile:(id)arg1;
- (id)readAccountCacheFromFile;
- (void)dealloc;
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

