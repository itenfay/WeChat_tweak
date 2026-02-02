//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavCdnTaskInfo, NSMutableArray, NSMutableSet, NSString;

@interface FavCdnDownloadMgr
{
    NSMutableSet *m_set;
    NSMutableArray *m_queue;
    FavCdnTaskInfo *m_currentTask;
    _Bool m_downloading;
    _Bool m_needSwitchFileType;
}

- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)realStopDownloadFavMedia:(id)arg1;
- (void)StopDownloadFavMedia:(id)arg1;
- (void)tryNext;
- (void)realStartDownloadFavCdnData:(id)arg1 isPrior:(_Bool)arg2;
- (_Bool)IsDownloading:(id)arg1;
- (void)StartDownloadFavCdnData:(id)arg1 isPrior:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

