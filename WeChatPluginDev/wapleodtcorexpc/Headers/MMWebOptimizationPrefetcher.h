//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, NSURLSession;

@interface MMWebOptimizationPrefetcher
{
    NSMutableArray *_waitingQueue;
    NSMutableDictionary *_waitingDic;
    NSMutableArray *_prefetchingQueue;
    NSMutableDictionary *_prefetchingDic;
    NSMutableArray *_a8keyLiteTaskQueue;
    NSMutableDictionary *_a8keyLiteTaskDic;
    NSURLSession *_urlSession;
}

+ (id)prefetchUserAgent;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSMutableDictionary *a8keyLiteTaskDic; // @synthesize a8keyLiteTaskDic=_a8keyLiteTaskDic;
@property(retain, nonatomic) NSMutableArray *a8keyLiteTaskQueue; // @synthesize a8keyLiteTaskQueue=_a8keyLiteTaskQueue;
@property(retain, nonatomic) NSMutableDictionary *prefetchingDic; // @synthesize prefetchingDic=_prefetchingDic;
@property(retain, nonatomic) NSMutableArray *prefetchingQueue; // @synthesize prefetchingQueue=_prefetchingQueue;
@property(retain, nonatomic) NSMutableDictionary *waitingDic; // @synthesize waitingDic=_waitingDic;
@property(retain, nonatomic) NSMutableArray *waitingQueue; // @synthesize waitingQueue=_waitingQueue;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)onInsertRedirectPrefetchTaskWithUrl:(id)arg1 fromUrl:(id)arg2 scene:(unsigned int)arg3 subScene:(unsigned int)arg4;
- (void)checkWaitingQueue;
- (void)setupURLSession;
- (_Bool)hasPrefetchingTaskWithIdentifier:(id)arg1;
- (void)cancelAllPrefetchTask;
- (void)addPrefetchTaskWithRequest:(id)arg1;
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

