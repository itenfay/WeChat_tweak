//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CdnTaskInfo, FIFOFileQueue, MsgDataDownloadLogic, NSMutableArray, NSMutableDictionary, NSString;
@protocol OpenUploadCDNMgrDelegate;

@interface OpenUploadCDNMgr
{
    FIFOFileQueue *_fileInfoQueue;
    NSMutableArray *m_arrDeletingItems;
    unsigned int _curEventId;
    CdnTaskInfo *_curTaskInfo;
    _Bool _bLargeFile;
    _Bool _bJustUploadDataWithoutMD5Hit;
    id <OpenUploadCDNMgrDelegate> m_delegate;
    NSString *_nsQueuePath;
    NSMutableDictionary *_msgInfoDict;
    NSMutableDictionary *_bigFileUploadRespDict;
    MsgDataDownloadLogic *_msgDownloadLogic;
}

+ (void)cacheFileToHardLink:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MsgDataDownloadLogic *msgDownloadLogic; // @synthesize msgDownloadLogic=_msgDownloadLogic;
@property(retain, nonatomic) NSMutableDictionary *bigFileUploadRespDict; // @synthesize bigFileUploadRespDict=_bigFileUploadRespDict;
@property(retain, nonatomic) NSMutableDictionary *msgInfoDict; // @synthesize msgInfoDict=_msgInfoDict;
@property(retain, nonatomic) NSString *nsQueuePath; // @synthesize nsQueuePath=_nsQueuePath;
@property(nonatomic) _Bool bJustUploadDataWithoutMD5Hit; // @synthesize bJustUploadDataWithoutMD5Hit=_bJustUploadDataWithoutMD5Hit;
@property(nonatomic) _Bool bLargeFile; // @synthesize bLargeFile=_bLargeFile;
@property(nonatomic) __weak id <OpenUploadCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadAnyFail:(id)arg1;
- (void)startDownloadFile;
- (void)realUploadAppAttach:(id)arg1;
- (void)startUploadAppAttach:(id)arg1;
- (void)onCheckAppAttachRet:(id)arg1 isExistInSvr:(_Bool)arg2 taskInfo:(id)arg3;
- (void)checkIfAppAttachExistInSvr:(id)arg1;
- (void)onCheckBigFileUploadResult:(_Bool)arg1 resp:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)checkBigFileUpload:(id)arg1 scene:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnUploadGetCdnFileID:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (_Bool)CreateCurUploadEvent:(_Bool)arg1 crc32:(unsigned int)arg2 useSafeCdn:(_Bool)arg3;
- (void)StopUploadByChatName:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)StopCurUpload;
- (void)onStartUploadRet:(id)arg1 success:(_Bool)arg2;
- (void)createStartAppMsgEvent:(id)arg1;
- (void)StartUpload:(id)arg1 MsgWrap:(id)arg2 Scene:(unsigned int)arg3;
- (void)ClearEventID;
- (void)UploadFail:(int)arg1 canRetry:(_Bool)arg2;
- (void)UploadFail:(int)arg1;
- (void)onAppmsgDataUploaded:(id)arg1;
- (void)onAppmsgSendSucc:(id)arg1;
- (void)sendDataUploadFinishCommand;
- (void)onAppmsgUploadProcessComplete:(id)arg1;
- (void)modAppmsg:(id)arg1 bitset:(int)arg2;
- (_Bool)checkNeedPreprocess:(id)arg1;
- (_Bool)tryStartFileMsgHitCheckWithFileInfo:(id)arg1;
- (void)CheckQueue;
- (void)removeUploadFinishBufferWithMsg:(id)arg1;
- (id)getUploadFinishBufferWithMsg:(id)arg1;
- (_Bool)isRealtimeUploadTimeout:(id)arg1;
- (void)InitQueue;
- (void)dealloc;
- (void)initData;
- (id)initWithQueuePath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

