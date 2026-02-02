//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnTaskInfo, NSMutableArray;
@protocol OpenDownloadCDNMgrDelegate;

@interface OpenDownloadCDNMgr : NSObject
{
    NSMutableArray *_arrFileInfo;
    CdnTaskInfo *_curTaskInfo;
    _Bool _bLargeFile;
    id <OpenDownloadCDNMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bLargeFile; // @synthesize bLargeFile=_bLargeFile;
@property(nonatomic) __weak id <OpenDownloadCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownloadNotifyPeerUploadFinish:(id)arg1 uploadFinish:(_Bool)arg2 fileSize:(unsigned long long)arg3;
- (void)OnSetCdnDnsInfo;
- (void)localCacheDownloadSuccess;
- (_Bool)CheckForLocalCache:(id)arg1;
- (_Bool)preCheckIfMsgWrapCanQuickDownload:(id)arg1;
- (void)LoadCacheData;
- (void)moveFileCacheToCommomCache;
- (void)addCommmonCache:(id)arg1;
- (id)GetFileCachePath;
- (id)getAppAttachFilePath:(id)arg1;
- (void)StopDownloadByUsr:(id)arg1;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2 needNotify:(_Bool)arg3;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)StopCurDownload;
- (_Bool)StartDownload:(id)arg1 MsgWrap:(id)arg2 Silent:(_Bool)arg3 autoDownload:(_Bool)arg4 behavior:(long long)arg5;
- (_Bool)StartDownload:(id)arg1 MsgWrap:(id)arg2 Silent:(_Bool)arg3 autoDownload:(_Bool)arg4;
- (_Bool)StartDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)DownloadFail:(int)arg1 expired:(_Bool)arg2;
- (void)DownloadOk;
- (void)modMsgByBitSetInMainQueue:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)CheckQueue;
- (void)Pop;
- (id)GetTop;
- (void)DelTaskInDownloadQueue:(id)arg1;
- (_Bool)IsCurrentDownloading:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)noQuotaDownloading:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)InDownloading:(id)arg1 MsgWrap:(id)arg2;
- (id)init;

@end

