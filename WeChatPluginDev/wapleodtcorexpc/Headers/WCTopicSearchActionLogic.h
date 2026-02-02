//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonUploader, NSMutableDictionary, NSString, WKWebView;

@interface WCTopicSearchActionLogic
{
    EmoticonUploader *_uploader;
    WKWebView *_resultWebView;
    NSMutableDictionary *_dictEmotionRequestWrappers;
}

+ (_Bool)isCustomEmoticon:(unsigned int)arg1;
+ (_Bool)isStoreEmoticon:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictEmotionRequestWrappers; // @synthesize dictEmotionRequestWrappers=_dictEmotionRequestWrappers;
@property(nonatomic) __weak WKWebView *resultWebView; // @synthesize resultWebView=_resultWebView;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)downloadStoreEmotion:(id)arg1 requestWrapper:(id)arg2;
- (void)genEmotionMsgWrapFromSearchResponseShare:(id)arg1 imageData:(id)arg2 requestWrapper:(id)arg3;
- (void)downloadLiteAppThumbnail:(id)arg1;
- (void)downloadEmotionData:(id)arg1 requestWrapper:(id)arg2;
- (id)snapShotWebviewImageIniOS10WithSnapRect:(struct CGRect)arg1;
- (void)shareWeappPageWithSnapRect:(struct CGRect)arg1 weAppShare:(id)arg2 requestWrapper:(id)arg3;
- (void)shareWeappPageWithThumbUrl:(id)arg1 weAppShare:(id)arg2 requestWrapper:(id)arg3;
- (void)genWeappPageMsgWrapFromWeAppShare:(id)arg1 requestWrapper:(id)arg2;
- (void)handleGetEmoticonSearchShareResponseWraper:(id)arg1 wrapper:(id)arg2;
- (void)handleGetTopicSearchShareResponseWraper:(id)arg1 wrapper:(id)arg2;
- (void)handleGetSearchShareResponseWraper:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)requestSearchShareDataFromSearchParams:(id)arg1 requestWrapper:(id)arg2;
- (void)requestEmoticonSearchShareDataFromSearchParams:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)requestSearchShareDataFromSearchParams:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)cancelAllRequest;
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

