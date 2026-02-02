//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, TPVideoInfo, TPWorkerQueue;
@protocol OS_dispatch_queue, TPAssetResourceLoaderDelegate;

@interface TPAssetResourceLoader : NSObject
{
    struct TPAssetProxyLoaderCallback *_proxyLoaderCallback;
    _Bool _isOnSwitching;
    int _taskId;
    int _taskSequence;
    id <TPAssetResourceLoaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    long long _definitionId;
    NSString *_cacheDataDir;
    NSRecursiveLock *_recursiveLock;
    NSMutableArray *_loadingRequests;
    TPWorkerQueue *_dataWriteQueue;
    TPVideoInfo *_videoInfo;
    NSMutableDictionary *_dicFileInfo;
    NSMutableDictionary *_dicDataRanges;
    NSMutableArray *_arrPendingMsg;
    long long _lastLoadingRequestGroupTimestamp;
    long long _currentLoadingRequestCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentLoadingRequestCount; // @synthesize currentLoadingRequestCount=_currentLoadingRequestCount;
@property(nonatomic) long long lastLoadingRequestGroupTimestamp; // @synthesize lastLoadingRequestGroupTimestamp=_lastLoadingRequestGroupTimestamp;
@property(retain, nonatomic) NSMutableArray *arrPendingMsg; // @synthesize arrPendingMsg=_arrPendingMsg;
@property(retain, nonatomic) NSMutableDictionary *dicDataRanges; // @synthesize dicDataRanges=_dicDataRanges;
@property(retain, nonatomic) NSMutableDictionary *dicFileInfo; // @synthesize dicFileInfo=_dicFileInfo;
@property(retain, nonatomic) TPVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) TPWorkerQueue *dataWriteQueue; // @synthesize dataWriteQueue=_dataWriteQueue;
@property(retain, nonatomic) NSMutableArray *loadingRequests; // @synthesize loadingRequests=_loadingRequests;
@property(retain, nonatomic) NSRecursiveLock *recursiveLock; // @synthesize recursiveLock=_recursiveLock;
@property(retain, nonatomic) NSString *cacheDataDir; // @synthesize cacheDataDir=_cacheDataDir;
@property(nonatomic) long long definitionId; // @synthesize definitionId=_definitionId;
@property(nonatomic) _Bool isOnSwitching; // @synthesize isOnSwitching=_isOnSwitching;
@property(nonatomic) int taskSequence; // @synthesize taskSequence=_taskSequence;
@property(nonatomic) int taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <TPAssetResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onUpdateDataWithOffset:(unsigned long long)arg1 length:(unsigned long long)arg2 fileName:(id)arg3;
- (void)onLoadingRequestFinished:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (void)onStop;
- (int)getTaskId;
- (long long)getDefinitionId;
- (void *)getAssetResourceLoaderProxyCallback;
- (void *)getAssetResourceloaderProxyCallback;
- (void)cancelLoadingRequestWithNum:(int)arg1;
- (void)startRequestWithMsg:(id)arg1;
- (id)getMergeLoadingRequest:(long long)arg1 length:(long long)arg2;
- (id)getCacheRangeInfoWithMsg:(id)arg1;
- (id)getExistContainRequestWithOffset:(long long)arg1 length:(long long)arg2;
- (int)onReceiveRequestMsg:(long long)arg1 end:(long long)arg2 fileName:(id)arg3 requestMeta:(_Bool)arg4;
- (int)onReceiveRequestMsg:(long long)arg1 end:(long long)arg2 fileName:(id)arg3;
- (long long)getRequestLenWithFileName:(id)arg1 start:(long long)arg2 end:(long long)arg3;
- (void)onProxyStart:(int)arg1;
- (int)getDataWithFileName:(id)arg1 data:(char *)arg2 offset:(long long)arg3 size:(int)arg4;
- (int)getDataReadyLenWithFileName:(id)arg1 fileId:(int)arg2 offset:(unsigned long long)arg3;
- (id)generateInformationRequest;
- (_Bool)isUseAssetResourceLoader;
- (id)getFileInfoWithFileName:(id)arg1;
- (id)initWithServiceType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

