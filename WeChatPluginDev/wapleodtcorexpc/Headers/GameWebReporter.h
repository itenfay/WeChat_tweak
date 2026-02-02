//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameWebViewTimeRecord, MMWebViewController, NSDictionary, NSMutableDictionary, NSString;

@interface GameWebReporter
{
    GameWebViewTimeRecord *_webViewTimeRecord;
    MMWebViewController *_webViewController;
    NSString *_url;
    NSString *_pageKey;
    NSString *_wepkgVersion;
    NSString *_jsCommonLibVersion;
    unsigned long long _renderFinsihTimestampMills;
    _Bool _isManualLoad;
    _Bool _isPageCache;
    _Bool _hasReportFinish;
    _Bool _hasAppeared;
    _Bool _hasReportClosed;
    _Bool _isPreloadWhemInvisibile;
    _Bool _hasShow;
    _Bool _isRealtime16142;
    unsigned long long _gameWkInnterceptMethod;
    NSMutableDictionary *_webItems16142;
    NSDictionary *_webTimingDic;
    unsigned long long _pageCloseTime;
}

+ (id)createWithWebView:(id)arg1 andUrl:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isRealtime16142; // @synthesize isRealtime16142=_isRealtime16142;
@property(nonatomic) unsigned long long pageCloseTime; // @synthesize pageCloseTime=_pageCloseTime;
@property(retain, nonatomic) NSDictionary *webTimingDic; // @synthesize webTimingDic=_webTimingDic;
@property(retain, nonatomic) NSMutableDictionary *webItems16142; // @synthesize webItems16142=_webItems16142;
@property(nonatomic) unsigned long long gameWkInnterceptMethod; // @synthesize gameWkInnterceptMethod=_gameWkInnterceptMethod;
@property(nonatomic) _Bool hasShow; // @synthesize hasShow=_hasShow;
@property(nonatomic) _Bool isPreloadWhemInvisibile; // @synthesize isPreloadWhemInvisibile=_isPreloadWhemInvisibile;
- (void)setUserClickTime:(unsigned long long)arg1;
- (id)networkTypeString;
- (id)extractWebDurationWithStartKey:(id)arg1 endKey:(id)arg2;
- (void)assembleLocalItems:(id)arg1 lessFields:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (int)searchInsertPositionInItem:(id)arg1 ForOrder:(int)arg2 current:(int)arg3;
- (void)appendParams:(id)arg1 toReportItems:(id)arg2;
- (void)reportWithItems:(id)arg1 toProtoNumber:(int)arg2 realTime:(_Bool)arg3;
- (void)report16145:(id)arg1 realTime:(_Bool)arg2;
- (void)saveReport16142:(id)arg1 realTime:(_Bool)arg2;
- (unsigned long long)pageStartTime;
- (void)commitGameWebData:(id)arg1 Type:(id)arg2 Realtime:(_Bool)arg3;
- (void)report16142;
- (void)notifyWebViewDealloc;
- (void)notifyWebViewPreverifyFinished;
- (void)notifyWebViewPreverifyStarted;
- (void)notifyWebViewA8KeyFinished;
- (void)notifyWebViewA8KeyStarted;
- (void)notifyWebViewClosed;
- (void)notifyRenderFinished:(unsigned long long)arg1;
- (void)notifyWebViewLoadError:(long long)arg1;
- (void)notifyWebViewDidFinishLoad;
- (void)notifyWebViewDidStartLoad;
- (void)notifyWebViewWillLoad;
- (void)notifyWebViewDidAppear;
- (void)notifyWebViewDidCreated;
- (void)notifyWebViewCreate;
- (void)setPageCache:(_Bool)arg1;
- (void)setManualLoad:(_Bool)arg1;
- (void)setJsCommonLibVersion:(id)arg1;
- (void)setWepkgVersion:(id)arg1;
- (id)initWithWebView:(id)arg1 andUrl:(id)arg2;
- (id)webView;

@end

