//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, NSURLSession;

@interface MMWebOptimJSContextTaskLoader
{
    NSMutableArray *_waitingQueue;
    NSMutableDictionary *_waitingMap;
    NSMutableArray *_loadingQueue;
    NSMutableDictionary *_loadingMap;
    NSMutableArray *_downloadTaskArr;
    NSMutableDictionary *_notifyQueueMap;
    NSURLSession *_urlSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSMutableDictionary *notifyQueueMap; // @synthesize notifyQueueMap=_notifyQueueMap;
@property(retain, nonatomic) NSMutableArray *downloadTaskArr; // @synthesize downloadTaskArr=_downloadTaskArr;
@property(retain, nonatomic) NSMutableDictionary *loadingMap; // @synthesize loadingMap=_loadingMap;
@property(retain, nonatomic) NSMutableArray *loadingQueue; // @synthesize loadingQueue=_loadingQueue;
@property(retain, nonatomic) NSMutableDictionary *waitingMap; // @synthesize waitingMap=_waitingMap;
@property(retain, nonatomic) NSMutableArray *waitingQueue; // @synthesize waitingQueue=_waitingQueue;
- (void)callBackFailWithTaskId:(id)arg1;
- (void)callBackSuccessWithTaskId:(id)arg1;
- (void)callBackWithBlock:(CDUnknownBlockType)arg1;
- (void)startDownloadWithContext:(id)arg1;
- (void)checkWaitingQueue;
- (void)setupURLSession;
- (void)cancelAllTask;
- (void)loadTaskWithConfig:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailed:(CDUnknownBlockType)arg3;
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

