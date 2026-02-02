//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, CdnRecordMediaInfo, NSMutableArray, NSString;

@interface RecordDownloadCDNMgr
{
    CMessageWrap *m_curDownMsgWrap;
    CMessageWrap *m_waitDownMsgWrap;
    NSMutableArray *m_arrCDNDownloadInfo;
    CdnRecordMediaInfo *m_curDownMediaInfo;
}

+ (unsigned int)getCacheMediaTypeWithFileType:(unsigned int)arg1;
+ (id)findRecordDataInList:(id)arg1 WithLocalDataId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CdnRecordMediaInfo *m_curDownMediaInfo; // @synthesize m_curDownMediaInfo;
@property(retain, nonatomic) CMessageWrap *m_waitDownMsgWrap; // @synthesize m_waitDownMsgWrap;
@property(retain, nonatomic) CMessageWrap *m_curDownMsgWrap; // @synthesize m_curDownMsgWrap;
- (void)onRoamBackupPackageServiceLoadMediaResult:(id)arg1 errorCode:(unsigned int)arg2 dataID:(id)arg3;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadStartFail:(int)arg1 argsWrap:(id)arg2;
- (void)onPlayerDownloadFinishEvent:(id)arg1 retcode:(int)arg2;
- (void)CallPlayeDownloadErrorWithClientMsgID:(id)arg1 RetCode:(int)arg2 WithDownloadInfo:(id)arg3;
- (void)videoKVReport:(id)arg1 cdnInfo:(id)arg2;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)handleDownloadSucc:(id)arg1 taskInfo:(id)arg2;
- (void)DownLoadOK;
- (void)DownloadFail:(int)arg1 Expired:(_Bool)arg2 DownloadInfo:(id)arg3;
- (id)getCdnMediaInfoWithFileKey:(id)arg1;
- (id)getMiddleFilePath:(id)arg1 data:(id)arg2;
- (id)getFilePath:(id)arg1 data:(id)arg2;
- (id)getTempFilePath:(id)arg1 data:(id)arg2;
- (void)CheckDownloadRecordData;
- (void)StartDownloadCurMsg;
- (void)AddDownloadTasksFromDataList:(id)arg1;
- (_Bool)needDownloadFromDataList:(id)arg1 inMsgWrap:(id)arg2;
- (id)getDownloadInfo:(id)arg1 DataId:(id)arg2 thumb:(_Bool)arg3 data:(_Bool)arg4;
- (_Bool)StopDownloadRecordMsg:(id)arg1 downloadTaskInfo:(id *)arg2;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2 thumb:(_Bool)arg3 data:(_Bool)arg4 prior:(_Bool)arg5;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2 thumb:(_Bool)arg3 data:(_Bool)arg4;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2;
- (_Bool)StartDownloadByRecordMsg:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

