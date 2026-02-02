//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDiskUsageScaner, MMUIScrollView, NSArray, NSMutableArray, NSString, StorageUsageDetailView, StorageUsageLoadingView, StorageUsageSummaryModel, StorageUsageSummaryView, UILabel, UIView;

@interface NewStorageUsageViewController
{
    MMUIScrollView *m_backgroundView;
    UIView *m_headerView;
    StorageUsageLoadingView *m_loadingView;
    UIView *m_resultView;
    StorageUsageSummaryView *m_summaryView;
    StorageUsageDetailView *m_detailView;
    StorageUsageDetailView *m_chatLogDetailView;
    NSMutableArray *m_storedDetailViews;
    MMDiskUsageScaner *m_usageScanner;
    StorageUsageSummaryModel *m_summaryModel;
    UILabel *m_statmentLabel;
    _Bool m_hasScanned;
    _Bool m_isLoading;
    unsigned long long m_cleanSize;
    unsigned long long m_chatlogDBSize;
    double _startScanTime;
    NSMutableArray *_cacheClassifycation;
    NSArray *_deepCleanArray;
}

- (void).cxx_destruct;
@property(retain) NSArray *deepCleanArray; // @synthesize deepCleanArray=_deepCleanArray;
@property(retain) NSMutableArray *cacheClassifycation; // @synthesize cacheClassifycation=_cacheClassifycation;
@property(nonatomic) double startScanTime; // @synthesize startScanTime=_startScanTime;
- (void)onStorageDeepClean:(unsigned long long)arg1;
- (void)onStorageCacheClean:(unsigned long long)arg1;
- (void)onChatLogDataMgrCleanSize:(unsigned long long)arg1;
- (void)onDeepCleanButtonClicked:(id)arg1;
- (void)onClearCacheButtonClicked:(id)arg1;
- (void)onManageChatLogButtonClicked:(id)arg1;
- (void)onReturn;
- (void)onDiskUsageScanCancel;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (void)onDiskUsageScanStart;
- (void)onDiskUsageScanProgress:(float)arg1 isAvailabled:(_Bool)arg2;
- (void)scanDiskBeginUseCache:(_Bool)arg1;
- (void)loadingResultViewWithProgress:(float)arg1 isAvailabled:(_Bool)arg2;
- (void)layoutResultView;
- (void)showResultView;
- (void)layoutLoadingView;
- (void)showLoadingView;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)onLongPressNavBar;
- (id)navigationBarBackgroundColor;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

