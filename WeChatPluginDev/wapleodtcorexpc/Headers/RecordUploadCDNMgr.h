//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSMutableArray, NSString, OpenBufferUploadMgr, RecordUploadTask;
@protocol RecordUploadCDNMgrDelegate;

@interface RecordUploadCDNMgr : NSObject
{
    NSMutableArray *m_arrMsgWrap;
    NSMutableArray *m_arrRecordData;
    NSMutableArray *m_arrCDNUploadInfo;
    CMessageWrap *m_curMsgWrap;
    RecordUploadTask *m_curUploadTask;
    RecordUploadTask *m_recordSelfUploadTask;
    OpenBufferUploadMgr *m_openBufferUploadMgr;
    int m_sendRetryCount;
    NSMutableArray *m_bigFileTasks;
    unsigned long long m_uiCurUploadTaskTotalSize;
    NSMutableArray *m_favTranCDNItemArr;
    NSMutableArray *m_favTranCDNItemRespArr;
    _Bool _bJustUploadDataWithoutMD5Hit;
    id <RecordUploadCDNMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bJustUploadDataWithoutMD5Hit; // @synthesize bJustUploadDataWithoutMD5Hit=_bJustUploadDataWithoutMD5Hit;
@property(retain, nonatomic) CMessageWrap *m_curMsgWrap; // @synthesize m_curMsgWrap;
@property(nonatomic) __weak id <RecordUploadCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (unsigned long long)remainUploadSize:(id)arg1 exceptTask:(id)arg2;
- (void)calTotalUploadSize;
- (void)convertUploadBigFileRecordData:(id)arg1;
- (id)exportCurMsg;
- (_Bool)UploadCurAppMsg;
- (void)onBatchCheckBigFileUploadResult:(_Bool)arg1 respList:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)checkBigFileTaskAndUpload;
- (void)OnBufferUploadOK:(id)arg1 ClientAppDataId:(id)arg2 MediaId:(id)arg3;
- (void)OnBufferUploadFail:(id)arg1 ClientAppDataId:(id)arg2;
- (void)OnRecordUploadTask:(id)arg1 progressChange:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnRecordUploadTaskFinish:(id)arg1 uploadTask:(id)arg2;
- (void)OnRecordUploadTaskFail:(id)arg1;
- (void)makeMessageUploadFail;
- (void)OnSetCdnDnsInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleSendMsgResp:(id)arg1;
- (void)HandleBatchTransCDNResp:(id)arg1;
- (void)TryNextMsgWrap;
- (void)SendMsgOK:(id)arg1;
- (void)SendMsgFail;
- (_Bool)SendCurAppMsg;
- (void)clearLocalProperty:(id)arg1;
- (_Bool)handleFinishRecordUpload;
- (void)RemoveMsgWrap:(id)arg1;
- (void)sendBatchTranCDNItem;
- (void)BatchTransCDNItemForFav;
- (id)genBatchTransItemArrayWithDataList:(id)arg1 withClientStrId:(id)arg2;
- (void)BatchTransCDNItemForMsg;
- (void)AddUploadTaskForDataList:(id)arg1;
- (void)UploadRecordData;
- (void)CheckCDNUploadMsgQueue;
- (void)StopCurUpload;
- (void)setDelegate:(id)arg1;
- (_Bool)isUploadSameMsg:(id)arg1 compare:(id)arg2;
- (void)StopUploadRecordMsgByUsername:(id)arg1;
- (void)StopUploadRecordMsg:(id)arg1;
- (void)StartUploadRecordMsg:(id)arg1;
- (_Bool)IsRecordMsgUploading:(id)arg1;
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

