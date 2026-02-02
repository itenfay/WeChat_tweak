//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, MemoryMappedKV, NSMutableSet, NSString, WCEliminatedSlotMMKV;

@interface BrandFinderLiveMgr
{
    _Bool _mainBizCellBrandLiveVisible;
    _Bool _redDotNotifyPullEnable;
    WCEliminatedSlotMMKV *_brandFinderLiveInfoSlotKV;
    WCEliminatedSlotMMKV *_brandFinderLiveClickFeedKV;
    WCEliminatedSlotMMKV *_feedExportIdSlotKV;
    NSMutableSet *_setRequestingUsername;
    WCEliminatedSlotMMKV *_brandLiveBarExposedKV;
    WCEliminatedSlotMMKV *_brandFinderLiveCellRedDotInfo;
    CMessageWrap *_enterTimeLineBizLiveMsg;
    unsigned long long _enterTimeMills;
    NSMutableSet *_setWaitingUsername;
    WCEliminatedSlotMMKV *_brandLiveExposedDateKV;
    MemoryMappedKV *_mappedKV;
}

+ (id)getUrlKey:(id)arg1;
+ (id)getTodayDateStr;
+ (long long)brandLiveBarShowTimePerDay;
+ (long long)brandLiveNotifyTimePerDay;
+ (_Bool)isSessionSwitchOpen;
+ (_Bool)isMsgCardSwitchOpen;
+ (_Bool)isLiveBarSwitchOpen;
+ (_Bool)isOftenReadBarSwitchOpen;
+ (_Bool)isBrandLiveABTestSwitchOpen;
+ (_Bool)isWebViewTopBarSwitchOpen;
+ (_Bool)isBizProfileSwitchOpen;
+ (unsigned int)defValueForLiveStatusControl;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(retain, nonatomic) WCEliminatedSlotMMKV *brandLiveExposedDateKV; // @synthesize brandLiveExposedDateKV=_brandLiveExposedDateKV;
@property(retain, nonatomic) NSMutableSet *setWaitingUsername; // @synthesize setWaitingUsername=_setWaitingUsername;
@property(nonatomic) unsigned long long enterTimeMills; // @synthesize enterTimeMills=_enterTimeMills;
@property(retain, nonatomic) CMessageWrap *enterTimeLineBizLiveMsg; // @synthesize enterTimeLineBizLiveMsg=_enterTimeLineBizLiveMsg;
@property(nonatomic) _Bool redDotNotifyPullEnable; // @synthesize redDotNotifyPullEnable=_redDotNotifyPullEnable;
@property(nonatomic) _Bool mainBizCellBrandLiveVisible; // @synthesize mainBizCellBrandLiveVisible=_mainBizCellBrandLiveVisible;
@property(retain, nonatomic) WCEliminatedSlotMMKV *brandFinderLiveCellRedDotInfo; // @synthesize brandFinderLiveCellRedDotInfo=_brandFinderLiveCellRedDotInfo;
@property(retain, nonatomic) WCEliminatedSlotMMKV *brandLiveBarExposedKV; // @synthesize brandLiveBarExposedKV=_brandLiveBarExposedKV;
@property(retain, nonatomic) NSMutableSet *setRequestingUsername; // @synthesize setRequestingUsername=_setRequestingUsername;
@property(retain, nonatomic) WCEliminatedSlotMMKV *feedExportIdSlotKV; // @synthesize feedExportIdSlotKV=_feedExportIdSlotKV;
@property(retain, nonatomic) WCEliminatedSlotMMKV *brandFinderLiveClickFeedKV; // @synthesize brandFinderLiveClickFeedKV=_brandFinderLiveClickFeedKV;
@property(retain, nonatomic) WCEliminatedSlotMMKV *brandFinderLiveInfoSlotKV; // @synthesize brandFinderLiveInfoSlotKV=_brandFinderLiveInfoSlotKV;
- (id)getUsernameWithLiveExportId:(id)arg1;
- (void)updateUsername:(id)arg1 withLiveExportId:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)saveMainColor:(id)arg1 forLiveCoverUrl:(id)arg2;
- (id)getMainCacheMainColorFromLiveCoverUrl:(id)arg1;
- (_Bool)isBizLiveInfoExposedInLiveBar:(id)arg1 liveExportId:(id)arg2;
- (void)markBrandLiveBarLiveExposed:(id)arg1 liveExportId:(id)arg2;
- (void)saveListBarResp:(id)arg1;
- (void)handlePreloadLiveBarResp:(id)arg1;
- (id)getCachedValidLiveBarLiveInfoArr;
- (void)tryPrefetchBrandLiveBarList;
- (id)finderLiveInfoWithUserName:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)handleSpecificBrandLiveResp:(id)arg1;
- (_Bool)isLiveInfoValidForLiveBar:(id)arg1;
- (id)getValidLiveBarLiveInfoArrFromResp:(id)arg1;
- (void)handleBrandLiveListResp:(id)arg1;
- (void)reportFinderLiveCgiResp:(id)arg1 succ:(_Bool)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)setBrandLiveBarClickLiveInfo:(id)arg1;
- (void)__fetchBrandLiveBarList;
- (void)forceFetchBrandLiveBarList;
- (void)tryFetchBrandLiveBarList;
- (unsigned int)refreshIntervalForLiveInfo:(id)arg1;
- (unsigned int)refreshIntervalForUsername:(id)arg1;
- (void)resetLiveInfoFeedExportId:(id)arg1;
- (void)batchUpdateBrandLiveWithResp:(id)arg1;
- (_Bool)updateBrandLive:(id)arg1 withFeedExportId:(id)arg2 refreshInterval:(unsigned int)arg3 liveSquareTitle:(id)arg4 liveSquareScene:(unsigned int)arg5 coverUrl:(id)arg6 userWeApp:(_Bool)arg7 weAppData:(id)arg8;
- (void)openLiveWithFinderLiveDataWrapper:(id)arg1 fromVC:(id)arg2 bizUsername:(id)arg3 bizReportExtraDataDict:(id)arg4 elementIdForReport:(id)arg5 eidUdfKv:(id)arg6 replayEntryType:(id)arg7;
- (void)openLiveWithUsername:(id)arg1 feedExportIdArray:(id)arg2 selectedIdIndex:(long long)arg3 fromVC:(id)arg4 extraData:(id)arg5 replayEntryType:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)getFinderDataItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openLiveWithUsername:(id)arg1 fromVC:(id)arg2 scene:(unsigned int)arg3 replayEntryType:(id)arg4 openParam:(id)arg5;
- (void)openLiveWithUsername:(id)arg1 fromVC:(id)arg2 scene:(unsigned int)arg3 replayEntryType:(id)arg4;
- (void)openLiveWithUsername:(id)arg1 liveInfo:(id)arg2 feedExportIdArray:(id)arg3 selectedIdIndex:(long long)arg4 fromVC:(id)arg5 scene:(unsigned int)arg6 replayEntryType:(id)arg7 openParam:(id)arg8;
- (void)openLiveWithUsername:(id)arg1 liveInfo:(id)arg2 feedExportIdArray:(id)arg3 selectedIdIndex:(long long)arg4 fromVC:(id)arg5 scene:(unsigned int)arg6 replayEntryType:(id)arg7;
- (void)openLiveWithUsername:(id)arg1 liveInfo:(id)arg2 fromVC:(id)arg3 scene:(unsigned int)arg4 replayEntryType:(id)arg5 openParam:(id)arg6;
- (void)batchAsyncGetBrandLiveInfo:(id)arg1 scene:(unsigned int)arg2;
- (void)asyncGetBrandLiveInfoMayDelayByRefreshInterval:(id)arg1 scene:(unsigned int)arg2;
- (void)asyncGetBrandLiveInfo:(id)arg1 scene:(unsigned int)arg2;
- (_Bool)isBrandLiving:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;
- (_Bool)hasReachedBrandRedDotNotifyTimeToday:(id)arg1;
- (_Bool)hasReachedBrandBarShowTimeTimeToday:(id)arg1 liveExportId:(id)arg2;
- (void)updateBrandRedDotNotifyTimeToday:(id)arg1;
- (void)updateBrandLiveBarShowTimeToday:(id)arg1 liveExportId:(id)arg2;
- (_Bool)isBizLiveInfoExposedInOftenReadBar:(id)arg1 liveExportId:(id)arg2;
- (void)markOftenReadBarLiveExposed:(id)arg1 liveExportId:(id)arg2;
- (void)clearBizLiveNotifyInfo;
- (_Bool)isForcePreposedOftenReadBrandLiving:(id)arg1;
- (void)setEnterBizTimeLineMsg:(id)arg1 enterTimeMills:(unsigned long long)arg2;
- (void)handleRedDotPullResp:(id)arg1;
- (void)pullRedDotBrandLiveInfo;
- (void)stopPullRedDotBrandLiveInfo;
- (void)__pullRedDotBrandliveInfoDelay;
- (void)startPullRedDotBrandLiveInfoIfNeed;
- (void)onBizMainCellVisibleChanged:(_Bool)arg1;
- (id)getBrandLiveNotifyRedDotInfo;
- (_Bool)hasBrandLiveNotifyRedDot;
- (void)updateMainCellLiveInfoWithResp:(id)arg1;
- (void)handleFinderLiveRedDotNotify:(id)arg1;
- (unsigned int)parseOpFlagFromContent:(id)arg1;
- (void)handleBizLiveNotifyNewXml:(id)arg1;
- (void)updateBrandOftenReadSvrSwitch:(_Bool)arg1;
- (_Bool)brandOftenReadSvrSwitchOpen;
- (void)updateBrandLiveControlInfo:(id)arg1;
- (unsigned int)brandLiveControlInfoBit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

