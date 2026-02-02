//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSRecursiveLock, NSString, OrderedDictionary;

@interface CEmoticonDownloadMgr
{
    NSMutableDictionary *m_downloadCgiDic;
    OrderedDictionary *m_notDownloadQueue;
    NSMutableDictionary *m_downloadInfoDic;
    unsigned int m_downloadCgiMaxCount;
    NSRecursiveLock *_m_oLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
- (void)onEmoticonDownloadMd5Failed:(id)arg1 withUserInfo:(id)arg2;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2 withUserInfo:(id)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)stopDownloadByChatName:(id)arg1 n64SvrID:(long long)arg2;
- (void)stopDownloadByChatName:(id)arg1;
- (void)resumeDownload;
- (void)startDownload:(id)arg1 highPriority:(_Bool)arg2;
- (void)downloadOK:(id)arg1;
- (void)downloadFail:(id)arg1;
- (_Bool)checkDownload;
- (id)addToDownloadInfoDicWithMsgWrap:(id)arg1;
- (void)deleteMsgForChat:(id)arg1 n64SvrID:(long long)arg2;
- (id)downloadInfoForChat:(id)arg1 n64SvrID:(long long)arg2;
- (void)updateDownloadCgiMaxCount;
- (_Bool)IsMsgInDownloadQueue:(id)arg1 n64SvrID:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

