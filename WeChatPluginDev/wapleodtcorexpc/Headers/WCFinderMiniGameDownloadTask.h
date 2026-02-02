//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSString;

@interface WCFinderMiniGameDownloadTask : NSObject
{
    long long _priority;
    NSString *_groupId;
    unsigned long long _timestamp;
    long long _batchIndex;
    NSString *_appId;
    NSString *_extraData;
    CDUnknownBlockType _completionBlock;
    MMTimer *_timeOutTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timeOutTimer; // @synthesize timeOutTimer=_timeOutTimer;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) long long batchIndex; // @synthesize batchIndex=_batchIndex;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void)onPreloadEnd:(id)arg1;
- (void)onPreloadStart:(id)arg1;
- (void)downloadFailForTimeOut;
- (void)pauseDownload;
- (void)resumeDownload;
- (void)stopDownload;
- (void)startDownload;
- (id)identifierKey;
- (void)dealloc;
- (id)initWithAppId:(id)arg1 extraData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

