//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString, WCUploadTask, WCUploader;
@protocol WCTaskUploaderDelegate;

@interface WCTaskUploader
{
    WCUploadTask *_uploadTask;
    WCUploader *_uploader;
    NSMutableSet *_runnedSubTask;
    int _runningState;
    id <WCTaskUploaderDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (void)onDataUploadFinished:(id)arg1 uploadResult:(id)arg2;
- (void)onDataUploadStarted:(id)arg1;
- (void)handleMediaProcessCompletion:(id)arg1 result:(long long)arg2 errType:(long long)arg3 errMsg:(id)arg4;
- (void)onMediaUploadFinished:(id)arg1 uploadResult:(long long)arg2 uploadErrType:(long long)arg3;
- (void)onMediaUploadStarted:(id)arg1;
- (void)dealloc;
- (void)sightVideoCompositeTask:(id)arg1 didFinish:(_Bool)arg2 withSightDraft:(id)arg3;
- (void)cancelWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)canInterrupt;
- (void)run;
- (id)initWithTask:(id)arg1 withDelegate:(id)arg2;
- (void)tryStartNextTask;
- (void)prepareUploadMedias;
- (void)_handleUploadMediaCancel;
- (void)_handleUploadMediaError;
- (void)_handleUploadMediaSuccess;
- (void)_handleUploadMediaStart;
- (void)_handlePostRequestCancel;
- (void)_handlePostRequestError;
- (void)_handlePostRequestSuccess;
- (void)_handlePostRequestStart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

