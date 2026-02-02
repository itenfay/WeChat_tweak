//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesDownloader, FavoritesItem, FavoritesItemDB, NSMutableArray, NSMutableSet, NSString;
@protocol FavoritesDownloadMgrDelegate;

@interface FavoritesDownloadMgr
{
    NSMutableArray *_downloadingQueue;
    NSMutableArray *_failQueue;
    NSMutableArray *_activeQueue;
    NSMutableSet *_downloadSet;
    FavoritesItem *_priorItem;
    _Bool _isDownloading;
    FavoritesItemDB *_favItemDB;
    FavoritesDownloader *_favDownloader;
    id <FavoritesDownloadMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavoritesDownloadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ReachabilityChange:(unsigned int)arg1;
- (_Bool)checkAsyncUploadingDataInDataList:(id)arg1 NeedFix:(_Bool)arg2;
- (_Bool)checkAsyncUploadingDataInItem:(id)arg1;
- (void)onDownloadFavItem:(id)arg1 RetCode:(int)arg2;
- (id)getDownloadingItemList;
- (void)changeToNoWifi;
- (void)stopDownloadAllFavItem;
- (void)TryStartDownload;
- (_Bool)realDelDownloadItem:(id)arg1;
- (void)realAddFavItem:(id)arg1 IsPriority:(_Bool)arg2;
- (void)realStartDownloadItem:(id)arg1 IsPriority:(_Bool)arg2;
- (_Bool)delDownloadItem:(id)arg1;
- (void)startDownloadItem:(id)arg1 IsPriority:(_Bool)arg2;
- (_Bool)loadFailedQueue;
- (_Bool)loadDownloadingQueue;
- (void)initDB:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

