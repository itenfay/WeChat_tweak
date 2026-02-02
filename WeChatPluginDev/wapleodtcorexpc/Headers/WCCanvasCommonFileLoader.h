//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary;

@interface WCCanvasCommonFileLoader
{
    NSMutableDictionary *_requestObjectDict;
    NSMutableArray *_waittingRequestObjectQueue;
    NSMutableArray *_downloadingRequestObjectQueue;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (id)fetchCommonFileDownloadTmpPath;
+ (id)fetchCommonFileBasePath;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *downloadingRequestObjectQueue; // @synthesize downloadingRequestObjectQueue=_downloadingRequestObjectQueue;
@property(retain, nonatomic) NSMutableArray *waittingRequestObjectQueue; // @synthesize waittingRequestObjectQueue=_waittingRequestObjectQueue;
@property(retain, nonatomic) NSMutableDictionary *requestObjectDict; // @synthesize requestObjectDict=_requestObjectDict;
- (void)idKeyReportForKey:(unsigned int)arg1;
- (id)generateRequestObjectWithUrl:(id)arg1 fileMD5:(id)arg2 filePath:(id)arg3 requestKey:(id)arg4;
- (id)generateFileKeyWithUrl:(id)arg1 fileMD5:(id)arg2;
- (id)generateFileTempPathWithUrl:(id)arg1 fileMD5:(id)arg2;
- (id)generateFilePathWithUrl:(id)arg1 fileMD5:(id)arg2;
- (void)verifyDownloadFileWithUrl:(id)arg1 fileMD5:(id)arg2 tmpPath:(id)arg3;
- (void)OnCdnDownload:(id)arg1;
- (void)downloadDoneForUrl:(id)arg1 fileMD5:(id)arg2;
- (void)resumeToDownloadNextRequest;
- (void)retryToDownloadForRequestObject:(id)arg1;
- (void)loadCommonFileWithUrl:(id)arg1 fileMD5:(id)arg2;
- (id)fetchCommonFilePathWithUrl:(id)arg1 fileMD5:(id)arg2;
- (void)stopAllDownloads;
- (void)dealloc;
- (id)init;

@end

