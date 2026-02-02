//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveCommentDataMgr, NSMutableDictionary, NSString;

@interface MMLiveCommentDataFetchEngne : NSObject
{
    _Bool _isSupportFrequencyLimit;
    _Bool _forbidAppendSvrComment;
    unsigned int _nextRequestDuration;
    NSMutableDictionary *_fetchTagDict;
    NSString *_uniqueId;
    double _lastRequestTime;
}

- (void).cxx_destruct;
@property(nonatomic) double lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(nonatomic) unsigned int nextRequestDuration; // @synthesize nextRequestDuration=_nextRequestDuration;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) NSMutableDictionary *fetchTagDict; // @synthesize fetchTagDict=_fetchTagDict;
@property(nonatomic) _Bool forbidAppendSvrComment; // @synthesize forbidAppendSvrComment=_forbidAppendSvrComment;
@property(nonatomic) _Bool isSupportFrequencyLimit; // @synthesize isSupportFrequencyLimit=_isSupportFrequencyLimit;
- (void)appendLiveComment:(id)arg1 forTaskId:(id)arg2 isHistoryMsg:(_Bool)arg3;
- (void)checkLongPullingRequestLive;
- (void)willEnterForeground:(id)arg1;
- (void)handleGetLiveMessage:(id)arg1 commentArray:(id)arg2 taskId:(id)arg3 nextRequestInterval:(unsigned int)arg4 isHistoryMsg:(_Bool)arg5;
- (_Bool)applyGetLiveMessageWithTaskId:(id)arg1;
- (id)getCommentRequestTaskWithoutCreatedWithTaskId:(id)arg1;
- (id)getCommentRequestTaskWithTaskId:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (id)getUniqueIdForTaskId:(id)arg1;
@property(readonly, nonatomic) MMLiveCommentDataMgr *commentDataMgr;
- (_Bool)checkOverLimitSequence:(id)arg1;
- (double)getOverLimitSequence;
- (void)continueFetchCommentWithTaskId:(id)arg1;
- (_Bool)checkIsOtherGetLiveComment;
- (void)resetFetchTagDict;
- (void)stopGetLiveComment:(id)arg1;
- (void)continueLongPulling:(id)arg1;
- (void)pauseLongPulling:(id)arg1;
- (void)startGetLiveCommentWithTaskId:(id)arg1 uniqueId:(id)arg2;
- (void)unInitNotifications;
- (void)initNotifications;
- (void)unRegisterExtension;
- (void)registerExtension;
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

