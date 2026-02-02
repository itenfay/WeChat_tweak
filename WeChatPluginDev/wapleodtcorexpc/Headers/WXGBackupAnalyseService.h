//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BackupAnalyseInfo, NSString, WCTDatabase, WXGBackupRecoverAnalyseInfo, WXGImportAnalyseInfo;

@interface WXGBackupAnalyseService
{
    _Bool _hasPause;
    WCTDatabase *_infoDB;
    BackupAnalyseInfo *_finishInfo;
    WXGBackupRecoverAnalyseInfo *_recoverInfo;
    WXGImportAnalyseInfo *_importInfo;
}

+ (id)briefForAnalyseInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasPause; // @synthesize hasPause=_hasPause;
@property(retain, nonatomic) WXGImportAnalyseInfo *importInfo; // @synthesize importInfo=_importInfo;
@property(retain, nonatomic) WXGBackupRecoverAnalyseInfo *recoverInfo; // @synthesize recoverInfo=_recoverInfo;
@property(retain, nonatomic) BackupAnalyseInfo *finishInfo; // @synthesize finishInfo=_finishInfo;
@property(retain, nonatomic) WCTDatabase *infoDB; // @synthesize infoDB=_infoDB;
- (void)reportDataReconciliation;
- (void)setHasPauseWhenTransfer;
- (id)getLastFiveInfoString;
- (void)insertBackupMgrInfo:(id)arg1 type:(unsigned long long)arg2;
- (void)insertImportInfo:(id)arg1 type:(unsigned long long)arg2;
- (void)insertRecoverInfo:(id)arg1 type:(unsigned long long)arg2;
- (void)insertAnalyseInfo:(id)arg1 type:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

