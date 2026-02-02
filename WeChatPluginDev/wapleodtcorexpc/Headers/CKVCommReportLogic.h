//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HeavyUserRespInfo, NSRecursiveLock, NSString;

@interface CKVCommReportLogic
{
    _Bool is_running_;
    NSString *m_filename;
    NSRecursiveLock *m_lock;
    HeavyUserRespInfo *m_heavy_cache;
}

- (void).cxx_destruct;
@property _Bool is_running_; // @synthesize is_running_;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnReportReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetKVStrategyReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ReportDataWithMainThread:(id)arg1;
- (_Bool)RequestGetKVStrategy:(id)arg1;
- (void)ReportData:(id)arg1 withData:(id)arg2 withChannel:(int)arg3;
- (id)GetIDMappingObj;
- (unsigned int)getIDMappingVersion:(int)arg1;
- (void)SaveIDMapping:(id)arg1 withChannel:(int)arg2;
- (void)PrintIDMapping:(id)arg1 withSvrData:(_Bool)arg2;
- (_Bool)IsIDMappingFileExist;
- (void)makeSureIDMappingFileExist;
- (id)getIDMappingFullFileName;
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

