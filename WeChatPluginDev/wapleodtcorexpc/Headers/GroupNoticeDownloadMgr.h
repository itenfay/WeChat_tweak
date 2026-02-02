//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GroupNoticeItemDownloader, NSMutableArray, NSString;

@interface GroupNoticeDownloadMgr
{
    NSMutableArray *m_downloadItemQueue;
    GroupNoticeItemDownloader *m_downloader;
    _Bool m_isDownloading;
}

- (void).cxx_destruct;
- (void)onGroupNoticeDownloadData:(id)arg1 retCode:(int)arg2;
- (void)onGroupNoticeDownloadData:(id)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)onGroupNoticeDownloadItem:(id)arg1 retCode:(int)arg2;
- (void)tryDownloadItem;
- (_Bool)isDownloadingData:(id)arg1;
- (void)stopAllDownload;
- (void)stopDownloadItem:(id)arg1;
- (void)startDownloadItem:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

