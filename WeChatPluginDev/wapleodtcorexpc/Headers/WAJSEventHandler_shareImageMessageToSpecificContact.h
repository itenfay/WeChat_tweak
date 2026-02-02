//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSString, WAReportImageEntranceShareItem, WAScreenshotContextInfo;

@interface WAJSEventHandler_shareImageMessageToSpecificContact
{
    NSString *_imagePath;
    NSString *_cacheKey;
    ForwardMessageLogicController *m_forwardMessageLogicController;
    WAReportImageEntranceShareItem *_reportItem;
    NSString *_username;
    NSString *_openId;
    WAScreenshotContextInfo *_waInfo;
}

- (void).cxx_destruct;
- (void)updateReportItemWithContact:(id)arg1 isSuccess:(int)arg2;
- (void)fetchUsernameWithOpenId:(id)arg1 appId:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (id)getCurrentViewController;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
- (id)getWAScreenshotContextInfoWithEntrancePath:(id)arg1;
- (id)genKeyForUrl:(id)arg1;
- (id)getImageDataWithPackageRelativeURL:(id)arg1;
- (id)getImageDataWithLocalId:(id)arg1;
- (unsigned long long)getImageDataWithHttpUrl:(id)arg1 dataPtr:(id *)arg2;
- (void)shareImageWithData:(id)arg1 waInfo:(id)arg2 contact:(id)arg3;
- (void)shareImageWithData:(id)arg1 username:(id)arg2 waInfo:(id)arg3;
- (void)shareImageWithData:(id)arg1 username:(id)arg2 openId:(id)arg3 waInfo:(id)arg4;
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

