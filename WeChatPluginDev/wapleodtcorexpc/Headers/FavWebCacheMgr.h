//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavWebCacheContext, FavWebCacheDownloadFileInfo, FavWebCacheScriptMessageHandler, FavoritesItem, MMTimer, NSMutableArray, NSMutableCharacterSet, NSMutableSet, NSString, WKWebView;

@interface FavWebCacheMgr
{
    WKWebView *m_webView;
    NSMutableArray *m_loadingQueue;
    MMTimer *m_cacheWatchDog;
    _Bool m_bUpdate;
    _Bool m_webviewEnable;
    _Bool m_htmlLoadComplete;
    _Bool m_ajaxInjectComplete;
    NSMutableSet *m_processKeys;
    NSMutableCharacterSet *m_urlCharacterSet;
    NSString *m_userAgent;
    _Bool m_bLoading;
    unsigned int m_cacheSize;
    unsigned int m_cacheFileNum;
    unsigned long long m_totalCacheSize;
    NSMutableSet *m_currentDowloadFiles;
    FavWebCacheDownloadFileInfo *m_downloadFileInfo;
    FavoritesItem *m_currentItem;
    FavWebCacheContext *m_cacheContext;
    FavWebCacheScriptMessageHandler *m_scriptMessageHandler;
}

- (void).cxx_destruct;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)downloadFinish:(id)arg1;
- (void)processDownloadData:(id)arg1 mimeType:(id)arg2 url:(id)arg3;
- (void)urlSessionDownload:(id)arg1;
- (void)cancelWebDownload;
- (void)webviewDownload:(id)arg1;
- (void)startDownloadFiles;
- (void)replaceResourceAddr:(id)arg1 with:(id)arg2 inContent:(id)arg3;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>>)stringReplace:(const void *)arg1 src:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg2 des:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg3;
- (id)protectString:(id)arg1;
- (id)genHeadScript;
- (_Bool)storeHtmlFile;
- (id)checkCssUrlIn:(id)arg1;
- (id)getUrlof:(id)arg1 baseUrl:(id)arg2;
- (_Bool)processSources:(id)arg1 isMedia:(_Bool)arg2 inContent:(id)arg3 withBaseUrl:(id)arg4;
- (_Bool)processHtmlContentAndFileUrlResult:(id)arg1 baseUrl:(id)arg2;
- (void)startCacheWebContent;
- (void)saveData:(id)arg1 atPath:(id)arg2;
- (_Bool)saveWebData:(id)arg1 mimeType:(id)arg2 url:(id)arg3;
- (void)reportCacheResult:(_Bool)arg1;
- (void)webCacheFinish:(_Bool)arg1;
- (void)resetCacheWeb;
- (void)checkTotalCacheSize;
- (void)cancelCacheWeb;
- (void)startCacheWeb;
- (void)setCacheStatusForItem:(id)arg1;
- (void)cacheWebFavItem:(id)arg1 needClear:(_Bool)arg2;
- (void)cacheWebFavItem:(id)arg1;
- (void)cleanCache;
- (void)deleteWebCacheForItem:(id)arg1;
- (void)updateWebCacheForItem:(id)arg1 WithContext:(id)arg2 HtmlAndFileUrlResult:(id)arg3;
- (_Bool)webCacheEnableWithFavItem:(id)arg1;
- (_Bool)checkKey:(id)arg1;
- (id)genProcessKey;
- (void)loadOldWebFavItem:(id)arg1;
- (void)initWebView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

