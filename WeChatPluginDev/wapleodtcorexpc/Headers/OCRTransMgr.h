//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EnhanceTranslatingUtil, MMURLHandler, NSMutableDictionary, NSNumber, NSString;

@interface OCRTransMgr
{
    NSNumber *_isBottomBarAvaliable;
    NSNumber *_isNewOCRTransAvaliable;
    NSMutableDictionary *_clientMsgID2ContextMap;
    EnhanceTranslatingUtil *_util;
    _Bool _isDetectModelWorkable;
    MMURLHandler *_urlHandler;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDetectModelWorkable; // @synthesize isDetectModelWorkable=_isDetectModelWorkable;
@property(retain, nonatomic) MMURLHandler *urlHandler; // @synthesize urlHandler=_urlHandler;
- (void)detectDocumentArea:(id)arg1 cropRect:(struct CGRect)arg2 sessionId:(unsigned long long)arg3;
- (void)releaseDetectDocumentModel;
- (void)loadDetectDocumentModel;
- (void)checkDetectDocumentModelUpdate;
- (_Bool)enableScanTranslatingNewStyle;
- (void)handleSendTransImageData:(id)arg1;
- (void)sendTransImageData:(id)arg1 context:(id)arg2;
- (unsigned int)cdnUploadTransImageData:(id)arg1 sessionId:(unsigned int)arg2 scene:(unsigned int)arg3;
- (void)onLanguageChange;
- (void)OnCdnUpload:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getFromLang;
- (_Bool)setFromLang:(id)arg1;
- (_Bool)isNewOCRTransAvaliable;
- (_Bool)isBottomBarAvaliable;
- (void)onMMDynamicConfigUpdated;
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

