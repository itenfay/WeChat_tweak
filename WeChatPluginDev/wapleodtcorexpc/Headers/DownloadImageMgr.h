//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DownloadImageInfo, NSMutableArray;

@interface DownloadImageMgr
{
    NSMutableArray *m_arrQueue;
    DownloadImageInfo *m_oCurInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DownloadImageInfo *m_oCurInfo; // @synthesize m_oCurInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)DownloadFail:(int)arg1;
- (void)DownloadFail:(int)arg1 Expired:(_Bool)arg2;
- (void)HandleDownload:(id)arg1;
- (id)GetTempFilePath:(id)arg1;
- (id)GetFilePath:(id)arg1;
- (_Bool)StopImageDownloadTaskWithMsg:(id)arg1;
- (_Bool)IsDownloading:(id)arg1;
- (_Bool)CreateDownload;
- (_Bool)CreateImplGetImg:(id)arg1;
- (void)CheckQueue;
- (void)StopDownloadImage:(id)arg1;
- (void)StartDownloadImage:(id)arg1 HD:(_Bool)arg2;
- (void)RemoveInfoFromQueue:(id)arg1;
- (_Bool)CheckMsgIsInQueue:(id)arg1;
- (void)StopCurrentDownload;
- (void)dealloc;
- (id)init;

@end

