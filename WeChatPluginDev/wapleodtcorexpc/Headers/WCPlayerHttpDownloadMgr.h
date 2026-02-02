//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCPlayerHttpDownloadMgr
{
    int _videoPreloadQueueMaxCount;
    unsigned int _maxHttpConcurrent;
    NSMutableArray *_preloadingArray;
    NSMutableArray *_preloadQueue;
    NSMutableDictionary *_dicMediaTaskInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int maxHttpConcurrent; // @synthesize maxHttpConcurrent=_maxHttpConcurrent;
@property(nonatomic) int videoPreloadQueueMaxCount; // @synthesize videoPreloadQueueMaxCount=_videoPreloadQueueMaxCount;
@property(retain, nonatomic) NSMutableDictionary *dicMediaTaskInfo; // @synthesize dicMediaTaskInfo=_dicMediaTaskInfo;
@property(retain, nonatomic) NSMutableArray *preloadQueue; // @synthesize preloadQueue=_preloadQueue;
@property(retain, nonatomic) NSMutableArray *preloadingArray; // @synthesize preloadingArray=_preloadingArray;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)onPreloadSuccessWithTaskInfo:(id)arg1;
- (void)CheckPreloadQueue;
- (void)StartOneLIFOPreloadWithMediaWrap:(id)arg1;
- (void)StartOnePreloadVideoWithMediaWrap:(id)arg1;
- (void)StartPreloadVideoWithMediaWraps:(id)arg1;
- (_Bool)IsPreloadingWithMediaWrap:(id)arg1;
- (_Bool)IsDownloadingWithMediaWrap:(id)arg1;
- (_Bool)IsPreloadingVideoUrl:(id)arg1;
- (_Bool)RemovePreLoadWithVideoUrl:(id)arg1;
- (_Bool)StopDownloadTaskWithUrl:(id)arg1 downloadTaskInfo:(id *)arg2;
- (_Bool)StopDownloadTaskWithMediaWrap:(id)arg1 downloadTaskInfo:(id *)arg2;
- (_Bool)realStartSnsVideoStreamingDownloadWithMediaWrap:(id)arg1 httpUrl:(id)arg2 filePath:(id)arg3 preloadPercent:(int)arg4 referer:(id)arg5;
- (_Bool)realStartHttpVideoStreamingDownloadWithIdentifier:(id)arg1 httpUrl:(id)arg2 fileType:(int)arg3 filePath:(id)arg4 preloadPercent:(int)arg5 Timeout:(unsigned int)arg6 referer:(id)arg7 blockSize:(unsigned int)arg8;
- (void)removePreloadTaskWithMediaWrap:(id)arg1;
- (void)eliminateMediaTaskInfos;
- (void)StartDownloadWithMediaWrap:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

