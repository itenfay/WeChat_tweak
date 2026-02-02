//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderBizUserInfo, FinderLiveAbnormalClosedPageInfo, FinderLiveContact, FinderLiveErrorPage, FinderLiveExtFlag, FinderLiveSyncAnchorCloseLiveGuideInfoResp, MMFinderLiveTaskId, NSData, NSString, WCFinderGetLiveMsgCGI, WCFinderPostLiveLikeCGI;

@interface MMFinderLiveContext : NSObject
{
    _Bool _showNewStyleHeatValueStyle;
    _Bool _enableRewardQuota;
    _Bool _currentWecoinBalanceUpdated;
    _Bool _hasShowGiftMultipleSendTips;
    _Bool _enableDisplayFollowBtn;
    unsigned int _liveExtFlag;
    unsigned int _liveFlag;
    unsigned int _bizFriendFollowCount;
    unsigned int _initialRemainTime;
    unsigned int _purchaseLivePreviewDuration;
    unsigned int _anchorTaskGuideType;
    MMFinderLiveTaskId *_taskId;
    FinderLiveContact *_selfContact;
    FinderLiveContact *_anchorContact;
    FinderLiveExtFlag *_liveExtFlagExt;
    unsigned long long _liveMicExtFlag;
    unsigned long long _extShowFlag;
    unsigned long long _backendAnchorStatusFlag;
    unsigned long long _askProductQuestionExtFlag;
    WCFinderGetLiveMsgCGI *_lastGetLiveMsgCGI;
    WCFinderPostLiveLikeCGI *_lastPostLiveLikeCGI;
    FinderLiveErrorPage *_liveErrorPage;
    FinderLiveAbnormalClosedPageInfo *_audienceAbnormalClosedPageInfo;
    FinderBizUserInfo *_bindedBizUserInfo;
    FinderBizUserInfo *_displayedBizUserInfo;
    NSData *_recommendUserSendGiftInfoCtx;
    NSData *_packageGiftRecommendInfoCtx;
    FinderLiveSyncAnchorCloseLiveGuideInfoResp *_anchorCloseLiveGuideInfo;
    unsigned long long _currentRewardQuota;
    unsigned long long _currentWecoinBalance;
    double _consumeQuotaBalance;
    double _historyConsumeQuotaBalance;
    NSString *_consumeQuotaVerifyUrl;
    unsigned long long _lastFlowSignHistoryRewardQuota;
    long long _purchaseLivePreviewType;
    NSString *_anchorTaskGuideId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int anchorTaskGuideType; // @synthesize anchorTaskGuideType=_anchorTaskGuideType;
@property(retain, nonatomic) NSString *anchorTaskGuideId; // @synthesize anchorTaskGuideId=_anchorTaskGuideId;
@property(nonatomic) unsigned int purchaseLivePreviewDuration; // @synthesize purchaseLivePreviewDuration=_purchaseLivePreviewDuration;
@property(nonatomic) long long purchaseLivePreviewType; // @synthesize purchaseLivePreviewType=_purchaseLivePreviewType;
@property(nonatomic) _Bool enableDisplayFollowBtn; // @synthesize enableDisplayFollowBtn=_enableDisplayFollowBtn;
@property(nonatomic) _Bool hasShowGiftMultipleSendTips; // @synthesize hasShowGiftMultipleSendTips=_hasShowGiftMultipleSendTips;
@property(nonatomic) unsigned long long lastFlowSignHistoryRewardQuota; // @synthesize lastFlowSignHistoryRewardQuota=_lastFlowSignHistoryRewardQuota;
@property(nonatomic) _Bool currentWecoinBalanceUpdated; // @synthesize currentWecoinBalanceUpdated=_currentWecoinBalanceUpdated;
@property(retain, nonatomic) NSString *consumeQuotaVerifyUrl; // @synthesize consumeQuotaVerifyUrl=_consumeQuotaVerifyUrl;
@property(nonatomic) double historyConsumeQuotaBalance; // @synthesize historyConsumeQuotaBalance=_historyConsumeQuotaBalance;
@property(nonatomic) double consumeQuotaBalance; // @synthesize consumeQuotaBalance=_consumeQuotaBalance;
@property(nonatomic) unsigned long long currentWecoinBalance; // @synthesize currentWecoinBalance=_currentWecoinBalance;
@property(nonatomic) unsigned long long currentRewardQuota; // @synthesize currentRewardQuota=_currentRewardQuota;
@property(nonatomic) _Bool enableRewardQuota; // @synthesize enableRewardQuota=_enableRewardQuota;
@property(retain, nonatomic) FinderLiveSyncAnchorCloseLiveGuideInfoResp *anchorCloseLiveGuideInfo; // @synthesize anchorCloseLiveGuideInfo=_anchorCloseLiveGuideInfo;
@property(nonatomic) unsigned int initialRemainTime; // @synthesize initialRemainTime=_initialRemainTime;
@property(retain, nonatomic) NSData *packageGiftRecommendInfoCtx; // @synthesize packageGiftRecommendInfoCtx=_packageGiftRecommendInfoCtx;
@property(retain, nonatomic) NSData *recommendUserSendGiftInfoCtx; // @synthesize recommendUserSendGiftInfoCtx=_recommendUserSendGiftInfoCtx;
@property(nonatomic) unsigned int bizFriendFollowCount; // @synthesize bizFriendFollowCount=_bizFriendFollowCount;
@property(retain, nonatomic) FinderBizUserInfo *displayedBizUserInfo; // @synthesize displayedBizUserInfo=_displayedBizUserInfo;
@property(retain, nonatomic) FinderBizUserInfo *bindedBizUserInfo; // @synthesize bindedBizUserInfo=_bindedBizUserInfo;
@property(nonatomic) unsigned int liveFlag; // @synthesize liveFlag=_liveFlag;
@property(nonatomic) _Bool showNewStyleHeatValueStyle; // @synthesize showNewStyleHeatValueStyle=_showNewStyleHeatValueStyle;
@property(retain, nonatomic) FinderLiveAbnormalClosedPageInfo *audienceAbnormalClosedPageInfo; // @synthesize audienceAbnormalClosedPageInfo=_audienceAbnormalClosedPageInfo;
@property(retain, nonatomic) FinderLiveErrorPage *liveErrorPage; // @synthesize liveErrorPage=_liveErrorPage;
@property(nonatomic) __weak WCFinderPostLiveLikeCGI *lastPostLiveLikeCGI; // @synthesize lastPostLiveLikeCGI=_lastPostLiveLikeCGI;
@property(retain, nonatomic) WCFinderGetLiveMsgCGI *lastGetLiveMsgCGI; // @synthesize lastGetLiveMsgCGI=_lastGetLiveMsgCGI;
@property(nonatomic) unsigned long long askProductQuestionExtFlag; // @synthesize askProductQuestionExtFlag=_askProductQuestionExtFlag;
@property(nonatomic) unsigned long long backendAnchorStatusFlag; // @synthesize backendAnchorStatusFlag=_backendAnchorStatusFlag;
@property(nonatomic) unsigned long long extShowFlag; // @synthesize extShowFlag=_extShowFlag;
@property(nonatomic) unsigned long long liveMicExtFlag; // @synthesize liveMicExtFlag=_liveMicExtFlag;
@property(retain, nonatomic) FinderLiveExtFlag *liveExtFlagExt; // @synthesize liveExtFlagExt=_liveExtFlagExt;
@property(nonatomic) unsigned int liveExtFlag; // @synthesize liveExtFlag=_liveExtFlag;
@property(retain, nonatomic) FinderLiveContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(retain, nonatomic) FinderLiveContact *selfContact; // @synthesize selfContact=_selfContact;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (_Bool)isAudienceExposedGiftEnabled;
- (_Bool)isAudienceMicRankSwitchOpen;
@property(readonly, nonatomic) _Bool designatedGiftPkEnabled;
- (_Bool)isShowGloryListSwitchOpen;
@property(readonly, nonatomic) _Bool enableShowGiftMultipleSendTips;
- (id)bizLiveUsernameWithBrandPrefix;
- (id)bizLiveUsername;
- (id)bizLiveNickname;
- (_Bool)isBizLive;
- (id)description;
- (_Bool)enableGetLiveMsgDisplayNewHeatValue;
- (_Bool)enableDisplayNewHeatValue;
- (_Bool)isRecentlyMic;
- (_Bool)enableAudienceMic;
- (_Bool)enableAudienceReward;
- (_Bool)enableLiveRoomReward;

@end

