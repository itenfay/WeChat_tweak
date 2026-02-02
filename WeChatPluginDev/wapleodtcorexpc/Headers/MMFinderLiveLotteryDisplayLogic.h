//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveLotteryPacketDisplayLogic, MMFinderLivePageSheetNoticeView, MMFinderLiveTaskId, MMLiveLotteryDetailCardView, NSMutableDictionary, NSMutableSet, NSString;

@interface MMFinderLiveLotteryDisplayLogic : NSObject
{
    _Bool _isManualUpdatingLotteryRecord;
    CDUnknownBlockType _attendLotteryActionBlock;
    CDUnknownBlockType _getCurrentContentIsShowBlock;
    CDUnknownBlockType _willShowLotteryDetailCardBlock;
    CDUnknownBlockType _updatePanelLotteryBlock;
    CDUnknownBlockType _goPackageGiftBlock;
    CDUnknownBlockType _freeGameTeamUpBlock;
    NSString *_displayingLotteryId;
    MMFinderLiveLotteryPacketDisplayLogic *_lotteryPacketDisplayLogic;
    MMLiveLotteryDetailCardView *_lotteryDetailCardView;
    MMFinderLiveTaskId *_taskId;
    NSMutableDictionary *_displayLotteryDict;
    NSString *_recentDisplayedLotteryId;
    unsigned long long _checkLotteryStateTime;
    NSMutableSet *_mysteriousAttendLotteryFailTipsShowSet;
    MMFinderLivePageSheetNoticeView *_mysteriousNoticeView;
}

+ (void)updateRecentAttendLotteryCacheWithLotteryId:(id)arg1 taskId:(id)arg2 liveRoomKey:(id)arg3;
+ (void)updateRecentAttendLotteryCacheWithLotteryId:(id)arg1 taskId:(id)arg2;
+ (void)checkAndClearOverTimeLotteryCache;
+ (id)initRecentDisplayLotteryIdWithLiveTaskId:(id)arg1 liveRoomKey:(id)arg2;
+ (id)initRecentDisplayLotteryIdWithLiveTaskId:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLivePageSheetNoticeView *mysteriousNoticeView; // @synthesize mysteriousNoticeView=_mysteriousNoticeView;
@property(retain, nonatomic) NSMutableSet *mysteriousAttendLotteryFailTipsShowSet; // @synthesize mysteriousAttendLotteryFailTipsShowSet=_mysteriousAttendLotteryFailTipsShowSet;
@property(nonatomic) unsigned long long checkLotteryStateTime; // @synthesize checkLotteryStateTime=_checkLotteryStateTime;
@property(nonatomic) _Bool isManualUpdatingLotteryRecord; // @synthesize isManualUpdatingLotteryRecord=_isManualUpdatingLotteryRecord;
@property(retain, nonatomic) NSString *recentDisplayedLotteryId; // @synthesize recentDisplayedLotteryId=_recentDisplayedLotteryId;
@property(retain, nonatomic) NSMutableDictionary *displayLotteryDict; // @synthesize displayLotteryDict=_displayLotteryDict;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMLiveLotteryDetailCardView *lotteryDetailCardView; // @synthesize lotteryDetailCardView=_lotteryDetailCardView;
@property(retain, nonatomic) MMFinderLiveLotteryPacketDisplayLogic *lotteryPacketDisplayLogic; // @synthesize lotteryPacketDisplayLogic=_lotteryPacketDisplayLogic;
@property(retain, nonatomic) NSString *displayingLotteryId; // @synthesize displayingLotteryId=_displayingLotteryId;
@property(copy, nonatomic) CDUnknownBlockType freeGameTeamUpBlock; // @synthesize freeGameTeamUpBlock=_freeGameTeamUpBlock;
@property(copy, nonatomic) CDUnknownBlockType goPackageGiftBlock; // @synthesize goPackageGiftBlock=_goPackageGiftBlock;
@property(copy, nonatomic) CDUnknownBlockType updatePanelLotteryBlock; // @synthesize updatePanelLotteryBlock=_updatePanelLotteryBlock;
@property(copy, nonatomic) CDUnknownBlockType willShowLotteryDetailCardBlock; // @synthesize willShowLotteryDetailCardBlock=_willShowLotteryDetailCardBlock;
@property(copy, nonatomic) CDUnknownBlockType getCurrentContentIsShowBlock; // @synthesize getCurrentContentIsShowBlock=_getCurrentContentIsShowBlock;
@property(copy, nonatomic) CDUnknownBlockType attendLotteryActionBlock; // @synthesize attendLotteryActionBlock=_attendLotteryActionBlock;
- (void)onCancelLotteryRecord:(id)arg1;
- (void)onForceUpdateCurrentLotteryRecord:(long long)arg1;
- (void)onAttendLotteryRejectByHideIdentity;
- (_Bool)needCheckLotteryState;
- (void)manualUpdateLotteryRecord;
- (void)freeOrderUpdateLotteryInfoWithLotteryId:(id)arg1;
- (void)stopCheckAndUpdateLotteryRecord;
- (void)checkAndUpdateLotteryRecord;
- (void)updateRecentAttendLotteryCache;
- (_Bool)isCurrentContentShow;
- (void)willManualOpenLotteryDetailCard;
- (void)willUpdatePanelLottery:(id)arg1;
- (void)willAutoOpenLotteryDetailCard;
- (_Bool)needAutoOpenLotteryDetailCard;
- (void)showToastForCancelLotteryWithErrorType:(int)arg1 errorPage:(id)arg2;
- (void)onMMLiveLotteryDetailCardViewAnchorCancel;
- (void)onMMLiveLotteryDetailCardViewUserParticipate;
- (void)onMMLiveLotteryDetailCardViewClose;
- (void)onMMLiveLotteryDetailCardViewGoPackageGift:(id)arg1;
- (void)handleClaimMethodFreeGameTeamUp:(id)arg1;
- (void)joinLiveFollowLottery;
- (void)getLiveLotteryRecord:(id)arg1 lastBuffer:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (void)getLiveLotteryRecordWithLotteryId:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (id)finderLiveTask;
- (id)getLastSelfAttendLotteryInfo;
- (id)getRunningLotteryIdExcept:(id)arg1;
- (_Bool)isCurrentLotteryCompleted;
- (void)clearCurrentLottery;
- (void)updateDisplayingLotteryId;
- (void)checkSelfHasWinInLottery;
- (long long)getDisplayLogicState;
- (void)checkLotteryCancelState;
- (void)updateLiveLotteryInfoWithRefresh:(id)arg1 lotteryDrawInfo:(id)arg2;
- (void)updateLiveLotteryInfo:(id)arg1 lotteryDrawInfo:(id)arg2;
- (void)checkAndUpdateRecentLotteryId;
- (_Bool)isSelfAttendInLottery:(id)arg1;
- (void)updateLotteryDetailCardView:(id)arg1 checkState:(_Bool)arg2;
- (void)onGetFinderLiveLotteryInfoWithTaskId:(id)arg1 liveLotteryInfos:(id)arg2 lotteryDrawInfos:(id)arg3 fromJoinLive:(_Bool)arg4;
- (_Bool)updateAudienceAbnormalClosedPageInfo:(id)arg1 audienceAbnormalClosedPageInfo:(id)arg2;
- (_Bool)canShowCurrentLotteryyDetailCardView;
- (void)showMysteriousTipsIfNeededWithConfirmCompletion:(CDUnknownBlockType)arg1;
- (void)showCurrentLotteryyDetailCardView;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)onExitLive;
- (void)onEnterLive;
- (void)dealloc;
- (void)initRecentDisplayLotteryId;
- (id)initWithPacketDisplayLogic:(id)arg1 lotteryCardView:(id)arg2 taskId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

