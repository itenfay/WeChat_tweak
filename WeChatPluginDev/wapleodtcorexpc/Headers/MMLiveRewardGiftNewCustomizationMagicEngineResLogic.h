//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveResDownloadManager, NSMutableDictionary;

@interface MMLiveRewardGiftNewCustomizationMagicEngineResLogic : NSObject
{
    CDUnknownBlockType _loadStateChangeCallback;
    MMFinderLiveResDownloadManager *_downloadMgr;
    NSMutableDictionary *_loadTaskDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *loadTaskDict; // @synthesize loadTaskDict=_loadTaskDict;
@property(retain, nonatomic) MMFinderLiveResDownloadManager *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(copy, nonatomic) CDUnknownBlockType loadStateChangeCallback; // @synthesize loadStateChangeCallback=_loadStateChangeCallback;
- (id)getDataWithUpdateMagicResourcesSuccessTag:(long long)arg1;
- (long long)getUpdateMagicResourcesSuccessTagFromData:(id)arg1;
- (_Bool)checkUpdateResultNeedReDownLoadSrc:(long long)arg1;
- (_Bool)checkUpdateResultNeedRecordTag:(long long)arg1;
- (void)updateMagicResourcesIfNeededWithZipPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endLoadTask:(id)arg1 withResult:(unsigned long long)arg2 path:(id)arg3;
- (void)addLoadTask:(id)arg1;
- (void)onTask:(id)arg1 loadSuccessWithPath:(id)arg2 updateLoadCompletion:(CDUnknownBlockType)arg3;
- (void)onTask:(id)arg1 downLoadCompleted:(_Bool)arg2 resUrl:(id)arg3 downLoadUrlHash:(_Bool)arg4 plugin:(id)arg5;
- (void)startDownload:(id)arg1 plugin:(id)arg2;
- (void)startLoad:(id)arg1;
- (void)loadGiftResForURL:(id)arg1 productId:(id)arg2 fileMD5:(id)arg3 enforceIntegrityCheck:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;

@end

