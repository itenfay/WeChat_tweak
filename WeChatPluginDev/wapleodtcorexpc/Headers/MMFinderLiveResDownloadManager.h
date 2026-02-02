//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveResDownloader;

@interface MMFinderLiveResDownloadManager : NSObject
{
    MMFinderLiveResDownloader *_downloadManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveResDownloader *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void)extractExtraDataAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveExtraData:(id)arg1 forFileAtPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)realStart:(id)arg1 downloadUrlMd5:(id)arg2 fileMD5:(id)arg3 pathManager:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)checkIsFileExist:(id)arg1 enforceIntegrityCheck:(_Bool)arg2 pathManager:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)start:(id)arg1 fileMD5:(id)arg2 enforceIntegrityCheck:(_Bool)arg3 pathManager:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) unsigned long long pendingTaskCount;
- (id)init;

@end

