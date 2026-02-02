//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IWCFinderLiveReplayReporterCallback <NSObject>
- (void)onRateLongPressChangeWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2 fromRate:(double)arg3;
- (void)onRateSelectWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2 rate:(double)arg3;
- (void)onRateBtnClickWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onRateBtnExposeWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onGreateTimeListItemClickWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onGreateTimeListViewExposeWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onGreateTimeBtnClickWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onGreateTimeBtnExposeWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onProgressBarGreateTimeDotSecondClickWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onProgressBarGreateTimePreviewPlayBtnClickWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onProgressBarGreateTimeDotClickWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onProgressBarGreateTimeDotExposeWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onDeleteReplayWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onClickToggleHiddenReplayWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2 hidden:(_Bool)arg3;
- (void)onClickComplainReplayWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onSeekReplayWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2 fromTimeMS:(unsigned long long)arg3 toTimeMS:(unsigned long long)arg4 isAtGreateTime:(_Bool)arg5;
- (void)onPauseReplayWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2 currentTime:(unsigned long long)arg3;
- (void)onMinimizeWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2 isInteractivePan:(_Bool)arg3;
- (void)onOrientationClicked:(long long)arg1 objectId:(NSString *)arg2 entryType:(NSString *)arg3;
- (void)onClickShareWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onStartWatchingReplayWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onExposeReplayWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2 objectType:(unsigned long long)arg3 pageSubType:(unsigned long long)arg4;
- (void)onLiveRecordDurationWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2 duration:(double)arg3;
- (void)onPaidSuccessWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2 amount:(long long)arg3 duration:(double)arg4;
- (void)onExposeRechargeSuccessWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onExposeRechargePanelWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2 pageSubType:(unsigned long long)arg3;
- (void)onClickReplayAgreementCancelButtonWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onClickReplayAgreementConfirmButtonWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onClickReplayPayConfirmButtonWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onClickReplayPayButtonWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onExposeReplayPayButtonWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onExposeReplayWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onEnterReplayWithObjectId:(NSString *)arg1 entryType:(NSString *)arg2;
- (void)onSharingToTarget:(unsigned long long)arg1 objectId:(NSString *)arg2 entryType:(NSString *)arg3 isFastForward:(_Bool)arg4 usernameList:(NSArray *)arg5;
- (void)onFinishWatching;
- (void)onPurchaseSucceededWithCoinAmount:(unsigned int)arg1 atTimeInMillisecond:(unsigned long long)arg2;
@end

