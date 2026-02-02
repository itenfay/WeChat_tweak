//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSWebSearchMgr, NSString;
@protocol FTSJSEventDelegate, FTSWebSearchDataSource;

@interface WXSearchJSLogicImpl
{
    id <FTSJSEventDelegate> _delegate;
    id <FTSWebSearchDataSource> _dataSource;
    FTSWebSearchMgr *_webSearchMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
@property(nonatomic) __weak id <FTSWebSearchDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FTSJSEventDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onSendVideoPlayInfoList:(id)arg1;
- (void)onWebRecommendInfoUpdate:(id)arg1;
- (void)onWebRecommendSetCommentResult:(id)arg1;
- (void)onSearchSimilarEmoticon:(id)arg1;
- (void)onOpenContactError:(id)arg1 withMessage:(id)arg2;
- (void)onOpenContact:(id)arg1;
- (void)onUpdateLocalImage:(id)arg1;
- (void)onSearchRecmdDataReturn:(id)arg1;
- (void)onSearchRecmdDataRequestSend:(id)arg1;
- (void)onSearchRecmdDataFail:(id)arg1;
- (void)onFailReceiveSuggestionJSON;
- (void)onReceiveSuggestionJSON:(id)arg1;
- (void)onSearchRecmdDataSuccess:(id)arg1;
- (void)onWebSearchDataFail:(id)arg1;
- (void)onWebSearchDataChanged:(id)arg1;
- (void)tryCommonPrefetchWithParams:(id)arg1 callbackID:(id)arg2;
- (void)tryPreloadVideoWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_onWebPageUrlExposed:(id)arg1 callbackID:(id)arg2;
- (void)handleJsApiFuncOfHandleWebViewUIReady:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenTransparentWeApp:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenWeAppPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenEmotionPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfSetSearchWord:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetSuggestion:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfRealTimeReport:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenMsgSession:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfSearchOperation:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetRcmdData:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfResultStat:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOnlineSearchContact:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetImage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetSnsImage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGotoFeedDetail:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenProfile:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfLaunchPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfLaunchDetailPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfDownloadPageDataForFastLoad:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfCreateWebViewForFastLoad:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfClickReport:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetSearchData:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleOpenSearchWebview:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleMakePhoneCall:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfHandleSelectContact:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleGetMatchContactList:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleImagePreview:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleUpdateReddotTimeStamps:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfOpenWowColikeSetting:(id)arg1 withCallBackId:(id)arg2;
- (void)handleJsApiFuncOfQuerySimilarEmotion:(id)arg1 withCallBackId:(id)arg2;
- (void)handleJsApiFuncOfGotoEmoticonPad:(id)arg1 withCallBackId:(id)arg2;
- (void)handleJsApiFuncOfPreloadVideo:(id)arg1 withCallBackId:(id)arg2;
- (void)handleJsApiFuncOfAppendSearchTag:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfsetSearchTagResult:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfLaunchApplication:(id)arg1 withCallBackId:(id)arg2;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (id)makeNetworkFailParam:(_Bool)arg1;
- (id)makeEmptyJSONResultParam:(_Bool)arg1;
- (void)handleRcmdDataOfGlobalTab:(id)arg1;
- (_Bool)canUseClassHandleJSAPI:(id)arg1;
- (id)getCurrentViewController;
@property(readonly, copy) NSString *description;
- (void)onSysBridgeCompleted;
- (void)sendCallbackWithRet:(int)arg1 error:(id)arg2 data:(id)arg3 callbackId:(id)arg4;
- (void)broadCastJSEventWithSel:(SEL)arg1 params:(id)arg2;
- (void)sendQueryChangedJSEvent:(id)arg1;
- (void)sendSearchJSEvent:(id)arg1;
- (unsigned long long)getLocalJSBusinessType;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

