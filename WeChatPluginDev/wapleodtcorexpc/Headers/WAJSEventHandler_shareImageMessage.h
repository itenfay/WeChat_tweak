//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSString, WAReportImageEntranceShareItem;

@interface WAJSEventHandler_shareImageMessage
{
    NSString *_imagePath;
    NSString *_cacheKey;
    ForwardMessageLogicController *m_forwardMessageLogicController;
    _Bool _needShowEntrance;
    NSString *_entrancePath;
    WAReportImageEntranceShareItem *_reportItem;
    _Bool _useForChatTool;
}

- (void).cxx_destruct;
- (id)getCurrentViewController;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
- (id)genKeyForUrl:(id)arg1;
- (id)getImageDataWithPackageRelativeURL:(id)arg1;
- (id)getImageDataWithLocalId:(id)arg1;
- (unsigned long long)getImageDataWithHttpUrl:(id)arg1 dataPtr:(id *)arg2;
- (void)shareImageWithData:(id)arg1 needShowEntrance:(_Bool)arg2 entrancePath:(id)arg3;
- (void)handleJSEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

