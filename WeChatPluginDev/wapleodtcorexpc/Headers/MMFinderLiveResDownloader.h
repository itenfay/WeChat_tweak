//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock;

@interface MMFinderLiveResDownloader : NSObject
{
    NSRecursiveLock *_lock;
    NSMutableDictionary *_requestObjectDict;
    NSMutableArray *_downloadingRequestObjectQueue;
    NSMutableArray *_waittingRequestObjectQueue;
    NSMutableArray *_pendingRetryRequestObjects;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pendingRetryRequestObjects; // @synthesize pendingRetryRequestObjects=_pendingRetryRequestObjects;
@property(retain, nonatomic) NSMutableArray *waittingRequestObjectQueue; // @synthesize waittingRequestObjectQueue=_waittingRequestObjectQueue;
@property(retain, nonatomic) NSMutableArray *downloadingRequestObjectQueue; // @synthesize downloadingRequestObjectQueue=_downloadingRequestObjectQueue;
@property(retain, nonatomic) NSMutableDictionary *requestObjectDict; // @synthesize requestObjectDict=_requestObjectDict;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)handleTask:(id)arg1 downloadAttemptSucceeded:(_Bool)arg2;
- (void)OnCdnDownload:(id)arg1;
- (_Bool)retryDownLoadForRequestObj:(id)arg1;
- (_Bool)realStartDonwloadWithQueue;
- (_Bool)startDownload:(id)arg1;
@property(readonly, nonatomic) unsigned long long pendingTaskCount;
- (void)setup;
- (id)init;
- (void)stopAllDownLoad;
- (void)dealloc;

@end

