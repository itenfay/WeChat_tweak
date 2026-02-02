//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSString;

@interface WCFinderLiveReplayReporter : NSObject
{
    unsigned long long _enterTime;
    MMFinderLiveTaskId *_liveTaskId;
    NSString *_reportUUID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reportUUID; // @synthesize reportUUID=_reportUUID;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
- (unsigned long long)transformIsFreeLive;
- (unsigned long long)transformStartScene;
- (id)replayLiveTask;
- (id)replaceCommaToSemicolon:(id)arg1;
- (void)reportLiveReplayEvent:(id)arg1 params:(id)arg2;
- (unsigned long long)getReplayDurationInMS;
- (void)onRateLongPressChangeWithObjectId:(id)arg1 entryType:(id)arg2 fromRate:(double)arg3;
- (void)onRateSelectWithObjectId:(id)arg1 entryType:(id)arg2 rate:(double)arg3;
- (void)onRateBtnClickWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onRateBtnExposeWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onGreateTimeListItemClickWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onGreateTimeListViewExposeWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onGreateTimeBtnClickWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onGreateTimeBtnExposeWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onProgressBarGreateTimeDotSecondClickWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onProgressBarGreateTimePreviewPlayBtnClickWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onProgressBarGreateTimeDotClickWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onProgressBarGreateTimeDotExposeWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onDeleteReplayWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onClickToggleHiddenReplayWithObjectId:(id)arg1 entryType:(id)arg2 hidden:(_Bool)arg3;
- (void)onClickComplainReplayWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onSeekReplayWithObjectId:(id)arg1 entryType:(id)arg2 fromTimeMS:(unsigned long long)arg3 toTimeMS:(unsigned long long)arg4 isAtGreateTime:(_Bool)arg5;
- (void)onPauseReplayWithObjectId:(id)arg1 entryType:(id)arg2 currentTime:(unsigned long long)arg3;
- (void)onMinimizeWithObjectId:(id)arg1 entryType:(id)arg2 isInteractivePan:(_Bool)arg3;
- (void)onOrientationClicked:(long long)arg1 objectId:(id)arg2 entryType:(id)arg3;
- (void)onClickShareWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onStartWatchingReplayWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onSharingToTarget:(unsigned long long)arg1 objectId:(id)arg2 entryType:(id)arg3 isFastForward:(_Bool)arg4 usernameList:(id)arg5;
- (void)onFinishWatching;
- (void)onPurchaseSucceededWithCoinAmount:(unsigned int)arg1 atTimeInMillisecond:(unsigned long long)arg2;
- (void)onLiveRecordDurationWithObjectId:(id)arg1 entryType:(id)arg2 duration:(double)arg3;
- (void)onPaidSuccessWithObjectId:(id)arg1 entryType:(id)arg2 amount:(long long)arg3 duration:(double)arg4;
- (void)onExposeRechargeSuccessWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onExposeRechargePanelWithObjectId:(id)arg1 entryType:(id)arg2 pageSubType:(unsigned long long)arg3;
- (void)onClickReplayAgreementCancelButtonWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onClickReplayAgreementConfirmButtonWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onClickReplayPayConfirmButtonWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onClickReplayPayButtonWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onExposeReplayPayButtonWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onExposeReplayWithObjectId:(id)arg1 entryType:(id)arg2 objectType:(unsigned long long)arg3 pageSubType:(unsigned long long)arg4;
- (void)onExposeReplayWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onEnterReplayWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)enterReplay;
- (id)init;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

