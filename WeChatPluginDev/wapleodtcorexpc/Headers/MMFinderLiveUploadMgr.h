//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMFinderLiveUploadMgr
{
    NSMutableArray *_uploadWaitingArray;
    NSMutableArray *_retryWaitingArray;
    NSMutableDictionary *_uploadingTaskDict;
    NSMutableDictionary *_uploadingMediaItemDict;
    NSObject<OS_dispatch_queue> *_processQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue; // @synthesize processQueue=_processQueue;
@property(retain, nonatomic) NSMutableDictionary *uploadingMediaItemDict; // @synthesize uploadingMediaItemDict=_uploadingMediaItemDict;
@property(retain, nonatomic) NSMutableDictionary *uploadingTaskDict; // @synthesize uploadingTaskDict=_uploadingTaskDict;
@property(retain, nonatomic) NSMutableArray *retryWaitingArray; // @synthesize retryWaitingArray=_retryWaitingArray;
@property(retain, nonatomic) NSMutableArray *uploadWaitingArray; // @synthesize uploadWaitingArray=_uploadWaitingArray;
- (id)safeGetTaskByTaskId:(id)arg1;
- (_Bool)checkUploadTaskIsRetrying:(id)arg1;
- (id)safeGetRetryTaskByTaskId:(id)arg1;
- (_Bool)checkUploadTaskIsWaiting:(id)arg1;
- (id)safeGetWaitingTaskByTaskId:(id)arg1;
- (_Bool)checkCurUploadingMediaOverLimit;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onCdnUploadEndWithUploadInfo:(id)arg1;
- (void)realStartCdnUploadWithHeader:(struct C2CUploadRequest)arg1;
- (void)uploadTaskFail:(id)arg1;
- (void)uploadTaskSuccess:(id)arg1;
- (void)uploadFinishWithMediaItem:(id)arg1 uploadTask:(id)arg2 uploadInfo:(id)arg3;
- (void)startCurUploadingTask:(id)arg1;
- (void)tryStartNextUploadTaskFromArray;
- (void)retryUploadTask:(id)arg1 withTryNext:(_Bool)arg2;
- (void)cancelUploadTaskWithId:(id)arg1;
- (void)addUploadTask:(id)arg1;
- (long long)getFinderPostErrorTypeFromUploadFinishType:(long long)arg1;
- (id)getFinderUploadTaskWithDataItem:(id)arg1 uploadedMediaArray:(id)arg2;
- (id)getMediaArrayWithDataItem:(id)arg1 uploadTaskId:(id)arg2 headerParamsType:(unsigned long long)arg3 cdnAppType:(unsigned long long)arg4;
- (void)startUploadFinderLiveWithDataItem:(id)arg1 headerParamsType:(unsigned long long)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (void)cancelUploadImagePath:(id)arg1;
- (void)startUploadImagePath:(id)arg1 headerParamsType:(unsigned long long)arg2 cdnAppType:(unsigned long long)arg3 complection:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

