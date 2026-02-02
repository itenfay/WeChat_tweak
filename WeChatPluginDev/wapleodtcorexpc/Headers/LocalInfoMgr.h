//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLocalInfo, NSRecursiveLock, NSString;

@interface LocalInfoMgr
{
    NSRecursiveLock *m_lock;
    CLocalInfo *m_localInfo;
    _Bool _disableSave;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableSave; // @synthesize disableSave=_disableSave;
- (void)setMmtlsCtrlFlag:(unsigned int)arg1 force:(_Bool)arg2;
- (void)clearLocalInfo;
- (void)clearAllLocalInfo;
- (_Bool)saveLocalInfo;
- (void)loadLocalInfo;
@property(readonly, nonatomic) CLocalInfo *localInfo;
- (_Bool)returnAsRawService;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

