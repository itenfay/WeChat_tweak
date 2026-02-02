//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAppMsgDownloadDataBase, NSString;

@interface MMAppMsgDownloadMgr
{
    _Bool _shouldStopClean;
    MMAppMsgDownloadDataBase *_database;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldStopClean; // @synthesize shouldStopClean=_shouldStopClean;
@property(retain, nonatomic) MMAppMsgDownloadDataBase *database; // @synthesize database=_database;
- (unsigned int)getAppMsgDownloadUiPercent:(id)arg1;
- (_Bool)checkUserStopUpload:(id)arg1;
- (unsigned int)getAppMsgDownloadStatus:(id)arg1;
- (void)appMsgDownloadExpired:(id)arg1;
- (void)appMsgDownloadFailed:(id)arg1;
- (void)appMsgDownloadDone:(id)arg1;
- (void)appMsgDownloadPause:(id)arg1;
- (void)appMsgDownloadStart:(id)arg1;
- (void)appMsgCompleteUpload:(id)arg1 oriSvrId:(long long)arg2;
- (void)appMsgPauseUpload:(id)arg1;
- (void)appMsgNotUploadDoneDownload:(id)arg1;
- (_Bool)checkAppMsgStartUploadNotCanAddDB:(id)arg1;
- (void)appMsgStartUpload:(id)arg1;
- (void)cleanData;
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

