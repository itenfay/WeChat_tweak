//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonUploader, FIFOFileQueue, FileQueue, MessageCommonUploader, MsgDataDownloadLogic, NSMutableDictionary, NSString, OpenInfo;
@protocol OpenUploadMgrDelegate;

@interface OpenUploadMgr
{
    FIFOFileQueue *m_queUpload;
    unsigned int m_uiCurEventID;
    OpenInfo *m_oCurUploadInfo;
    _Bool m_bInitQueue;
    _Bool _isCheckingBigFile;
    id <OpenUploadMgrDelegate> m_delegate;
    MsgDataDownloadLogic *_msgDownloadLogic;
    EmoticonUploader *_emoticonUploader;
    MessageCommonUploader *_fileUploader;
    NSMutableDictionary *_msgInfoDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *msgInfoDict; // @synthesize msgInfoDict=_msgInfoDict;
@property(nonatomic) _Bool isCheckingBigFile; // @synthesize isCheckingBigFile=_isCheckingBigFile;
@property(retain, nonatomic) MessageCommonUploader *fileUploader; // @synthesize fileUploader=_fileUploader;
@property(retain, nonatomic) EmoticonUploader *emoticonUploader; // @synthesize emoticonUploader=_emoticonUploader;
@property(retain, nonatomic) MsgDataDownloadLogic *msgDownloadLogic; // @synthesize msgDownloadLogic=_msgDownloadLogic;
@property(retain, nonatomic) OpenInfo *m_oCurUploadInfo; // @synthesize m_oCurUploadInfo;
@property(retain, nonatomic) FileQueue *m_queUpload; // @synthesize m_queUpload;
@property(nonatomic) __weak id <OpenUploadMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (_Bool)isUploading;
- (void)messageUploaderProgress:(id)arg1 progress:(double)arg2;
- (void)messageUploaderFailure:(id)arg1 uploadId:(id)arg2;
- (void)messageUploaderSuccess:(id)arg1 result:(id)arg2;
- (void)createCommonUploader;
- (void)onEmoticonUploadFailWithUploadInfo:(id)arg1 reason:(unsigned long long)arg2 realMd5:(id)arg3;
- (void)onEmoticonUploadSuccessWithEmoji:(id)arg1 uploadInfo:(id)arg2;
- (void)OnMsgDownloadThumbReturn:(_Bool)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadAnyFail:(id)arg1;
- (void)startDownloadFile;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)UploadOK:(_Bool)arg1;
- (void)UploadFail:(int)arg1;
- (_Bool)CreateUploadAppAttach;
- (id)getCurrentMsgData;
- (_Bool)createEmoticonUploader;
- (_Bool)CreateCheckMd5Upload;
- (_Bool)CreateSendWithAppMsg:(id)arg1 md5:(id)arg2 bigFileSignature:(id)arg3;
- (id)CreateAppMsgWithMsgWrap:(id)arg1;
- (_Bool)CreateSendAppMsg;
- (_Bool)CreateUploadEvent;
- (_Bool)checkNeedPreprocess:(id)arg1;
- (void)CheckQueue;
- (void)stopCurrentUpload;
- (void)StopUploadByChatName:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)onStartUploadRet:(id)arg1 success:(_Bool)arg2;
- (void)createStartAppMsgEvent:(id)arg1;
- (void)StartUpload:(id)arg1 MsgWrap:(id)arg2 Scene:(unsigned int)arg3;
- (void)ClearEventID;
- (void)InitQueue;
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

