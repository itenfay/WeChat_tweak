//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveLikePostTask, NSMutableArray, NSString, SafeMutableDictionary;

@interface MMLiveLikeDataMgr
{
    _Bool _isPosting;
    unsigned int _nextReqInterval;
    SafeMutableDictionary *_likeInfoDict;
    NSMutableArray *_postTaskQueue;
    double _lastRespTimeInterval;
    MMLiveLikePostTask *_postingTask;
}

+ (id)getLikeCountLabel:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveLikePostTask *postingTask; // @synthesize postingTask=_postingTask;
@property(nonatomic) double lastRespTimeInterval; // @synthesize lastRespTimeInterval=_lastRespTimeInterval;
@property(nonatomic) unsigned int nextReqInterval; // @synthesize nextReqInterval=_nextReqInterval;
@property(retain, nonatomic) NSMutableArray *postTaskQueue; // @synthesize postTaskQueue=_postTaskQueue;
@property(nonatomic) _Bool isPosting; // @synthesize isPosting=_isPosting;
@property(retain, nonatomic) SafeMutableDictionary *likeInfoDict; // @synthesize likeInfoDict=_likeInfoDict;
- (void)handleApplyLikeResult:(id)arg1 interval:(unsigned int)arg2 forTaskId:(id)arg3;
- (_Bool)applyLikeWithPostTask:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)cancelPostingTask;
- (id)getLikeInfoWithoutCreatedWithTaskId:(id)arg1;
- (id)getLikeInfoWithTaskId:(id)arg1;
- (id)getMergedPostTask;
- (void)postNextTask;
- (void)delayPostNextTask;
- (void)invokePostNextTask;
- (id)getLiveLikePostTask:(id)arg1;
- (void)addLiveLikePostWithTaskId:(id)arg1 isClipMode:(_Bool)arg2;
- (void)updateLikeCountWithoutCreate:(unsigned long long)arg1 forTaskId:(id)arg2;
- (void)setLikeCount:(unsigned long long)arg1 forTaskId:(id)arg2;
- (unsigned long long)getLikeCountForAchorWithTaskId:(id)arg1;
- (unsigned long long)getOthersLikeCountForAudienceWithTaskId:(id)arg1;
- (unsigned long long)getLikeCountForAudienceWithTaskId:(id)arg1;
- (void)postLiveLikeWithTaskId:(id)arg1 isClipMode:(_Bool)arg2;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

