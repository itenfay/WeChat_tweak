//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, PardusSearchRequest, PardusSearchResponse, ProtobufCGIWrap, WebSearchBoxCtrlInfo;
@protocol WebSearchMgrDelegate;

@interface FTSWebSearchMgr
{
    _Bool _isActive;
    _Bool _isWorkingForSuggestion;
    unsigned int _lastEventID;
    unsigned int _lastEventIDForSearchGuide;
    unsigned int _lastEventIDForSuggestion;
    unsigned int _fromCategoryId;
    NSMutableDictionary *_dicSearchData;
    NSMutableArray *_searchDataFIFO;
    NSMutableDictionary *_retryParamsForWebSearch;
    NSMutableDictionary *_retryParamsForSuggestion;
    double _totalStayTimeSec;
    double _totalWebViewTimeSec;
    unsigned long long _bAction;
    struct timeval _tvStart;
    struct timeval _tvWebViewStart;
    unsigned long long _eStatus;
    ProtobufCGIWrap *_parallelRecommendMsg;
    _Bool _isParallelReqRecommend;
    NSString *_reqIdForWaitingRecommendData;
    ProtobufCGIWrap *_parallelSearchMsg;
    _Bool _isParallelReqSearch;
    NSString *_reqIdForWaitingSearchData;
    NSMutableDictionary *_wxamStreamMap;
    _Bool _hasLoadDownloadH5;
    unsigned int _preSearchPardusExpireTs;
    unsigned int _lastPreSearchTime;
    PardusSearchRequest *_pardusReq;
    PardusSearchResponse *_pardusResp;
    NSString *_queryOfpardusRespDone;
    _Bool _bForbidReportTime;
    _Bool _bForbidReportAction;
    _Bool _isParallFetchingRecmdData;
    id <WebSearchMgrDelegate> _delegate;
    NSString *_newestQueryText;
    NSString *_newestSearchText;
    NSString *_respJson;
    unsigned long long _scene;
    WebSearchBoxCtrlInfo *_boxCtrlInfo;
    NSString *_respDebugInfo;
    NSMutableArray *_searchEventIDArray;
    NSString *_trueRecmdDataRequestID;
}

+ (_Bool)IsWebRecommendPublishId:(id)arg1;
+ (id)getWKResourceTmpDir;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *trueRecmdDataRequestID; // @synthesize trueRecmdDataRequestID=_trueRecmdDataRequestID;
@property(nonatomic) _Bool isParallFetchingRecmdData; // @synthesize isParallFetchingRecmdData=_isParallFetchingRecmdData;
@property(retain, nonatomic) NSMutableArray *searchEventIDArray; // @synthesize searchEventIDArray=_searchEventIDArray;
@property(retain, nonatomic) NSString *respDebugInfo; // @synthesize respDebugInfo=_respDebugInfo;
@property(retain, nonatomic) WebSearchBoxCtrlInfo *boxCtrlInfo; // @synthesize boxCtrlInfo=_boxCtrlInfo;
@property(nonatomic) _Bool bForbidReportAction; // @synthesize bForbidReportAction=_bForbidReportAction;
@property(nonatomic) _Bool bForbidReportTime; // @synthesize bForbidReportTime=_bForbidReportTime;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *respJson; // @synthesize respJson=_respJson;
@property(retain, nonatomic) NSString *newestSearchText; // @synthesize newestSearchText=_newestSearchText;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(nonatomic) __weak id <WebSearchMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWebRecommendInfoUpdate:(id)arg1;
- (void)onCancel;
- (void)onEnterForeGround;
- (void)onEnterBackGround;
- (void)onResumeWebSearch;
- (void)onPauseWebSearch;
- (void)onStartWebSearchFromCacheFFSee;
- (void)markItemClicked;
- (void)markResultValid:(_Bool)arg1 andQuery:(id)arg2 andType:(unsigned int)arg3;
- (void)reportStayTime;
- (void)reportAction;
- (void)reportVisit;
- (void)reportSimilarEmotSendClickSessionId:(id)arg1 searchId:(id)arg2 requestId:(id)arg3 clickedMd5:(id)arg4 actionType:(unsigned int)arg5;
- (void)reportSearchedEmotClick:(id)arg1 pageNumber:(unsigned int)arg2 query:(id)arg3 sessionID:(id)arg4 requestID:(id)arg5 position:(unsigned int)arg6 docID:(id)arg7 clickMd5Type:(unsigned int)arg8;
- (void)reportSearchedEmotExpose:(id)arg1 content:(id)arg2 query:(id)arg3 sessionID:(id)arg4 requestID:(id)arg5 pageNumber:(long long)arg6;
- (void)reportSimilarEmotExpose:(id)arg1 requestMd5:(id)arg2 sessionId:(id)arg3 searchId:(id)arg4 requestId:(id)arg5 pos:(unsigned int)arg6;
- (void)reportSimilarEmotLongPress:(id)arg1 requestMd5:(id)arg2 sessionId:(id)arg3 searchId:(id)arg4 requestId:(id)arg5 offset:(unsigned int)arg6 pos:(unsigned int)arg7 actionType:(unsigned int)arg8;
- (void)reportSimilarEmotClick:(id)arg1 requestMd5:(id)arg2 sessionId:(id)arg3 searchId:(id)arg4 requestId:(id)arg5 offset:(unsigned int)arg6 pos:(unsigned int)arg7;
- (void)sendWebSearchRTReport:(id)arg1 cgi:(unsigned int)arg2;
- (void)sendWebSearchRTReport:(id)arg1;
- (void)sendWebRecommendRTReport:(id)arg1;
- (void)onLanguageChange;
- (void)addWebSearchLog:(id)arg1 forLogID:(unsigned int)arg2;
- (void)handleSuggestionCgi:(id)arg1;
- (void)handleWebRecommendReportCgi:(id)arg1;
- (void)handleReportCgi:(id)arg1;
- (void)handleGuideCgi:(id)arg1;
- (void)tryConsumeReddot:(unsigned int)arg1 redDotTimeStamp:(unsigned int)arg2;
- (void)handleWebRecommendCgi:(id)arg1 eventID:(unsigned int)arg2;
- (void)handleSearchConfirm:(id)arg1;
- (void)handleSearchSimilarEmoticon:(id)arg1;
- (void)handlePardusPreSearch:(id)arg1;
- (void)handlePardusSearch:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isFromFuncQueryWithScene:(unsigned int)arg1 sceneActionType:(unsigned int)arg2;
- (_Bool)isValidWebSearchLog:(id)arg1;
- (void)dealloc;
- (void)onResetRecommendResource;
- (void)cacheRecmdData:(id)arg1 andScene:(unsigned int)arg2 andVersion:(unsigned int)arg3 andBusinessType:(unsigned long long)arg4;
- (unsigned long long)getGuideParamFromConfig;
- (unsigned int)getVersion;
- (void)tryAsyncPardusPreSearchRequest:(id)arg1;
- (void)asyncPardusSearchRequest:(id)arg1;
- (void)invalidateSuggestion;
- (void)sendRequestForRemcdData:(id)arg1;
- (void)tryGetRecmdData:(id)arg1 isParallelRequest:(_Bool)arg2;
- (void)tryGetRecmdData:(id)arg1;
- (void)asyncSearchSuggest:(id)arg1;
- (void)asyncSearchSimilarEmoticon:(id)arg1;
- (void)asyncWebRecommend:(id)arg1;
- (id)pardusInfoData;
- (id)pardusWebSearchTips:(id)arg1;
- (id)pardusRequestId:(id)arg1;
- (id)pardusSearchIdFor:(id)arg1;
- (id)pardusWebJsonResultFor:(id)arg1;
- (id)pardusSearchResultFor:(id)arg1;
- (id)pardusRelatedSearchSugResultFor:(id)arg1 scene:(unsigned int)arg2;
- (_Bool)hasRelatedSearchSugResultFromHomePage:(id)arg1;
- (_Bool)shouldShowPardusWebview:(id)arg1;
- (_Bool)hasSearchSugResultFromHomePage:(id)arg1;
- (void)invalidSearchResultExceptRelatedSug;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (id)endEmoticonStream:(id)arg1 duration:(long long)arg2;
- (_Bool)sendEmoticonStream:(id)arg1 images:(id)arg2;
- (_Bool)createEmoticonStream:(id)arg1;
- (void)sendVideoPlayInfoListToWeb:(id)arg1 searchId:(id)arg2;
- (void)clearNetworkRequest;
- (void)cancelSearch;
- (id)getDetailSearchTips:(unsigned long long)arg1;
- (id)init;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onImageFailForUrl:(id)arg1;
- (void)onImageReady:(id)arg1 forUrl:(id)arg2;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onHeadImageChange:(id)arg1;
- (void)downloadHeadImg:(id)arg1 withCategory:(unsigned char)arg2 withInfo:(id)arg3;
- (void)pageRequestEmot:(id)arg1;
- (void)pageRequestAvatar:(id)arg1;
- (void)pageRequestAvatarList:(id)arg1;
- (void)pageRequestSnsImage:(id)arg1;
- (void)pageRequestSnsImageList:(id)arg1;
- (void)pageRequestCommonImage:(id)arg1;
- (void)pageRequestCommonImageList:(id)arg1;
- (_Bool)eableDowloadRawData;
- (void)setImageResource:(id)arg1 toParams:(id)arg2 withSrcPath:(id)arg3 andBackUpUrl:(id)arg4;
- (id)makeWKCopyForRes:(id)arg1 fromFile:(id)arg2;
- (void)cleanWKTmpResourceIfNeeded;
- (id)getWKResourceTmpDir;
- (void)cleanLocalResource;
- (void)clearResourceExtension;
@property(retain, nonatomic) NSMutableDictionary *dicEmotInfo; // @dynamic dicEmotInfo;
@property(retain, nonatomic) NSMutableDictionary *dicCommonImgInfo; // @dynamic dicCommonImgInfo;
@property(retain, nonatomic) NSMutableDictionary *dicSnsImgInfo; // @dynamic dicSnsImgInfo;
@property(retain, nonatomic) NSMutableDictionary *dicHeadImgInfo; // @dynamic dicHeadImgInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

