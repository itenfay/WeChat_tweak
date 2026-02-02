//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderRedDotDictionaryHelper;

@interface WCFinderRedDotMgr
{
    _Bool _GCDDicSafeThreadStrategy;
    WCFinderRedDotDictionaryHelper *_pathUuidsDic;
    WCFinderRedDotDictionaryHelper *_uuidCtrlInfosDic;
    WCFinderRedDotDictionaryHelper *_swipeRevokeDic;
}

+ (id)getShouldClearTimelineRedDotPath:(id)arg1;
+ (id)buildDiscoveryForEntrance:(id)arg1 targetPath:(id)arg2;
+ (void)transformLbsLifeNearbyMessageUnread:(long long)arg1;
+ (void)transformLbsLifeNearbyFootprint;
+ (void)tryMigrateNearbyReddotToLbsLife;
+ (void)transformNearbyMessageUnread:(long long)arg1;
+ (void)buildFinderSFCreateFinderRedDot:(id)arg1;
+ (void)buildFinderSFProfileRedDot:(id)arg1;
+ (void)buildFinderSFRedDot:(id)arg1;
+ (void)buildFinderPostAuthorityRedDot;
+ (_Bool)canBuildFinderLocalRedDot;
+ (void)buildMemberUnReadMentionRedDotForUsername:(id)arg1;
+ (void)buildFinderUnReadMentionRedDotForUsername:(id)arg1;
+ (void)buildFinderTemplateCameraRedDot;
+ (void)buildFinderSettingOriginalEntryRedDot;
+ (void)buildWxPrivateMsgRedDot:(unsigned long long)arg1 finderUsername:(id)arg2;
+ (void)buildFinderSayHelloRedDot:(id)arg1;
+ (void)_mergePrivateChainByTotalCount:(long long)arg1 showInfos:(id)arg2 reddotCtrlInfo:(id)arg3 curPersonalCenterShowInfo:(id)arg4;
+ (void)buildFinderPrivateMsgRedDot:(unsigned long long)arg1 username:(id)arg2;
+ (id)mockLbsLifeNearbyFooterprintClearShowInfo;
+ (id)mockLbsLifeNearbyTabShowInfo;
+ (id)mockLbsLifeEntanceShowInfo;
+ (id)mockNearbyPeopleUnreadBubbleShowInfo;
+ (id)mockNearbyEntanceShowInfo;
+ (id)mockSayHelloRedDot;
+ (id)mockWXPrivateRightMsgRedDotByBriefing:(id)arg1;
+ (id)mockWXPrivateMsgRedDot:(unsigned long long)arg1;
+ (id)mockWXFinderGroupPrivateMsgRedDot:(unsigned long long)arg1;
+ (id)mockFinderPrivateMsgRedDot:(unsigned long long)arg1;
+ (id)mockAuthorProfileMemberNotifyShowInfosForUsername:(id)arg1;
+ (id)mockAuthorProfileNotifyShowInfosForUsername:(id)arg1;
+ (id)mockTLPersonalCenterShowInfoByCount:(unsigned long long)arg1;
+ (id)mockIndependentTLPersonalCenterShowInfo;
+ (id)mockTLPersonalCenterShowInfo;
+ (id)mockCameraShowInfo;
+ (id)mockCreateFinderBannerShowInfo;
+ (id)mockProfileBannerShowInfo;
+ (id)mockPersonalCenterShowInfo;
+ (id)mockSettingFinderCameraTemplateShowInfo;
+ (id)mockSettingOriginalShowInfo;
+ (id)mockEntranceMentionShowInfoByCount:(long long)arg1;
+ (id)mockEntanceShowInfo;
- (void).cxx_destruct;
@property(nonatomic) _Bool GCDDicSafeThreadStrategy; // @synthesize GCDDicSafeThreadStrategy=_GCDDicSafeThreadStrategy;
@property(retain, nonatomic) WCFinderRedDotDictionaryHelper *swipeRevokeDic; // @synthesize swipeRevokeDic=_swipeRevokeDic;
@property(retain, nonatomic) WCFinderRedDotDictionaryHelper *uuidCtrlInfosDic; // @synthesize uuidCtrlInfosDic=_uuidCtrlInfosDic;
@property(retain, nonatomic) WCFinderRedDotDictionaryHelper *pathUuidsDic; // @synthesize pathUuidsDic=_pathUuidsDic;
- (unsigned long long)ctrlInfoTypeAtPath:(id)arg1;
- (unsigned long long)showInfoTypeAtPath:(id)arg1;
- (void)disposeRedDotCtrlInfo:(id)arg1 subReasonType:(unsigned long long)arg2;
- (void)disposeRedDotCtrlInfoByTipsUuid:(id)arg1 subReasonType:(unsigned long long)arg2;
- (void)disposeRedDotCtrlInfoByTipsUuid:(id)arg1;
- (void)disposeGroupTipsWithGroupId:(id)arg1;
- (void)disposeRedDotIgnoreClearTypeAtPath:(id)arg1;
- (_Bool)disposeRedDotAtPath:(id)arg1 subReasonType:(unsigned long long)arg2;
- (_Bool)disposeRedDotAtPath:(id)arg1 fromCtrlInfo:(id)arg2 subReasonType:(unsigned long long)arg3;
- (_Bool)disposeRedDotAtPath:(id)arg1;
- (long long)getCurMemberUnreadCountByUsername:(id)arg1 fromRedDotPath:(_Bool)arg2;
- (long long)getCurFinderPrivateMsgCountByUsername:(id)arg1 fromRedDotPath:(_Bool)arg2;
- (long long)getCurFinderUnreadCountByUsername:(id)arg1 fromRedDotPath:(_Bool)arg2;
- (long long)getWXPrivateMsgUnreadCount;
- (long long)getCurWXUnreadCount;
- (id)getAllRedDotCtrlInfoAtPath:(id)arg1;
- (id)currentCtrlInfoAtPath:(id)arg1;
- (id)currentCtrlInfoAtPath:(id)arg1 ignoreNMFrequency:(_Bool)arg2;
- (id)currentShowInfoAtPath:(id)arg1;
- (void)saveSelfUuidCtrlInfosDic;
- (_Bool)shouldShowRedDotAtPath:(id)arg1;
- (void)addNewRedDotCtrlInfo:(id)arg1;
- (id)ctrlInfoWithTipsUuid:(id)arg1;
- (id)ctrlInfoWithType:(unsigned long long)arg1;
- (void)clearSameTypeCtrlInfoType:(unsigned long long)arg1;
- (void)revokeRedDotByViewFeedsIndex:(long long)arg1 commentScene:(int)arg2;
- (_Bool)revokeRedDotPathInfo:(id)arg1 isOnlyWhiteList:(_Bool)arg2 whiteListTips:(id)arg3;
- (void)clearSameRevokeIdCtrlInfo:(id)arg1;
- (id)getRedDotCtrlInfoWithRevokeId:(id)arg1;
- (void)redDotInfoInvalidCheck;
- (void)loadLocalRedDotByFinderUsername:(id)arg1;
- (void)loadLocalRedDotByFinderUsername;
- (void)cleanCurrentData;
- (_Bool)updateWXRedDotInfo:(id)arg1;
- (void)saveNewTipsBusinessInfos:(id)arg1;
- (void)initPiplineFilter;
- (void)handleFinderUsernameChangeLogic;
- (void)resetDataSourceByFinderUsername:(id)arg1;
- (id)init;
- (id)conflictPathArray;
- (void)onRevokePreviousTipsWithTipsInfo:(id)arg1;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)onSettingExtChanged:(long long)arg1;
- (void)onFriendAssistUnreadCountChanged;
- (void)transfromOldNewTipsInfoToFinderTips;
- (void)buildFromTipsInfo:(id)arg1 ctrlType:(unsigned long long)arg2;
- (void)transformNearbyFootprint;
- (id)mockNearbyPeopleFooterprintClearShowInfo;
- (id)mockNearbyPeopleTabShowInfo;
- (id)mockNearbyLiveTabShowInfo;
- (id)mockNearbyEntranceLiveShowInfo;
- (id)mockLiveEntranceRedDot;
- (id)mockWxPrivateMsgRedDot;
- (id)mockFinderPrefetchBuildShowInfo;
- (id)mockStreamProfileSettingShowInfo;
- (id)mockFinderLiveAnchorTaskShowInfo;
- (id)mockTabShowInfo;
- (id)mockTLPostCameraInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

