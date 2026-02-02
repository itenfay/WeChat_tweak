//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString;

@interface WebviewJSEventHandler_getStoreEmoticonImage
{
    NSString *m_md5;
    JSEvent *m_event;
}

- (void).cxx_destruct;
- (void)asyncHandle_callbackFailEvent:(id)arg1 error:(id)arg2;
- (void)asyncHandle_callbackEvent:(id)arg1 result:(id)arg2;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)startDownloadEmoticonWithMd5:(id)arg1 encryptUrl:(id)arg2 aesKey:(id)arg3 productId:(id)arg4 designerId:(id)arg5;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

