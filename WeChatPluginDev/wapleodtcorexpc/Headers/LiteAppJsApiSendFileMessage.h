//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, MMLiteAppDownloadMgr, NSDictionary, NSMutableDictionary, NSString;

@interface LiteAppJsApiSendFileMessage
{
    ForwardMessageLogicController *_forwardMsgLogic;
    NSMutableDictionary *_result;
    NSString *_fileType;
    NSString *_videoPath;
    NSDictionary *_params;
    MMLiteAppDownloadMgr *_downloadMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiteAppDownloadMgr *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onDownloadTaskCompletion:(id)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
- (id)ConvertLiteAppVideo2MsgWrapWithVideoInfo:(id)arg1;
- (id)ConvertLiteAppVideo2MsgWrapWithVideoPath:(id)arg1 thumbImage:(id)arg2;
- (id)ConvertLiteAppImage2MsgWrapWithImage:(id)arg1 retErrMsg:(id *)arg2;
- (void)forwardVideoMessageWithThumb:(id)arg1;
- (void)forwardVideoMessage:(id)arg1 filePath:(id)arg2;
- (void)addTailInfo:(id)arg1;
- (void)forwardImageMessage:(id)arg1 fileData:(id)arg2;
- (void)getFileDataFromCDN:(id)arg1 filePath:(id)arg2;
- (void)sendVideoMessage:(id)arg1;
- (void)sendImageMessage:(id)arg1;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

