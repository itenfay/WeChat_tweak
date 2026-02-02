//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveVotingInfo, MMFinderLiveTaskId, MMTimer, NSString;

@interface MMLiveVoteViewModel : NSObject
{
    _Bool _isAttending;
    unsigned int _remainTime;
    FinderLiveVotingInfo *_voteInfo;
    MMFinderLiveTaskId *_taskId;
    MMTimer *_countdownTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool isAttending; // @synthesize isAttending=_isAttending;
@property(nonatomic) unsigned int remainTime; // @synthesize remainTime=_remainTime;
@property(retain, nonatomic) FinderLiveVotingInfo *voteInfo; // @synthesize voteInfo=_voteInfo;
- (_Bool)hasSelfParticipantIn:(id)arg1;
- (void)safeMinusCountOfChoice:(id)arg1;
- (id)currentLiveTask;
- (void)onGetLiveVoteInfo:(id)arg1 forTaskId:(id)arg2;
- (void)updateModelOnVoteInfoUpdate;
- (void)updateVoteInfo:(id)arg1 fromMsg:(_Bool)arg2;
- (_Bool)checkAndClearVoteForSpamCheckIfNeeded;
- (void)countdownTimerCallBack;
- (_Bool)couldUpdateWith:(id)arg1;
- (id)getCheckAttendChoicesOnClickIndex:(long long)arg1;
- (id)getRadioAttendChoicesOnClickIndex:(long long)arg1;
- (void)updateLocalChoiceListOnAttendSuccessWith:(long long)arg1;
- (void)updateLocalInfoOnAttendSuccessWith:(long long)arg1;
- (void)attendVoteOnSelectIndex:(long long)arg1;
- (void)cancelCurrentVoting;
- (_Bool)isVoteEnd;
- (_Bool)isVoteComputing;
- (_Bool)isVoteRunning;
- (_Bool)canManageVote;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

