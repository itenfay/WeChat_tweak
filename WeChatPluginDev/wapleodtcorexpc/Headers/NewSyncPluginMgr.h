//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface NewSyncPluginMgr
{
    NSMutableDictionary *m_dicSelectorList;
    NSRecursiveLock *m_oMgrLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *m_dicSelectorList; // @synthesize m_dicSelectorList;
- (void)onNewSyncPlugin:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)CheckSelector:(unsigned int)arg1 Request:(id)arg2;
- (void)MergeKeyBufferByType:(unsigned int)arg1 Buffer:(id)arg2;
- (id)GetKeyBufferByType:(unsigned int)arg1;
- (_Bool)IsMd5Different:(unsigned int)arg1 Md5:(id)arg2;
- (void)SetSyncKeyMd5BySelector:(unsigned int)arg1 Md5:(id)arg2;
- (id)GetSyncWrapBySelector:(unsigned int)arg1;
- (unsigned int)GetCgiBySelector:(unsigned int)arg1;
- (unsigned int)GetSelectorByCgi:(unsigned int)arg1;
- (void)SetSyncIngFlag:(_Bool)arg1 Selector:(unsigned int)arg2;
- (_Bool)IsSelectorContinue:(unsigned int)arg1;
- (_Bool)IsSelectorSyncIng:(unsigned int)arg1;
- (void)ResetNewSyncWrap:(unsigned int)arg1;
- (void)InitSelectorList;
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

