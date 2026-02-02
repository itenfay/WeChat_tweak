//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSString;

@interface WCFinderMiniAppDownloadTask : NSObject
{
    long long _priority;
    NSString *_groupId;
    unsigned long long _timestamp;
    long long _batchIndex;
    NSString *_username;
    NSString *_appId;
    NSString *_path;
    CDUnknownBlockType _completionBlock;
    NSString *_requestKey;
    MMTimer *_timeOutTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timeOutTimer; // @synthesize timeOutTimer=_timeOutTimer;
@property(copy, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) long long batchIndex; // @synthesize batchIndex=_batchIndex;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void)prefetchGetCodeWithResult:(unsigned long long)arg1 preDownloadRequestkey:(id)arg2;
- (void)downloadFailForTimeOut;
- (void)pauseDownload;
- (void)resumeDownload;
- (void)stopDownload;
- (void)startDownload;
- (id)identifierKey;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 appId:(id)arg2 path:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

