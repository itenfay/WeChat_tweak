//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WebviewJSEventHandler_handleDynamicCardDebugAction
{
}

- (void)restartCurrentLiveRoom;
- (void)handleRestartCurrentLiveRoom:(id)arg1;
- (void)handleSetGameLiveFrameSetDebugConfig:(id)arg1 params:(id)arg2;
- (void)handleGetGameLiveCurrentFrameSetDebugConfig:(id)arg1;
- (void)handleDownloadAndSetDebugPkg:(id)arg1 params:(id)arg2;
- (void)handleIsMB2:(id)arg1;
- (void)handleClearDebugPkgAction:(id)arg1 params:(id)arg2;
- (void)handleGetCurrentPkgInfo:(id)arg1 params:(id)arg2;
- (void)handleGetClientInfoAction:(id)arg1;
- (void)asyncHandle_callbackEvent:(id)arg1 result:(id)arg2;
- (void)endWithSucc:(id)arg1 extraParams:(id)arg2;
- (void)endWithError:(id)arg1 errDesc:(id)arg2 extraParams:(id)arg3;
- (void)endWithError:(id)arg1 errDesc:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

