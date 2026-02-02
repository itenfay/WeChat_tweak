//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WebViewJSEventHandler_uploadMediaFile
{
    _Bool _isShowProgressTips;
}

- (void)onLocalResourceUploadFinishedWithoutMediaId:(id)arg1 LocalId:(id)arg2 FileUrl:(id)arg3 ErrCode:(int)arg4;
- (void)onLocalResourceUploadProgressWithouMediaId:(int)arg1 LocalId:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

