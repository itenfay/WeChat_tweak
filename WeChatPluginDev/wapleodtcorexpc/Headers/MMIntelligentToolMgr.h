//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock, NSString;

@interface MMIntelligentToolMgr
{
    NSRecursiveLock *_ocrLock;
}

- (void).cxx_destruct;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getCodeClassify:(id)arg1;
- (id)getClassificationWithImage:(id)arg1;
- (id)generatePHashWithImage:(id)arg1;
- (_Bool)releaseOcrXNetCache;
- (id)getOcrTextWithImage:(id)arg1;
- (id)getImageFeatureForNewLifeWithImage:(id)arg1;
- (id)getWebviewOutLinkClassifyFeatureModelPath;
- (id)getWebviewOutLinkClassifyFeatureWithImage:(id)arg1;
- (id)getWebviewLinkFeatureModelPath;
- (id)getWebviewLinkFeatureWithImage:(id)arg1;
- (id)getModelPath;
- (id)getExternalLinkFeatureWithImage:(id)arg1;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

