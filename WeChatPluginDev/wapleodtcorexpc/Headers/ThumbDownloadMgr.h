//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnTaskInfo, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ThumbDownloadMgr : NSObject
{
    NSMutableArray *m_arrQueue;
    CdnTaskInfo *m_oCurTaskInfo;
    NSObject<OS_dispatch_queue> *m_thumbDownloadQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CdnTaskInfo *m_oCurTaskInfo; // @synthesize m_oCurTaskInfo;
- (void)OnCdnDownload:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)DownloadFail:(int)arg1;
- (void)realStopDownloadThumbByUsrName:(id)arg1;
- (void)StopDownloadThumbByUsrName:(id)arg1;
- (void)realStopDownloadThumb:(id)arg1;
- (void)StopDownloadThumb:(id)arg1;
- (void)StopCurDownload;
- (void)realStartDownloadThumb:(id)arg1 isPrior:(_Bool)arg2;
- (void)StartDownloadThumb:(id)arg1 isPrior:(_Bool)arg2;
- (_Bool)realIsDownloadingThumb:(id)arg1;
- (_Bool)IsDownloadingThumb:(id)arg1;
- (void)CheckQueue;
- (id)init;

@end

