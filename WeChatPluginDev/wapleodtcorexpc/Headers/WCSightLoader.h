//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSCache, NSString, NSURLSession;

@interface WCSightLoader
{
    NSString *_sightCacheDirectory;
    NSURLSession *_session;
    NSCache *_observerCache;
    NSCache *_downloadItemCache;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *downloadItemCache; // @synthesize downloadItemCache=_downloadItemCache;
@property(retain, nonatomic) NSCache *observerCache; // @synthesize observerCache=_observerCache;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *sightCacheDirectory; // @synthesize sightCacheDirectory=_sightCacheDirectory;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (id)genMp4PathForUrl:(id)arg1;
- (id)md5ForURL:(id)arg1;
- (void)loadSightForUrl:(id)arg1 Observer:(id)arg2 atScene:(unsigned int)arg3 isPreload:(_Bool)arg4;
- (_Bool)saveSightAtPath:(id)arg1 forUrl:(id)arg2;
- (id)sightPathForUrl:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

