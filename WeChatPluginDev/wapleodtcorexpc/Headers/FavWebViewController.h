//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavDataItemWrap, FavWebCacheContext, FavWebCacheScriptMessageHandler, FavoritesItem, NSDictionary, NSString;

@interface FavWebViewController
{
    FavoritesItem *m_favItem;
    FavDataItemWrap *m_favDataItemWrap;
    unsigned int m_dataFavId;
    _Bool m_hasAddHandler;
    _Bool m_hasCached;
    _Bool m_hasLoaded;
    FavWebCacheContext *m_cacheContext;
    NSDictionary *m_htmlAndFileUrlResult;
    FavWebCacheScriptMessageHandler *m_scriptMessageHandler;
}

- (void).cxx_destruct;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)cacheWebContent;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (void)onWebViewEditTag;
- (void)onWebViewDelete;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFavDataWrap:(id)arg1;
- (id)initWithFavoritesItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

