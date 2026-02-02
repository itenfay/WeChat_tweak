//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCMicroMerchantFoldMgr, WCPreloadProvider;
@protocol WCPreloadLogicDelegate;

@interface WCPreloadLogicMgr : NSObject
{
    NSMutableArray *m_downloadItemID;
    unsigned int m_lastRefreshTime;
    id <WCPreloadLogicDelegate> m_delegate;
    WCPreloadProvider *m_dataProvider;
    unsigned int m_preloadCount;
    _Bool m_enablePreload;
    NSMutableArray *m_waitDownloadItem;
    NSMutableSet *m_setPreDownloadItemIDForBigImage;
    NSMutableSet *m_setPreDownloadItemIDForSmallImage;
    NSMutableDictionary *m_dicPrelDownloadItemNetType;
    NSMutableArray *m_videoDownloadItemID;
    NSMutableArray *m_videoWaitDownloadItem;
    unsigned int m_preloadSucFeedCountForSmallImage;
    unsigned int m_viewNewFeedCount;
    unsigned int m_preloadSucImageCountForBigImage;
    unsigned int m_viewNewBigImageCount;
    unsigned int m_preloadBigImageCount;
    unsigned long long m_latestID;
    NSMutableSet *m_setFirstClickItemIdForLogBigImage;
    NSMutableDictionary *m_dicPreDownloadItemIdToSucPreloadCnt;
    NSMutableDictionary *m_dicPreDownloadItemIdToSucPreloadPicIndexArrayStr;
    WCMicroMerchantFoldMgr *_microMerchantFoldMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMicroMerchantFoldMgr *microMerchantFoldMgr; // @synthesize microMerchantFoldMgr=_microMerchantFoldMgr;
@property(nonatomic) __weak id <WCPreloadLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)setupMicroMerchantFoldInfoWithTimelineRequest:(id)arg1;
- (void)predictVideoSourceWithDataItems:(id)arg1;
- (void)downloadBatchThumb:(id)arg1;
- (void)downloadMedia:(id)arg1 downloadType:(long long)arg2 dataItem:(id)arg3;
- (void)downloadMedia:(id)arg1 downloadType:(long long)arg2;
- (_Bool)isInPreloadAroundImgLimitTime;
- (void)tryLogPreloadImageResult;
- (void)addBigImageCountForViewNewBigImage;
- (void)addBigImageCountForPreloadSuc;
- (void)addFeedCountForViewNewFeeds;
- (void)addFeedCountForPreloadSmallImageSuc;
- (_Bool)isInPreloadLimitTime;
- (unsigned int)getCheckUpdateTimeSecs;
- (_Bool)couldPreloadVideo;
- (_Bool)couldPreloadImage;
- (_Bool)couldPreloadBigImage;
- (_Bool)couldPreloadSmallImage;
- (void)onDataUpdatedForPreload:(id)arg1 andData:(id)arg2;
- (void)onPreloadPageRequestPrepared:(id)arg1;
- (id)getPreloadNetType:(id)arg1;
- (void)removePreloadDataItemForBigImage:(id)arg1;
- (void)removePreloadDataItemForSmallImage:(id)arg1;
- (void)removeFirstClickDataItemForPreloadBigImage:(id)arg1;
- (void)removeSucPreloadInfoForItemId:(id)arg1;
- (id)getpreloadPicIndexArrayStrForItemId:(id)arg1;
- (int)getPreloadCntForItemId:(id)arg1;
- (void)tryIncreaseSucPreloadCntForItemId:(id)arg1 mediaItem:(id)arg2;
- (void)addFirstClickDataItemForPreloadBigImage:(id)arg1;
- (_Bool)hasFirstClickDataItemForPreloadBigImage:(id)arg1;
- (_Bool)hasPreloadDataItemForBigImage:(id)arg1;
- (_Bool)hasPreloadDataItemForSmallImage:(id)arg1;
- (void)preloadDataList:(id)arg1;
- (void)downloadVideos;
- (void)downloadImages;
- (int)getCurHistoryClickRatioLimit;
- (unsigned int)getNetworkType;
- (void)tryPreloadData;
- (void)handleLatestWCObjectChanged:(id)arg1;
- (void)updateStatusForPreload:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

