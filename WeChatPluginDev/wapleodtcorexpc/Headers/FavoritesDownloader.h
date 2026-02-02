//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesDownloadCDNInfo, FavoritesItem, NSMutableArray, NSString;
@protocol FavoritesDownloaderDelegate;

@interface FavoritesDownloader
{
    FavoritesItem *_favItem;
    id <FavoritesDownloaderDelegate> _delegate;
    NSMutableArray *_downloadInfoList;
    FavoritesDownloadCDNInfo *_downloadingInfo;
    _Bool _bPrior;
    int _downloadRetCode;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavoritesDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)tryStartNextData;
- (void)addDownloadItem:(id)arg1 withDataList:(id)arg2;
- (id)getItem;
- (void)stop;
- (void)run;
- (void)dealloc;
- (id)initWithFavoritesItem:(id)arg1 isPrior:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

