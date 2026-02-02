//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCAdDynamicCanvasPageInfo;
@protocol WCAdFormWebViewJSLogicDelegate;

@interface WCAdFormWebViewJSLogic
{
    id <WCAdFormWebViewJSLogicDelegate> _delegate;
    WCAdDynamicCanvasPageInfo *_pageInfo;
    NSString *_componentId;
    NSString *_qrExtInfo;
    NSMutableDictionary *_jsFunctionHandlerDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *jsFunctionHandlerDic; // @synthesize jsFunctionHandlerDic=_jsFunctionHandlerDic;
@property(retain, nonatomic) NSString *qrExtInfo; // @synthesize qrExtInfo=_qrExtInfo;
@property(retain, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
@property(retain, nonatomic) WCAdDynamicCanvasPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) __weak id <WCAdFormWebViewJSLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPerformActionResult:(id)arg1 resultData:(id)arg2;
- (void)handlerPublishEvent:(id)arg1 params:(id)arg2;
- (void)handlerSendCallback:(id)arg1 ret:(int)arg2 error:(id)arg3 data:(id)arg4;
- (_Bool)onOpenUrlInWebview:(id)arg1 callbackID:(id)arg2;
- (_Bool)dispatchJSEvent:(id)arg1 param:(id)arg2 callbackID:(id)arg3;
- (void)sendCallback:(id)arg1 ret:(int)arg2 error:(id)arg3 data:(id)arg4;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)tryInjectWeixinJSBridge:(id)arg1;
- (unsigned long long)getLocalJSBusinessType;
- (id)initWithWebView:(id)arg1 pageInfo:(id)arg2 componentId:(id)arg3 qrExtInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

