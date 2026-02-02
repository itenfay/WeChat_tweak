//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEmoticonUploadInfo, EmoticonUploader, NSMutableArray, NSString;

@interface CEmoticonUploadMgr
{
    unsigned int m_uiCurEventID;
    NSMutableArray *m_uploadInfoQueue;
    CEmoticonUploadInfo *m_oCurUploadInfo;
    EmoticonUploader *m_emoticonUploader;
}

- (void).cxx_destruct;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (void)onEmoticonUploadFailWithUploadInfo:(id)arg1 reason:(unsigned long long)arg2 realMd5:(id)arg3;
- (void)onEmoticonUploadSuccessWithEmoji:(id)arg1 uploadInfo:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)UploadOK:(_Bool)arg1;
- (void)UploadFail;
- (_Bool)StartCdnUpload;
- (_Bool)CreateUploadEvent:(id)arg1;
- (void)CheckUpload;
- (void)StopUploadByChatName:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)StartUpload:(id)arg1;
- (_Bool)InsertMessageToUploadQueue:(id)arg1;
- (void)DeleteUploadInfosWithUserName:(id)arg1;
- (void)DeleteUploadInfoWithMsg:(id)arg1;
- (_Bool)IsMsgInUploadQueue:(id)arg1;
- (void)ClearCurUpload;
- (void)ClearEventID;
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

