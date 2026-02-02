//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveMilestoneLotteryInfo, FinderLiveMilestoneLotteryMetaInfo, MMFinderLiveTaskId, MMTimer, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, WCFinderLiveAudienceLogReporter;
@protocol MMFinderLiveMilestoneLotteryViewModelDelegate;

@interface MMFinderLiveMilestoneLotteryViewModel : NSObject
{
    _Bool _isAttendingVote;
    unsigned int _ongoingLotteryCountdownSeconds;
    id <MMFinderLiveMilestoneLotteryViewModelDelegate> _delegate;
    FinderLiveMilestoneLotteryMetaInfo *_currentLotteryMetaInfo;
    FinderLiveMilestoneLotteryInfo *_ongoingLotteryInfo;
    NSString *_currentDisplayingLotteryId;
    MMTimer *_ongoingLotteryCountdownTimer;
    MMFinderLiveTaskId *_taskId;
    NSMutableDictionary *_lotteryInfoCache;
    NSMutableDictionary *_lotteryWinnerCouponCache;
    NSMutableSet *_lotteryWinnerRedpacketStatusCache;
    NSString *_lastDisplayedLotteryId;
    NSDictionary *_colorConfigMap;
}

+ (id)pathForBigLotteryPacketPAG;
+ (id)pathForSmallLotteryPacketPAG;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *colorConfigMap; // @synthesize colorConfigMap=_colorConfigMap;
@property(nonatomic) _Bool isAttendingVote; // @synthesize isAttendingVote=_isAttendingVote;
@property(retain, nonatomic) NSString *lastDisplayedLotteryId; // @synthesize lastDisplayedLotteryId=_lastDisplayedLotteryId;
@property(retain, nonatomic) NSMutableSet *lotteryWinnerRedpacketStatusCache; // @synthesize lotteryWinnerRedpacketStatusCache=_lotteryWinnerRedpacketStatusCache;
@property(retain, nonatomic) NSMutableDictionary *lotteryWinnerCouponCache; // @synthesize lotteryWinnerCouponCache=_lotteryWinnerCouponCache;
@property(retain, nonatomic) NSMutableDictionary *lotteryInfoCache; // @synthesize lotteryInfoCache=_lotteryInfoCache;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMTimer *ongoingLotteryCountdownTimer; // @synthesize ongoingLotteryCountdownTimer=_ongoingLotteryCountdownTimer;
@property(nonatomic) unsigned int ongoingLotteryCountdownSeconds; // @synthesize ongoingLotteryCountdownSeconds=_ongoingLotteryCountdownSeconds;
@property(retain, nonatomic) NSString *currentDisplayingLotteryId; // @synthesize currentDisplayingLotteryId=_currentDisplayingLotteryId;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo *ongoingLotteryInfo; // @synthesize ongoingLotteryInfo=_ongoingLotteryInfo;
@property(retain, nonatomic) FinderLiveMilestoneLotteryMetaInfo *currentLotteryMetaInfo; // @synthesize currentLotteryMetaInfo=_currentLotteryMetaInfo;
@property(nonatomic) __weak id <MMFinderLiveMilestoneLotteryViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getColorByType:(unsigned long long)arg1 defaultColor:(id)arg2;
- (id)getD3Color;
- (id)getD1Color;
- (id)getD0Color;
- (id)getH2Color;
- (id)getH1Color;
- (id)getG5Color;
- (id)getG4Color;
- (id)getG3Color;
- (id)getG2Color;
- (id)getG1Color;
- (id)getG0Color;
- (id)getBG1Color;
- (id)getBG0Color;
- (id)liveTask;
@property(readonly, nonatomic) WCFinderLiveAudienceLogReporter *audienceLogReporter;
- (void)updateLotteryInfoInCache:(id)arg1;
- (void)showToastWithErrorMsg:(id)arg1;
- (_Bool)_onReserveLotterySuccess:(id)arg1;
- (void)_onAttendLotterySuccess:(id)arg1;
- (void)logLotteryInfo:(id)arg1;
- (void)_saveCouponOrRedpacketInfoInLotteryInfo:(id)arg1;
- (void)_saveRedpacketInfoWithLotteryId:(id)arg1 respList:(id)arg2;
- (void)_refreshRedPacketInfoWithLotteryId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_saveCouponInfoWithLotteryId:(id)arg1 respList:(id)arg2;
- (void)_refreshCouponInfoWithLotteryId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reserveLotteryWithNoticeId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestLotteryInfoWithLotteryId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshLotteryPrizeInfoWithLotteryId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshDisplayingLotteryPrizeInfoIfNeeded;
- (void)onAttendLotteryWithCommentSuccess;
- (void)gotoAccountProfileWithLotteryId:(id)arg1;
- (void)openGiftSelectionViewWithWithLotteryId:(id)arg1;
- (void)playReceiveGiftAnimationWithView:(id)arg1;
- (void)onWinnerResultViewDidAppearWithLotteryId:(id)arg1;
- (void)openCouponWithInfo:(id)arg1;
- (void)openRedPacketWebpage:(id)arg1;
- (void)handleAppResignActive;
- (void)handleAppBecomeActive;
- (unsigned int)getModifiedRemainTime;
- (void)onCountdownTimerFire;
- (void)rescheduleOngoingCountdownTimer;
- (id)getCommonCountdownAttributedString;
- (unsigned int)getOngoingLotteryCountdownSeconds;
- (void)syncLotteryCountdownTime:(_Bool)arg1;
- (_Bool)_doAttendOngoingLotteryWithChoice:(id)arg1;
- (_Bool)_doAttendOngoingLottery;
- (_Bool)_hasAttendOngoingLottery;
- (_Bool)_openCommentInputForOngoingLottery;
- (_Bool)openCommentInputForLottery:(id)arg1;
- (_Bool)doAttendLotteryWithId:(id)arg1 choice:(id)arg2;
- (_Bool)doAttendLotteryWithId:(id)arg1;
- (_Bool)hasAttendLottery:(id)arg1;
- (void)syncNecessaryValuesForLotteryInfo:(id)arg1 lotteryId:(id)arg2;
- (void)syncNecessaryValuesForMetaInfo:(id)arg1;
- (id)getPrizeCouponInfoWithLotteryId:(id)arg1;
- (id)getWinnerCouponInfoWithLotteryId:(id)arg1;
- (_Bool)isLotteryPrizeGiftAlreadyUsed:(id)arg1;
- (void)checkLotteryAccountFollowStateWithLotteryId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_doFollowAccountWithLotteryInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)followAccountAndAttendLotteryWithLotteryId:(id)arg1;
- (_Bool)isLotteryPrizeReceived:(id)arg1;
- (_Bool)isLotteryComputing:(id)arg1;
- (_Bool)isLotteryRunningOrComputing:(id)arg1;
- (_Bool)isOngoingLotteryRunningOrComputing;
- (id)getLotteryInfoByLotteryId:(id)arg1;
- (void)autoDisplayLotteryIfNeeded:(id)arg1;
- (id)getLiveKey;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

