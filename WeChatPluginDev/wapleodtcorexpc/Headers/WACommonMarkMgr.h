//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WACommonMarkMgr
{
    NSMutableDictionary *m_commonMarkDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *m_commonMarkDict; // @synthesize m_commonMarkDict;
- (_Bool)isForceShowCapsuleViewWithAppid:(id)arg1;
- (void)markWeAppForceShowCapsuleView:(id)arg1;
- (_Bool)isEnableWeAppDiscoveryEntranceSimulatedNative;
- (void)markWeAppDiscoveryEntranceSimulatedNativeEnabled:(_Bool)arg1;
- (_Bool)weappAllContactSupportTransparentBackground;
- (void)markWeAppAllContactSupportTransparentBackground:(_Bool)arg1;
- (long long)weappAllAppServiceType;
- (void)markWeAppAllAppServiceType:(long long)arg1;
- (_Bool)isEnableUpdateContactEveryTime;
- (void)markWeAppUpdateContactEveryTime:(_Bool)arg1;
- (unsigned int)WAAppAllContactVersion;
- (void)markWeAppAllContactVersion:(unsigned int)arg1;
- (unsigned long long)WAAppContactVersionForUsername:(id)arg1 appid:(id)arg2;
- (void)markWeAppContactVersion:(unsigned long long)arg1 forUsername:(id)arg2 appid:(id)arg3;
- (long long)WAAppAllScene;
- (void)markWeAppAllScene:(long long)arg1;
- (_Bool)isWeAppAllEmbedModeAllowFullScreen;
- (void)markWeAppAllEmbedModeAllowFullScreen:(_Bool)arg1;
- (_Bool)isWeAppAllEmbedModeOpen;
- (void)markWeAppAllEmbedModeOpenState:(_Bool)arg1;
- (_Bool)isWeAppAllSheetModeOpen;
- (void)markWeAppAllSheetModeOpenState:(_Bool)arg1;
- (_Bool)isWeAppAllRoute13542To27220Open;
- (void)markWeAppAllRoute13542To27220:(_Bool)arg1;
- (_Bool)isWeAppAllLeakModeOpen;
- (void)markWeAppAllLeakModeOpenState:(_Bool)arg1;
- (_Bool)isWeAppDevelopModeOpen:(id)arg1;
- (void)markWeAppDevelopModeOpenState:(id)arg1;
- (_Bool)isWeAppExperienceModeOpen:(id)arg1;
- (void)markWeAppExperienceModeOpenState:(id)arg1;
- (_Bool)isWeAppAllJumpCycleKeepContextPageOpen;
- (void)markWeAppAllJumpCycleKeepContextPage:(_Bool)arg1;
- (_Bool)isWeAppAllExperienceModeOpen;
- (void)markWeAppAllExperienceModeOpenState:(_Bool)arg1;
- (_Bool)isMPShortLinkGlobalHighLightEnabled;
- (void)markMPShortLinkGlobalHighLightEnable:(_Bool)arg1;
- (_Bool)isBanAllWeAppShareImageWithEntrance;
- (void)markBanAllWeAppShareImageWithEntrance:(_Bool)arg1;
- (_Bool)isBanAllWeAppShareToFriend;
- (void)markBanAllWeAppShareToFriend:(_Bool)arg1;
- (_Bool)isWAFavMsgHasVisit;
- (void)markWAFavMsgHasVisit:(_Bool)arg1;
- (_Bool)shouldCheckAllUsrDataOnClear;
- (void)markShouldCheckAllUsrDataOnClear:(_Bool)arg1;
- (void)clearWAAppPublicResLastGetRecordTime;
- (void)markWAAppPublicResLastGetRecordTime;
- (unsigned int)WAAppPublicResLastGetRecordTime;
- (_Bool)getWAAuthHasSetDeny;
- (void)markWAAuthHasSetDeny;
- (void)clearWAAppLastGetNearByUsageBitRecordTime;
- (void)markWAAppLastGetNearByUsageBitRecordTime;
- (unsigned int)WAAppLastGetNearByUsageBitRecordTime;
- (unsigned int)WAHearBeatSyncVersionTime;
- (void)markWAHeartBeatSyncVersionTime;
- (unsigned int)WAAppLastReloadPerDayUsageRecordTime;
- (void)clearWAReloadPerDayUsageRecordTime;
- (void)markWAReloadPerDayUsageRecordTime;
- (unsigned int)WAAppLastGetUsageRecordTime;
- (void)markWAGetUsageRecordTime;
- (void)markWAAppViewMainFrameTaskBarState:(_Bool)arg1;
- (_Bool)WAAppHadViewMainFrameTaskBar;
- (void)markWAAppFirstShareDevWeAppWithAppType:(unsigned int)arg1 hadShare:(_Bool)arg2;
- (_Bool)WAAppFirstShareDevWeAppWithAppType:(unsigned int)arg1;
- (void)markWAAppFirstStarState:(_Bool)arg1;
- (_Bool)WAAppHadAddStar;
- (void)markWAAppDeskTopNearByCellActivateState:(_Bool)arg1;
- (_Bool)WAAppDeskTopNearByCellActivateState;
- (double)WAAppLastTaskBarFetchTime;
- (void)markTaskBarFetchTime;
- (void)resetTaskBarFetchTime;
- (void)markWAAppSweepPublicResTime;
- (double)WAAppSweepPublicResTime;
- (void)setUserGuideShowed:(unsigned int)arg1;
- (_Bool)isUserGuideShowed:(unsigned int)arg1;
- (void)markWAAppActivateState:(_Bool)arg1;
- (_Bool)WAAppActivateState;
- (void)writeMarkDict2FileWithKeyName:(id)arg1;
- (void)loadCommonMark;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

