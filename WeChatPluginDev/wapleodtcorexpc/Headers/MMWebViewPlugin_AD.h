//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MMWebViewPlugin_AD
{
    NSObject<OS_dispatch_queue> *_gcdQueue;
    _Bool _isFetchingToken;
    NSMutableDictionary *_dicHost2Token;
    NSMutableDictionary *_dicEventID2Task;
    NSMutableArray *_taskQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFetchingToken; // @synthesize isFetchingToken=_isFetchingToken;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSMutableDictionary *dicEventID2Task; // @synthesize dicEventID2Task=_dicEventID2Task;
@property(retain, nonatomic) NSMutableDictionary *dicHost2Token; // @synthesize dicHost2Token=_dicHost2Token;
- (id)getTokenKeyByUrl:(id)arg1;
- (id)getTokenByUrl:(id)arg1;
- (void)saveToken:(id)arg1 expireTime:(unsigned long long)arg2 forUrl:(id)arg3;
- (void)workthread_handleGetTokenResponse:(id)arg1 eventId:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)remoteGetAdTokenByTask:(id)arg1;
- (void)checkTaskQueue;
- (void)addGetTokenTaskWithUrl:(id)arg1 adUrl:(id)arg2 posId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

