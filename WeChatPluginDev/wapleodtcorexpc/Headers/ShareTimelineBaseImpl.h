//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSDictionary, NSMutableData, NSString, NSURLConnection, WebviewJSEventHandlerBase;

@interface ShareTimelineBaseImpl
{
    WebviewJSEventHandlerBase *_eventHandler;
    NSString *_variantEventName;
    CDUnknownBlockType _beforeUploadBlock;
    NSURLConnection *_m_connecttion;
    JSEvent *_m_curEvent;
    NSMutableData *_m_recData;
    NSString *_publishedId;
    NSDictionary *_extraData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) NSString *publishedId; // @synthesize publishedId=_publishedId;
@property(retain, nonatomic) NSMutableData *m_recData; // @synthesize m_recData=_m_recData;
@property(retain, nonatomic) JSEvent *m_curEvent; // @synthesize m_curEvent=_m_curEvent;
@property(retain, nonatomic) NSURLConnection *m_connecttion; // @synthesize m_connecttion=_m_connecttion;
@property(copy, nonatomic) CDUnknownBlockType beforeUploadBlock; // @synthesize beforeUploadBlock=_beforeUploadBlock;
@property(copy, nonatomic) NSString *variantEventName; // @synthesize variantEventName=_variantEventName;
@property(nonatomic) __weak WebviewJSEventHandlerBase *eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)reportAdLandingPageShareIfNeeded;
- (void)dealloc;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)shareTimelineWithEvent:(id)arg1 imageData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)clearCurData;
- (void)showCanNotShareEmptyPage;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)wxBaseWebViewController;
- (id)mmWebViewController;
- (id)webviewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

