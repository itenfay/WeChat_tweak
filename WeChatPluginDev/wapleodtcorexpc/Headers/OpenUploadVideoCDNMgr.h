//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CdnTaskInfo, FIFOFileQueue, NSMutableArray;
@protocol OpenUploadCDNMgrDelegate;

@interface OpenUploadVideoCDNMgr
{
    FIFOFileQueue *_fileInfoQueue;
    NSMutableArray *m_arrDeletingItems;
    unsigned int _curEventId;
    CdnTaskInfo *_curTaskInfo;
    _Bool _bJustUploadDataWithoutMD5Hit;
    id <OpenUploadCDNMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bJustUploadDataWithoutMD5Hit; // @synthesize bJustUploadDataWithoutMD5Hit=_bJustUploadDataWithoutMD5Hit;
@property(nonatomic) __weak id <OpenUploadCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (_Bool)CreateCurUploadEvent:(unsigned int)arg1;
- (void)StopUploadByChatName:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)StopCurUpload;
- (void)StartUpload:(id)arg1 MsgWrap:(id)arg2 Scene:(unsigned int)arg3;
- (void)ClearEventID;
- (void)UploadFail:(int)arg1;
- (void)UploadOk:(long long)arg1 aeskey:(id)arg2;
- (void)CheckQueue;
- (void)InitQueue;
- (void)dealloc;
- (id)init;

@end

