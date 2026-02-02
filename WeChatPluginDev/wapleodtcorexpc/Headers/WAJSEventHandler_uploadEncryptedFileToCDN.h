//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString, WebResourceCDNUploadHelper;

@interface WAJSEventHandler_uploadEncryptedFileToCDN
{
    WebResourceCDNUploadHelper *_cdnUploadHelper;
    MMTimer *uploadTimer;
    _Bool _isShowProgressTips;
    NSString *_tempFilePath;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowProgressTips; // @synthesize isShowProgressTips=_isShowProgressTips;
@property(copy, nonatomic) NSString *tempFilePath; // @synthesize tempFilePath=_tempFilePath;
- (void)onItemUploadCDNFinishedWithoutMediaId:(int)arg1 Item:(id)arg2;
- (void)onItemUploadProgressWithoutMediaId:(int)arg1 Item:(id)arg2;
- (id)assembleResItem:(id)arg1;
- (_Bool)uploadLocalResItem:(id)arg1;
- (void)stopUpload;
- (void)setTimeoutTimer;
- (void)handleJSEvent:(id)arg1;
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

