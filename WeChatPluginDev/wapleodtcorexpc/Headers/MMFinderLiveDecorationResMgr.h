//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveResourceFetcherRootFlowAction, NSMutableSet, NSRecursiveLock, NSString;

@interface MMFinderLiveDecorationResMgr
{
    MMLiveResourceFetcherRootFlowAction *_downloader;
    NSMutableSet *_downloadKeyList;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableSet *downloadKeyList; // @synthesize downloadKeyList=_downloadKeyList;
@property(retain, nonatomic) MMLiveResourceFetcherRootFlowAction *downloader; // @synthesize downloader=_downloader;
- (void)p_downloadMaterialResource:(id)arg1;
- (_Bool)downloadMaterialResource:(id)arg1;
- (_Bool)isDownloading:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

