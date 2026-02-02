//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock;
@protocol DownloadVoiceDelegate;

@interface CDownloadVoiceMgr
{
    NSRecursiveLock *m_oLock;
    unsigned int m_uiCurDownloadID;
    id <DownloadVoiceDelegate> m_delNotifyToReceiver;
    unsigned long long m_uiQueueCount;
    _Bool _canAutoDownload;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canAutoDownload; // @synthesize canAutoDownload=_canAutoDownload;
@property(nonatomic) __weak id <DownloadVoiceDelegate> m_delNotifyToReceiver; // @synthesize m_delNotifyToReceiver;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock;
- (id)getPBPath;
- (long long)GetCountOfDownloadVoice;
- (_Bool)UpdateDownloadVoiceRetryCount:(unsigned int)arg1 byUserName:(id)arg2 localId:(unsigned int)arg3 voiceLen:(unsigned int)arg4 endFlag:(unsigned int)arg5;
- (_Bool)InsertDownloadVoice:(id)arg1;
- (id)GetOneDownloadVoice;
- (_Bool)DeleteDownloadVoiceByChatName:(id)arg1 localId:(unsigned int)arg2 voiceLength:(unsigned int)arg3 endFlag:(unsigned int)arg4;
- (_Bool)DeleteDownloadVoiceByChatName:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)IsExistInDownloadVoiceByChatName:(id)arg1 localId:(unsigned int)arg2 voiceLength:(unsigned int)arg3 endFlag:(unsigned int)arg4;
- (void)savePB:(id)arg1;
- (id)loadPB;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleDownloadError:(id)arg1;
- (void)PrepareForDownload:(id)arg1;
- (void)AddNewDownload:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 VoiceLen:(unsigned int)arg4 VoiceTime:(unsigned int)arg5 CreateTime:(unsigned int)arg6 EndFlag:(unsigned int)arg7 bufid:(unsigned long long)arg8;
- (void)OnSyncDownload:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 CreateTime:(unsigned int)arg4 Xml:(id)arg5 Voice:(id)arg6;
- (void)CheckDownloadQueue;
- (_Bool)readyToCheckDownloadQueue;
- (unsigned int)getInitStatus;
- (void)DeleteMsg:(id)arg1 LocalID:(unsigned int)arg2;
- (void)UpdateRetryCount:(id)arg1;
- (_Bool)IsInDownloadQueue:(id)arg1 LocalID:(unsigned int)arg2 VoiceLen:(unsigned int)arg3 EndFlag:(unsigned int)arg4;
- (void)Stop;
- (void)Start;
- (void)dealloc;
- (id)init;

@end

