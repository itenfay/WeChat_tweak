//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FeedsPreviewLiveMultiStyleInfo, MMFinderJoinLiveContext, MMFinderLiveAccountInfo, MMFinderLiveConnectMicUsersInfo, MMFinderLiveContext, MMFinderLiveFansGroupInfo, MMFinderLiveFeedStreamMicLogic, MMFinderLiveShopContext, MMFinderLiveTaskPluginObj, MMLiveCDNPlayerView, MMLiveFeedStreamCommentDataFetchEngine, NSArray, NSData, NSMutableDictionary, NSString, WCFinderDataItem, WCFinderExtStatsReporter;

@interface MMLiveFeedStreamTask
{
    _Bool _isForceUseServerNickName;
    _Bool _isAssistantRole;
    int _commentScene;
    MMFinderLiveTaskPluginObj *plugin;
    unsigned long long _uiStyle;
    NSData *_cookie;
    MMFinderLiveFeedStreamMicLogic *_micLogic;
    MMLiveCDNPlayerView *_cdnPlayerView;
    FeedsPreviewLiveMultiStyleInfo *_multiStyleInfo;
    MMFinderLiveConnectMicUsersInfo *_allConnectedMicUsersInfo;
    MMFinderLiveFansGroupInfo *_fansGroupInfo;
    long long _liveLimitedLevel;
    NSArray *_liveAccountInfoList;
    long long _currentLiveAliasRoleType;
    NSArray *_currentSelfBadgeInfoArr;
    unsigned long long _livePaymentType;
    NSArray *_currentAnchorBadgeInfoList;
    MMFinderLiveContext *_liveContext;
    MMFinderLiveShopContext *_liveShopContext;
    WCFinderDataItem *_finderDataItem;
    MMFinderJoinLiveContext *_joinLiveContext;
    NSMutableDictionary *_exposeModelDict;
    WCFinderExtStatsReporter *_extStatReporter;
}

+ (void)filterNotSupportMsg:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderExtStatsReporter *extStatReporter; // @synthesize extStatReporter=_extStatReporter;
@property(retain, nonatomic) NSMutableDictionary *exposeModelDict; // @synthesize exposeModelDict=_exposeModelDict;
@property(retain, nonatomic) MMFinderJoinLiveContext *joinLiveContext; // @synthesize joinLiveContext=_joinLiveContext;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(retain, nonatomic) MMFinderLiveShopContext *liveShopContext; // @synthesize liveShopContext=_liveShopContext;
@property(retain, nonatomic) MMFinderLiveContext *liveContext; // @synthesize liveContext=_liveContext;
@property(retain, nonatomic) NSArray *currentAnchorBadgeInfoList; // @synthesize currentAnchorBadgeInfoList=_currentAnchorBadgeInfoList;
@property(nonatomic) unsigned long long livePaymentType; // @synthesize livePaymentType=_livePaymentType;
@property(retain, nonatomic) NSArray *currentSelfBadgeInfoArr; // @synthesize currentSelfBadgeInfoArr=_currentSelfBadgeInfoArr;
@property(nonatomic) _Bool isAssistantRole; // @synthesize isAssistantRole=_isAssistantRole;
@property(nonatomic) long long currentLiveAliasRoleType; // @synthesize currentLiveAliasRoleType=_currentLiveAliasRoleType;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSArray *liveAccountInfoList; // @synthesize liveAccountInfoList=_liveAccountInfoList;
@property(nonatomic) long long liveLimitedLevel; // @synthesize liveLimitedLevel=_liveLimitedLevel;
@property(retain, nonatomic) MMFinderLiveFansGroupInfo *fansGroupInfo; // @synthesize fansGroupInfo=_fansGroupInfo;
@property(nonatomic) _Bool isForceUseServerNickName; // @synthesize isForceUseServerNickName=_isForceUseServerNickName;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allConnectedMicUsersInfo; // @synthesize allConnectedMicUsersInfo=_allConnectedMicUsersInfo;
@property(retain, nonatomic) FeedsPreviewLiveMultiStyleInfo *multiStyleInfo; // @synthesize multiStyleInfo=_multiStyleInfo;
@property(retain, nonatomic) MMLiveCDNPlayerView *cdnPlayerView; // @synthesize cdnPlayerView=_cdnPlayerView;
@property(retain, nonatomic) MMFinderLiveFeedStreamMicLogic *micLogic; // @synthesize micLogic=_micLogic;
@property(retain, nonatomic) NSData *cookie; // @synthesize cookie=_cookie;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(retain, nonatomic) MMFinderLiveTaskPluginObj *plugin; // @synthesize plugin;
- (_Bool)canShowAnchorLocationInConnectMicScene;
- (_Bool)canShowLocationInConnectMicScene;
- (void)clean;
- (void)updateLiveMicExtFlag:(unsigned long long)arg1;
- (void)updateLiveExtFlag:(unsigned int)arg1;
- (id)liveShopContextCreateIfNotFound;
- (id)liveContextCreateIfNotFound;
- (void)updateLivePaymentTypeWithLiveInfo:(id)arg1;
- (void)updateAudioRoomScene:(unsigned long long)arg1;
- (void)setIsPureAudioMode:(_Bool)arg1;
- (void)receiveSEIAnchoInfo:(id)arg1;
- (void)recvSEI:(id)arg1;
- (void)updateFansGroupInfo:(id)arg1;
- (_Bool)enableTopComment;
- (_Bool)hideNickBySpamCheck;
- (id)getAccoutInfoForAliasRoleType:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *currentRoomRewardRecipientContactList;
@property(readonly, nonatomic) struct CGSize videoSize;
@property(readonly, nonatomic) long long cgiLiveScene;
@property(readonly, nonatomic) MMFinderLiveAccountInfo *currentLiveAccoutInfo;
- (void)onEnterLive;
- (void)updateIsInLive:(_Bool)arg1;
- (void)updateJoinLiveContext:(id)arg1;
@property(readonly, nonatomic) unsigned long long maxCachedCommentCount;
- (_Bool)liveFeedShowLikeView;
- (_Bool)liveFeedShowCommentView;
- (_Bool)liveFeedShowProductView;
- (unsigned long long)currentLiveScene;
@property(readonly, copy, nonatomic) NSString *finderUserName;
@property(readonly, nonatomic) NSString *objectNonceID;
@property(readonly, nonatomic) unsigned long long objectID;
- (void)initTaskPlugins;
@property(readonly, nonatomic) MMLiveFeedStreamCommentDataFetchEngine *feedStreamCommentFetchEngine;
- (id)createNewCommentFetchEngine;
- (id)createNewTaskId;
- (void)initDefaultData;
- (void)initLogic;
- (id)initWithDataItem:(id)arg1 scene:(int)arg2;
- (void)reportGenericClick:(id)arg1;
- (void)reportGenericExposeEnd:(int)arg1;
- (void)reportGenericExposeStart:(id)arg1;
- (id)getStatReportDataWithType:(int)arg1 dataItem:(id)arg2 value:(id)arg3 strValue:(id)arg4 feedActionSubType:(id)arg5;
- (void)reportExtStatsCgiReport:(int)arg1 value:(unsigned long long)arg2 strValue:(id)arg3 feedActionSubType:(int)arg4;
- (void)reportElementAction:(unsigned long long)arg1 eid:(id)arg2 eidUdfKv:(id)arg3;
- (void)reportPoiExposeClick;
- (void)reportPoiExposeEnd;
- (void)reportPoiExposeStart;
- (void)reportTapEducationExposeEnd;
- (void)reportTapEducationExposeStart;
- (void)reportLotteryClick;
- (void)reportLotteryExposeEnd;
- (void)reportLotteryExposeStart:(id)arg1;
- (void)reportSatisfactionQuestExposeEnd;
- (void)reportSatisfactionQuestExposeStart;
- (void)reportTapEnterLiveBtnExposeEnd;
- (void)reportTapEnterLiveBtnExposeStart;
- (void)reportBrandLogoExpose;
- (void)reportRecommendReasonExpose:(id)arg1 type:(int)arg2;
- (void)reportConnectPkExposeEnd;
- (void)reportConnectPkExposeStart;
- (void)reportProductCommentUnReadClick:(unsigned long long)arg1;
- (void)reportCommentUnReadExposeEnd:(unsigned long long)arg1;
- (void)reportCommentUnReadExposeStart;
- (void)reportProductCouponClick:(id)arg1;
- (void)reportProductCouponExposeEnd:(id)arg1;
- (void)reportProductCouponExposeStart:(id)arg1;
- (void)reportProductHotShopClick:(id)arg1;
- (void)reportProductHotShopExposeEnd:(id)arg1;
- (void)reportProductHotShopExposeStart:(id)arg1;
- (void)reportProductExpandCardClick:(id)arg1;
- (void)reportProductExpandCardExposeEnd:(id)arg1;
- (void)reportProductExpandCardExposeStart:(id)arg1;
- (void)reportProductCardExpandStyleClick:(id)arg1 productCardClkType:(unsigned long long)arg2;
- (void)reportProductCardExpandStyleExposeEnd:(id)arg1;
- (void)reportProductCardExpandStyleExposeStart:(id)arg1;
- (void)reportProductCardFoldStyleClick:(id)arg1;
- (void)reportProductCardFoldStyleExposeEnd:(id)arg1;
- (void)reportProductCardFoldStyleExposeStart:(id)arg1;
- (void)reportProductGuideClick:(id)arg1 tagType:(unsigned long long)arg2;
- (void)reportProductGuideExposeEnd:(id)arg1 tagType:(unsigned long long)arg2;
- (void)reportProductGuideExposeStart:(id)arg1 tagType:(unsigned long long)arg2;
- (void)reportExtStats;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

