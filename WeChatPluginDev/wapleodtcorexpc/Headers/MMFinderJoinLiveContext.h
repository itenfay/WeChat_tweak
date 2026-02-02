//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CommentHintWordings, FinderBizUserInfo, FinderJoinLiveReq, FinderJoinLiveResp, FinderJoinLiveRespExtend, FinderJumpInfo, FinderLiveAdInfo, FinderLiveAnchorFlashSaleConfigInfo, FinderLiveAudienceEventInfo, FinderLiveBackgroundMusicInfo, FinderLiveCheerInfo, FinderLiveConcertRights, FinderLiveFlashSaleInfo, FinderLiveGamePlayTogether, FinderLiveHotCommentAnimationInfoList, FinderLiveInternalPageInfo, FinderLiveKtvExtInfo, FinderLiveKtvPlayerWaitList, FinderLiveMicInfo, FinderLiveModeInfo, FinderLivePackageExtInfo, FinderLivePromoteExtInfo, FinderLivePromoteMsgInfo, FinderLiveRecommendPreloadInfo, FinderLiveResourcePreloadInfo, FinderLiveRewardQuotaSwitchInfo, FinderLiveShopWindowAdItem, FinderLiveUserAttrUserSetting, FinderLiveUserInfo, FinderLocation, FinderShopCouponInfo, FinderWindowProductInfo, GameLiveRankInfo, GameRankSwitchInfo, LiveDescInfo, LiveRoomImg, LiveSdkInfo, MMFinderJoinLivePrefetchInfo, MMFinderLiveConcertInfo, MMFinderLiveFansGroupInfo, MMFinderLiveTaskId, NSArray, NSData, NSMutableArray, NSString, WCFinderLiveIdentityModel, WCFinderLiveInfo, WCLocationInfo;

@interface MMFinderJoinLiveContext : NSObject
{
    _Bool _enableCheerInClapMode;
    _Bool _secondaryDeviceCloseLiveSwitch;
    _Bool _enableDescExtend;
    _Bool _isAssistantRole;
    _Bool _shouldShowHasBoughtProductInAnchorLiveNotify;
    unsigned int _joinLiveFlag;
    unsigned int _shoppingNotAvailableFlag;
    unsigned int _anchorSwitchFlag;
    MMFinderLiveTaskId *_liveTaskId;
    FinderJoinLiveResp *_response;
    NSData *_liveCookies;
    LiveSdkInfo *_liveSDKInfo;
    WCFinderLiveInfo *_finderLiveInfo;
    FinderWindowProductInfo *_productInfo;
    FinderLiveUserInfo *_userInfo;
    FinderLiveMicInfo *_liveMicInfo;
    NSString *_joinLiveTips;
    NSArray *_templateInfoArr;
    WCFinderLiveIdentityModel *_liveIdentityModel;
    FinderLocation *_liveLocation;
    FinderLiveAdInfo *_liveAdInfo;
    FinderLiveCheerInfo *_liveCheerInfo;
    FinderLiveHotCommentAnimationInfoList *_hotCommentAnimationInfoList;
    FinderLiveShopWindowAdItem *_promotingAd;
    FinderLiveBackgroundMusicInfo *_bgMusicInfo;
    FinderBizUserInfo *_bizUserInfo;
    FinderShopCouponInfo *_promotingCoupon;
    GameRankSwitchInfo *_gameRankSwitchInfo;
    GameLiveRankInfo *_gameLiveRankInfo;
    FinderLivePromoteMsgInfo *_promoteMsgInfo;
    NSString *_ecSource;
    NSString *_liveDescription;
    LiveDescInfo *_liveDescInfo;
    unsigned long long _liveFunctionSwitchFlags;
    unsigned long long _anchorLiveExtFlag;
    FinderLiveAudienceEventInfo *_audienceEventInfo;
    MMFinderLiveFansGroupInfo *_fansGroupInfo;
    unsigned long long _joinLiveFromSrc;
    LiveRoomImg *_liveRoomImages;
    FinderLiveRewardQuotaSwitchInfo *_rewardQuotaSwitchInfo;
    FinderLivePackageExtInfo *_packageExtInfo;
    FinderLivePromoteExtInfo *_promoteExtInfo;
    FinderLiveInternalPageInfo *_liveInternalPageInfo;
    FinderLiveResourcePreloadInfo *_resourcePreloadInfo;
    FinderLiveGamePlayTogether *_gamePlayTogetherInfo;
    FinderLiveUserAttrUserSetting *_userSetting;
    NSString *_joinLiveTraceBuffer;
    FinderLiveFlashSaleInfo *_flashSaleInfo;
    FinderLiveAnchorFlashSaleConfigInfo *_anchorFlashSaleConfig;
    FinderLiveConcertRights *_concertRights;
    CommentHintWordings *_commentHintWordings;
    FinderLiveModeInfo *_liveModeInfo;
    FinderJumpInfo *_triggerLiteappInfo;
    MMFinderJoinLivePrefetchInfo *_prefetchInfo;
    NSMutableArray *_pageArray;
    FinderLiveKtvPlayerWaitList *_playerWaitList;
    FinderLiveKtvExtInfo *_ktvExtInfo;
    FinderJoinLiveReq *_request;
    WCLocationInfo *_liveLocationInfo;
    NSString *_reqCookiesMd5;
    NSString *_respCookiesMd5;
    MMFinderLiveConcertInfo *_liveConcertInfo;
    FinderLiveRecommendPreloadInfo *_recommendPreloadInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveRecommendPreloadInfo *recommendPreloadInfo; // @synthesize recommendPreloadInfo=_recommendPreloadInfo;
@property(retain, nonatomic) MMFinderLiveConcertInfo *liveConcertInfo; // @synthesize liveConcertInfo=_liveConcertInfo;
@property(retain, nonatomic) NSString *respCookiesMd5; // @synthesize respCookiesMd5=_respCookiesMd5;
@property(retain, nonatomic) NSString *reqCookiesMd5; // @synthesize reqCookiesMd5=_reqCookiesMd5;
@property(retain, nonatomic) WCLocationInfo *liveLocationInfo; // @synthesize liveLocationInfo=_liveLocationInfo;
@property(retain, nonatomic) FinderJoinLiveReq *request; // @synthesize request=_request;
@property(nonatomic) _Bool shouldShowHasBoughtProductInAnchorLiveNotify; // @synthesize shouldShowHasBoughtProductInAnchorLiveNotify=_shouldShowHasBoughtProductInAnchorLiveNotify;
@property(retain, nonatomic) FinderLiveKtvExtInfo *ktvExtInfo; // @synthesize ktvExtInfo=_ktvExtInfo;
@property(retain, nonatomic) FinderLiveKtvPlayerWaitList *playerWaitList; // @synthesize playerWaitList=_playerWaitList;
@property(retain, nonatomic) NSMutableArray *pageArray; // @synthesize pageArray=_pageArray;
@property(retain, nonatomic) MMFinderJoinLivePrefetchInfo *prefetchInfo; // @synthesize prefetchInfo=_prefetchInfo;
@property(retain, nonatomic) FinderJumpInfo *triggerLiteappInfo; // @synthesize triggerLiteappInfo=_triggerLiteappInfo;
@property(retain, nonatomic) FinderLiveModeInfo *liveModeInfo; // @synthesize liveModeInfo=_liveModeInfo;
@property(retain, nonatomic) CommentHintWordings *commentHintWordings; // @synthesize commentHintWordings=_commentHintWordings;
@property(retain, nonatomic) FinderLiveConcertRights *concertRights; // @synthesize concertRights=_concertRights;
@property(retain, nonatomic) FinderLiveAnchorFlashSaleConfigInfo *anchorFlashSaleConfig; // @synthesize anchorFlashSaleConfig=_anchorFlashSaleConfig;
@property(retain, nonatomic) FinderLiveFlashSaleInfo *flashSaleInfo; // @synthesize flashSaleInfo=_flashSaleInfo;
@property(retain, nonatomic) NSString *joinLiveTraceBuffer; // @synthesize joinLiveTraceBuffer=_joinLiveTraceBuffer;
@property(retain, nonatomic) FinderLiveUserAttrUserSetting *userSetting; // @synthesize userSetting=_userSetting;
@property(retain, nonatomic) FinderLiveGamePlayTogether *gamePlayTogetherInfo; // @synthesize gamePlayTogetherInfo=_gamePlayTogetherInfo;
@property(retain, nonatomic) FinderLiveResourcePreloadInfo *resourcePreloadInfo; // @synthesize resourcePreloadInfo=_resourcePreloadInfo;
@property(retain, nonatomic) FinderLiveInternalPageInfo *liveInternalPageInfo; // @synthesize liveInternalPageInfo=_liveInternalPageInfo;
@property(retain, nonatomic) FinderLivePromoteExtInfo *promoteExtInfo; // @synthesize promoteExtInfo=_promoteExtInfo;
@property(retain, nonatomic) FinderLivePackageExtInfo *packageExtInfo; // @synthesize packageExtInfo=_packageExtInfo;
@property(retain, nonatomic) FinderLiveRewardQuotaSwitchInfo *rewardQuotaSwitchInfo; // @synthesize rewardQuotaSwitchInfo=_rewardQuotaSwitchInfo;
@property(retain, nonatomic) LiveRoomImg *liveRoomImages; // @synthesize liveRoomImages=_liveRoomImages;
@property(nonatomic) unsigned long long joinLiveFromSrc; // @synthesize joinLiveFromSrc=_joinLiveFromSrc;
@property(retain, nonatomic) MMFinderLiveFansGroupInfo *fansGroupInfo; // @synthesize fansGroupInfo=_fansGroupInfo;
@property(retain, nonatomic) FinderLiveAudienceEventInfo *audienceEventInfo; // @synthesize audienceEventInfo=_audienceEventInfo;
@property(nonatomic) unsigned long long anchorLiveExtFlag; // @synthesize anchorLiveExtFlag=_anchorLiveExtFlag;
@property(nonatomic) unsigned long long liveFunctionSwitchFlags; // @synthesize liveFunctionSwitchFlags=_liveFunctionSwitchFlags;
@property(nonatomic) unsigned int anchorSwitchFlag; // @synthesize anchorSwitchFlag=_anchorSwitchFlag;
@property(nonatomic) _Bool isAssistantRole; // @synthesize isAssistantRole=_isAssistantRole;
@property(nonatomic) _Bool enableDescExtend; // @synthesize enableDescExtend=_enableDescExtend;
@property(retain, nonatomic) LiveDescInfo *liveDescInfo; // @synthesize liveDescInfo=_liveDescInfo;
@property(retain, nonatomic) NSString *liveDescription; // @synthesize liveDescription=_liveDescription;
@property(nonatomic) _Bool secondaryDeviceCloseLiveSwitch; // @synthesize secondaryDeviceCloseLiveSwitch=_secondaryDeviceCloseLiveSwitch;
@property(retain, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(retain, nonatomic) FinderLivePromoteMsgInfo *promoteMsgInfo; // @synthesize promoteMsgInfo=_promoteMsgInfo;
@property(retain, nonatomic) GameLiveRankInfo *gameLiveRankInfo; // @synthesize gameLiveRankInfo=_gameLiveRankInfo;
@property(retain, nonatomic) GameRankSwitchInfo *gameRankSwitchInfo; // @synthesize gameRankSwitchInfo=_gameRankSwitchInfo;
@property(retain, nonatomic) FinderShopCouponInfo *promotingCoupon; // @synthesize promotingCoupon=_promotingCoupon;
@property(retain, nonatomic) FinderBizUserInfo *bizUserInfo; // @synthesize bizUserInfo=_bizUserInfo;
@property(retain, nonatomic) FinderLiveBackgroundMusicInfo *bgMusicInfo; // @synthesize bgMusicInfo=_bgMusicInfo;
@property(retain, nonatomic) FinderLiveShopWindowAdItem *promotingAd; // @synthesize promotingAd=_promotingAd;
@property(retain, nonatomic) FinderLiveHotCommentAnimationInfoList *hotCommentAnimationInfoList; // @synthesize hotCommentAnimationInfoList=_hotCommentAnimationInfoList;
@property(retain, nonatomic) FinderLiveCheerInfo *liveCheerInfo; // @synthesize liveCheerInfo=_liveCheerInfo;
@property(retain, nonatomic) FinderLiveAdInfo *liveAdInfo; // @synthesize liveAdInfo=_liveAdInfo;
@property(retain, nonatomic) FinderLocation *liveLocation; // @synthesize liveLocation=_liveLocation;
@property(retain, nonatomic) WCFinderLiveIdentityModel *liveIdentityModel; // @synthesize liveIdentityModel=_liveIdentityModel;
@property(nonatomic) _Bool enableCheerInClapMode; // @synthesize enableCheerInClapMode=_enableCheerInClapMode;
@property(nonatomic) unsigned int shoppingNotAvailableFlag; // @synthesize shoppingNotAvailableFlag=_shoppingNotAvailableFlag;
@property(nonatomic) unsigned int joinLiveFlag; // @synthesize joinLiveFlag=_joinLiveFlag;
@property(retain, nonatomic) NSArray *templateInfoArr; // @synthesize templateInfoArr=_templateInfoArr;
@property(retain, nonatomic) NSString *joinLiveTips; // @synthesize joinLiveTips=_joinLiveTips;
@property(retain, nonatomic) FinderLiveMicInfo *liveMicInfo; // @synthesize liveMicInfo=_liveMicInfo;
@property(retain, nonatomic) FinderLiveUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(retain, nonatomic) WCFinderLiveInfo *finderLiveInfo; // @synthesize finderLiveInfo=_finderLiveInfo;
@property(retain, nonatomic) LiveSdkInfo *liveSDKInfo; // @synthesize liveSDKInfo=_liveSDKInfo;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) FinderJoinLiveResp *response; // @synthesize response=_response;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (id)description;
@property(readonly, nonatomic) _Bool allowPreloadOnlineMember;
@property(readonly, nonatomic) _Bool allowPreloadECConfig;
@property(readonly, nonatomic) _Bool allowPreloadShopShelfList;
@property(readonly, nonatomic) _Bool allowPreloadRewardGiftList;
@property(readonly, nonatomic) unsigned int prefetchMoreLiveWatchDuration;
@property(readonly, nonatomic) _Bool prefetchMoreLiveSwitch;
@property(readonly, nonatomic) FinderJoinLiveRespExtend *joinLiveRespExtend;
@property(readonly, nonatomic) unsigned int joinliveGetliverelatedlistPullType;
@property(readonly, nonatomic) _Bool allowFetchRecommendRelateList;
- (void)updateJoinLiveContextWithRequest:(id)arg1 response:(id)arg2 lastJoinLiveContext:(id)arg3 canOverrideGlobalValues:(_Bool)arg4;
- (id)initWithLiveTaskId:(id)arg1 request:(id)arg2 response:(id)arg3 fromSrc:(unsigned long long)arg4 lastJoinLiveContext:(id)arg5 canOverrideGlobalValues:(_Bool)arg6;
- (id)initWithLiveTaskId:(id)arg1 request:(id)arg2 response:(id)arg3 fromSrc:(unsigned long long)arg4 lastJoinLiveContext:(id)arg5;

@end

