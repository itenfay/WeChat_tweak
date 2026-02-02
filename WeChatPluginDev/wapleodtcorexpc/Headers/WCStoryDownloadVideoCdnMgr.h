//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSMutableDictionary, WCStoryDownloadTaskInfo;

@interface WCStoryDownloadVideoCdnMgr
{
    unsigned int _lastPreloadChatRoomTime;
    NSMutableDictionary *_dicIplist;
    WCStoryDownloadTaskInfo *_curTaskInfo;
    NSMutableArray *_arrPreloadQueue;
    NSMutableDictionary *_dicPreloadingTask;
    NSArray *_arrBadNetworkPreload;
    NSArray *_arrSmoothNetworkPreload;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastPreloadChatRoomTime; // @synthesize lastPreloadChatRoomTime=_lastPreloadChatRoomTime;
@property(retain, nonatomic) NSArray *arrSmoothNetworkPreload; // @synthesize arrSmoothNetworkPreload=_arrSmoothNetworkPreload;
@property(retain, nonatomic) NSArray *arrBadNetworkPreload; // @synthesize arrBadNetworkPreload=_arrBadNetworkPreload;
@property(retain, nonatomic) NSMutableDictionary *dicPreloadingTask; // @synthesize dicPreloadingTask=_dicPreloadingTask;
@property(retain, nonatomic) NSMutableArray *arrPreloadQueue; // @synthesize arrPreloadQueue=_arrPreloadQueue;
@property(retain, nonatomic) WCStoryDownloadTaskInfo *curTaskInfo; // @synthesize curTaskInfo=_curTaskInfo;
@property(retain, nonatomic) NSMutableDictionary *dicIplist; // @synthesize dicIplist=_dicIplist;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)OnCdnVideoPreloadEnd:(id)arg1;
- (void)videoSourceChange:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)report16664WithPreloadTaskInfo:(id)arg1;
- (void)realStartDownload:(id)arg1;
- (void)downloadTask:(id)arg1;
- (_Bool)IsStreamDownloadingWithMediaItem:(id)arg1;
- (_Bool)StopDownloadTaskWithClientId:(id)arg1 downloadTaskInfo:(id *)arg2;
- (_Bool)StopVideoDownloadWithMediaWrap:(id)arg1 downloadTaskInfo:(id *)arg2;
- (void)StartVideoStreamDownloadWithMediaWrap:(id)arg1;
- (void)CheckPreloadQueue;
- (void)StartPreloadSNSEntranceWithItems:(id)arg1;
- (void)StartPreloadChatRoomVideoWithMediaItem:(id)arg1;
- (void)StartVideoPreloadWithItems:(id)arg1;
- (void)cleanTaskForStreamTaksInfo:(id)arg1;
- (void)stopNotNeedPreloadTasks:(id)arg1;
- (_Bool)IsNetWorkSmooth;
- (_Bool)IsTaskNeedPreload:(id)arg1;
- (id)generateDownloadTaskInfoWith:(id)arg1;
- (id)init;

@end

