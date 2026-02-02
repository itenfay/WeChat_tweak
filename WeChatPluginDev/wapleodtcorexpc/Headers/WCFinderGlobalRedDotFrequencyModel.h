//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WCFinderGlobalRedDotFrequencyReportHelper;

@interface WCFinderGlobalRedDotFrequencyModel : NSObject
{
    _Bool _findPageIsInExpose;
    _Bool _findPageInTabBar;
    NSMutableDictionary *_banStateMarkDic;
    NSMutableDictionary *_businessExposeDic;
    NSMutableDictionary *_exposeModelDic;
    NSMutableDictionary *_subBusinessBanQueueDic;
    CDUnknownBlockType _clickRedDotStayReportBlock;
    WCFinderGlobalRedDotFrequencyReportHelper *_reportHelper;
}

+ (unsigned long long)getFrequencyBusinessTypeFromCtrlInfo:(id)arg1;
+ (_Bool)shouldResetExposeAndBanFrequencyFromExposeModel:(id)arg1;
+ (_Bool)shouldResetBanFrequencyFromExposeModel:(id)arg1;
+ (_Bool)isInBanFrequencyFromExposeModel:(id)arg1;
+ (id)genEntryRedDotPathFromRowType:(long long)arg1;
+ (_Bool)globalRedDotReportWork;
+ (_Bool)globalRedDotIsFunction;
+ (id)genDicKeyFromPath:(id)arg1 businessType:(unsigned long long)arg2;
+ (id)getFindPageBusinessEntranceFromCtrlInfo:(id)arg1;
+ (id)getConfigBusinessTypeArrayFromPath:(id)arg1;
+ (_Bool)targetEntryIsOpenFromPath:(id)arg1;
+ (_Bool)ctrlInfoHasFindEntryRedDot:(id)arg1;
+ (id)findEntryTypeKeyPathValueDic;
+ (void)initialize;
+ (void)PBArrayAdd_subBusinessBanQueueDic;
+ (void)PBArrayAdd_exposeModelDic;
- (void).cxx_destruct;
@property(nonatomic) _Bool findPageInTabBar; // @synthesize findPageInTabBar=_findPageInTabBar;
@property(nonatomic) _Bool findPageIsInExpose; // @synthesize findPageIsInExpose=_findPageIsInExpose;
@property(retain, nonatomic) WCFinderGlobalRedDotFrequencyReportHelper *reportHelper; // @synthesize reportHelper=_reportHelper;
@property(copy, nonatomic) CDUnknownBlockType clickRedDotStayReportBlock; // @synthesize clickRedDotStayReportBlock=_clickRedDotStayReportBlock;
@property(retain, nonatomic) NSMutableDictionary *subBusinessBanQueueDic; // @synthesize subBusinessBanQueueDic=_subBusinessBanQueueDic;
@property(retain, nonatomic) NSMutableDictionary *exposeModelDic; // @synthesize exposeModelDic=_exposeModelDic;
@property(retain, nonatomic) NSMutableDictionary *businessExposeDic; // @synthesize businessExposeDic=_businessExposeDic;
@property(retain, nonatomic) NSMutableDictionary *banStateMarkDic; // @synthesize banStateMarkDic=_banStateMarkDic;
- (long long)getNextPunishMFromExposeModel:(id)arg1;
- (id)getCurrentExposeStageAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetCurrentExposeStageAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetCurrentBanCntAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetCurrentExposeCntAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)getCurrentPunishStageAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetCurrentPunishStageAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetExposeRedDotIdAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetCurrentIsNextCleanPunishAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetIsNextPunishAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetIsBanAsUseBusinessAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetNextPunishMAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetAccExpStartTimeAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (void)onRedDotExposeModelExposeCountIncreaseAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (void)onRedDotExposeModelResetExposeBanCountAtPath:(id)arg1 businessType:(unsigned long long)arg2 cleanAccType:(long long)arg3;
- (_Bool)shouldFetchClientFreqCtrlRedDotSyncAtPath:(id)arg1;
- (id)getSnsRedDotId;
- (void)updateSnsRedDotId:(id)arg1;
- (long long)getTargetExposeCountByCtrlInfo:(id)arg1;
- (void)updateTargetRedDotExposeActionFromCtrlInfo:(id)arg1 redDotId:(id)arg2;
- (long long)getCurrentSimulExposeBusinessCount;
- (_Bool)simulExposeStrategyOpen;
- (_Bool)_isLimitBySimulExposeFrom:(id)arg1 businessType:(unsigned long long)arg2 receiveCtrlInfo:(id)arg3;
- (_Bool)isLimitBySimulExposeFrom:(id)arg1 businessType:(unsigned long long)arg2;
- (_Bool)isLimitBySimulFromReceiveCtrlInfo:(id)arg1;
- (id)getFindPageInPenaltyBusinessInfo;
- (id)_checkWillBanRedDotPathFrom:(id)arg1 businessType:(unsigned long long)arg2 checkFindPage:(_Bool)arg3 receiveCtrlInfo:(id)arg4;
- (id)checkWillBanRedDotPathReceiveCtrlInfo:(id)arg1 checkFindPage:(_Bool)arg2;
- (id)checkWillBanRedDotPathFrom:(id)arg1 businessType:(unsigned long long)arg2 checkFindPage:(_Bool)arg3;
- (unsigned long long)checkWillBanRedDotPathFromReceiveNewCtrlInfo:(id)arg1;
- (void)_resetAllEntryConfig:(long long)arg1;
- (id)genSyncReddotFreqInfoFromPathArray:(id)arg1;
- (void)mergeReportInfoFromPath:(id)arg1 businessType:(unsigned long long)arg2 isBanState:(_Bool)arg3 toResModel:(id)arg4;
- (id)banShowRedDotAtRedDotPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)banShowRedDotAtRedDotPath:(id)arg1 fromCtrlInfo:(id)arg2;
- (id)banShowRedDotAtRedDotPath:(id)arg1;
- (void)findFriendPageTabDisappear;
- (void)findFriendPageViewWillAppear;
- (void)findFriendPageViewWillDisappear;
- (void)checkShouldResetByRedDotClickAtRowType:(long long)arg1 businessType:(unsigned long long)arg2;
- (void)triggerRedDotSimulAbortFromCtrlInfo:(id)arg1;
- (void)checkAndClearCurrentSimulRedDotConflict;
- (void)findPageWillClickAtRowType:(long long)arg1 withRedDot:(_Bool)arg2;
- (void)removeBanBusinessFromRedDotPath:(id)arg1 businessType:(unsigned long long)arg2;
- (void)addBanBusinessToEndFromRedDotPath:(id)arg1 businessType:(unsigned long long)arg2;
- (unsigned long long)getCurrentBanBusinessTypeFromRedDotPath:(id)arg1;
- (void)moveBanBusinessTypeFromRedDotPath:(id)arg1;
- (void)setupFrequencyConfig;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

