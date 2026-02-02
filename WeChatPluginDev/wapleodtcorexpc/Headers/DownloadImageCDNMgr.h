//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnTaskInfo, NSMutableArray, NSString;

@interface DownloadImageCDNMgr : NSObject
{
    NSMutableArray *m_arrQueue;
    CdnTaskInfo *m_oCurTaskInfo;
    long long _m_type;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_type; // @synthesize m_type=_m_type;
@property(retain, nonatomic) CdnTaskInfo *m_oCurTaskInfo; // @synthesize m_oCurTaskInfo;
- (void)onRoamBackupPackageServiceLoadMediaResult:(id)arg1 errorCode:(unsigned int)arg2 dataID:(id)arg3;
- (void)MoveWaittingTasks:(id)arg1 ToSilentQueue:(id)arg2;
- (void)OnCdnDownloadSucc:(id)arg1;
- (void)OnCdnDownloadFail:(id)arg1;
- (void)convertWXAMToJPG:(id)arg1 nsFilePath:(id)arg2 nsTempPath:(id)arg3 oDownloadInfo:(id)arg4;
- (void)OnSetCdnDnsInfo;
- (id)GetTempFilePath:(id)arg1;
- (id)GetFilePath:(id)arg1 isHd:(_Bool)arg2;
- (void)DownloadOK;
- (void)saveImageToAlbum;
- (void)DownloadFail:(int)arg1 Expired:(_Bool)arg2;
- (void)StopDownloadImageByUsrName:(id)arg1 FromDelMsg:(_Bool)arg2;
- (void)StopCurDownload;
- (void)StartDownloadByTaskInfo:(id)arg1;
- (void)StartDownloadImage:(id)arg1 HD:(_Bool)arg2 AutoDownload:(_Bool)arg3 SaveAlbum:(_Bool)arg4 Silent:(_Bool)arg5 behavior:(long long)arg6;
- (void)StartDownloadImage:(id)arg1 HD:(_Bool)arg2 AutoDownload:(_Bool)arg3 SaveAlbum:(_Bool)arg4 Silent:(_Bool)arg5;
- (void)StartDownloadImage:(id)arg1 HD:(_Bool)arg2 AutoDownload:(_Bool)arg3 SaveAlbum:(_Bool)arg4;
- (void)StartDownloadImage:(id)arg1 HD:(_Bool)arg2 AutoDownload:(_Bool)arg3;
- (void)StartDownloadHDImageForSaveAlbum:(id)arg1;
- (_Bool)StopImageDownloadTaskWithMsg:(id)arg1 withNotify:(_Bool)arg2;
- (_Bool)StopImageDownloadTaskWithMsg:(id)arg1;
- (_Bool)isCurrentDownloading:(id)arg1;
- (_Bool)IsDownloading:(id)arg1;
- (_Bool)IsDownloadingHD:(id)arg1;
- (_Bool)downloadImageWithCdnInfo:(id)arg1;
- (struct C2CDownloadRequest)getDownloadRequestWithMsgWrap:(id)arg1;
- (void)CheckQueue;
- (id)getDownloadTypeName;
- (void)onDelayCallDownloadOK:(id)arg1;
- (_Bool)CheckForLocalCache:(id)arg1;
- (void)moveImageCacheDataToCommonCache;
- (void)LoadCacheData;
- (id)GetImageCachePath;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

