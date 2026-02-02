//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CDownloadVoiceMgr, DownloadVoiceCDNMgr, NSMutableSet, NSString;

@interface VoiceMsgDownloader
{
    CDownloadVoiceMgr *_cgiDownloader;
    DownloadVoiceCDNMgr *_cdnDownloader;
    NSMutableSet *_downloadCdnFailSvrId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *downloadCdnFailSvrId; // @synthesize downloadCdnFailSvrId=_downloadCdnFailSvrId;
@property(retain, nonatomic) DownloadVoiceCDNMgr *cdnDownloader; // @synthesize cdnDownloader=_cdnDownloader;
@property(retain, nonatomic) CDownloadVoiceMgr *cgiDownloader; // @synthesize cgiDownloader=_cgiDownloader;
- (void)onNewSyncAddMessage:(id)arg1;
- (void)onCDNDownloadFail:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 CreateTime:(unsigned int)arg4 Xml:(id)arg5;
- (void)OnRecvData:(id)arg1 MesLocalID:(unsigned int)arg2 n64MesSvrID:(long long)arg3 CreateTime:(unsigned int)arg4 VoiceTime:(unsigned int)arg5 Offset:(unsigned int)arg6 Len:(unsigned int)arg7 Data:(id)arg8 EndFlag:(unsigned int)arg9 ErrNo:(unsigned int)arg10;
- (_Bool)updateMessageToDB:(id)arg1;
- (_Bool)getMessageFromDB:(id)arg1;
- (void)downloadMsg:(id)arg1;
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

