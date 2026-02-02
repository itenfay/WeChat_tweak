//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableString, NSSet, NSString;

@interface ClickStreamMgr
{
    struct timeval m_tvStart;
    NSString *m_nsLastPageID;
    NSString *m_nsInterruptPageID;
    NSMutableString *m_nsReport;
    NSSet *m_setIgnorePageIDs;
}

- (void).cxx_destruct;
- (void)insertWithKey:(id)arg1 Value:(id)arg2;
- (void)clearClickStreamReport;
- (id)getClickStreamReport;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)recordPage:(id)arg1 withTime:(long long)arg2;
- (void)checkWriteReportLog;
- (void)writeReportLog:(_Bool)arg1;
- (id)genRedunDantReport;
- (void)inActivePage:(id)arg1;
- (void)activePage:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

