//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonHybridDownloadProxy, NSMutableArray, NSString, OpenInfo;

@interface OpenDownloadMgr
{
    NSMutableArray *m_queDownload;
    unsigned int m_uiCurEventID;
    OpenInfo *m_oCurDownloadInfo;
    EmoticonHybridDownloadProxy *m_emoticonDownloadProxy;
}

- (void).cxx_destruct;
- (void)onEmoticonDownloadingMd5:(id)arg1 withUserInfo:(id)arg2 partLen:(unsigned long long)arg3 totalLen:(unsigned long long)arg4;
- (void)onEmoticonDownloadMd5Failed:(id)arg1 withUserInfo:(id)arg2;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2 withUserInfo:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)DownloadFinishedWithTempFilePath:(id)arg1;
- (void)DownloadOK:(id)arg1;
- (void)DownloadFail:(unsigned int)arg1 expired:(_Bool)arg2;
- (void)DownloadFail:(unsigned int)arg1;
- (_Bool)CreateDownloadEvent;
- (void)CheckQueue;
- (void)StopDownloadByUsr:(id)arg1;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3;
- (_Bool)StartDownload:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)StartDownload:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3 AttachDataSize:(unsigned int)arg4 AttachFileExt:(id)arg5;
- (_Bool)InDownloading:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)InDownloading:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3;
- (void)Pop;
- (id)GetTop;
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

