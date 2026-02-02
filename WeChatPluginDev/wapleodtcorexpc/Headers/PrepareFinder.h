//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AccountExtraSettingConfig, AgencyCollaborateInfo, DataCenterConfig, FinderAsyncPostConfig, FinderClubInfo, FinderContact, FinderJumpInfo, FinderLiveWxaPreloadInfo, FinderModFeedConfig, FinderNicknameVerifyInfo, FinderNotRecommendInfo, FinderOriginalDeclareInfo, FinderUserPreparePoiInfo, FinderWxAppInfo, MasterWxAcctInfo, MusicConfig, NSMutableArray, NSString, PostActionSheetList, PrepareFinderRealNameInfo, SettleToAgencyRelateInfo;

@interface PrepareFinder : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *acctDetailUrl; // @dynamic acctDetailUrl;
@property(retain, nonatomic) AccountExtraSettingConfig *acctExtSettingConfig; // @dynamic acctExtSettingConfig;
@property(retain, nonatomic) NSString *achievementUrl; // @dynamic achievementUrl;
@property(retain, nonatomic) PostActionSheetList *actionList; // @dynamic actionList;
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) AgencyCollaborateInfo *agencyCollaborateInfo; // @dynamic agencyCollaborateInfo;
@property(retain, nonatomic) NSString *articleTips; // @dynamic articleTips;
@property(retain, nonatomic) FinderAsyncPostConfig *asyncPost; // @dynamic asyncPost;
@property(retain, nonatomic) FinderClubInfo *clubInfo; // @dynamic clubInfo;
@property(nonatomic) unsigned int commentPrivacyLevel; // @dynamic commentPrivacyLevel;
@property(retain, nonatomic) NSString *creatorCentorUrl; // @dynamic creatorCentorUrl;
@property(retain, nonatomic) NSString *creatorCentorWording; // @dynamic creatorCentorWording;
@property(retain, nonatomic) DataCenterConfig *datacenterConf; // @dynamic datacenterConf;
@property(nonatomic) unsigned int declareTagEntry; // @dynamic declareTagEntry;
@property(nonatomic) unsigned long long extFlag; // @dynamic extFlag;
@property(nonatomic) unsigned int fansCount; // @dynamic fansCount;
@property(nonatomic) unsigned int greetPrivacyLevel; // @dynamic greetPrivacyLevel;
@property(retain, nonatomic) FinderJumpInfo *incomeWithdrawInfo; // @dynamic incomeWithdrawInfo;
@property(nonatomic) unsigned int interactionPrivacyLevel; // @dynamic interactionPrivacyLevel;
@property(retain, nonatomic) NSString *jumpJson; // @dynamic jumpJson;
@property(nonatomic) unsigned int livePrivilegesFlag; // @dynamic livePrivilegesFlag;
@property(nonatomic) unsigned int logoutLock; // @dynamic logoutLock;
@property(retain, nonatomic) NSString *logoutUrl; // @dynamic logoutUrl;
@property(retain, nonatomic) MasterWxAcctInfo *masterWxAcct; // @dynamic masterWxAcct;
@property(retain, nonatomic) FinderJumpInfo *membershipServicePostPreview; // @dynamic membershipServicePostPreview;
@property(nonatomic) unsigned int membershipServiceSwitch; // @dynamic membershipServiceSwitch;
@property(retain, nonatomic) FinderModFeedConfig *modFeedConfig; // @dynamic modFeedConfig;
@property(retain, nonatomic) MusicConfig *musicConfig; // @dynamic musicConfig;
@property(nonatomic) unsigned int musicTabSwitchMask; // @dynamic musicTabSwitchMask;
@property(retain, nonatomic) NSMutableArray *newLiveNoticeListInfo; // @dynamic newLiveNoticeListInfo;
@property(retain, nonatomic) NSString *nicknameModifyRestCountNotice; // @dynamic nicknameModifyRestCountNotice;
@property(retain, nonatomic) NSString *nicknameModifyWording; // @dynamic nicknameModifyWording;
@property(retain, nonatomic) FinderNotRecommendInfo *notRecommendInfo; // @dynamic notRecommendInfo;
@property(retain, nonatomic) FinderOriginalDeclareInfo *originInfo; // @dynamic originInfo;
@property(retain, nonatomic) NSString *originalWarning; // @dynamic originalWarning;
@property(nonatomic) unsigned int permissionFlag; // @dynamic permissionFlag;
@property(retain, nonatomic) FinderUserPreparePoiInfo *poiInfo; // @dynamic poiInfo;
@property(retain, nonatomic) PrepareFinderRealNameInfo *prepareRealnameInfo; // @dynamic prepareRealnameInfo;
@property(retain, nonatomic) FinderContact *selfContact; // @dynamic selfContact;
@property(retain, nonatomic) SettleToAgencyRelateInfo *settleInfo; // @dynamic settleInfo;
@property(retain, nonatomic) FinderLiveWxaPreloadInfo *shopWindowPreload; // @dynamic shopWindowPreload;
@property(retain, nonatomic) FinderJumpInfo *spamAcctInfo; // @dynamic spamAcctInfo;
@property(nonatomic) unsigned long long switchFlag; // @dynamic switchFlag;
@property(retain, nonatomic) FinderJumpInfo *tagEntry; // @dynamic tagEntry;
@property(retain, nonatomic) NSString *uniqId; // @dynamic uniqId;
@property(nonatomic) unsigned int userFlag; // @dynamic userFlag;
@property(retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo; // @dynamic verifyInfo;
@property(retain, nonatomic) NSString *videoLenTooShortTips; // @dynamic videoLenTooShortTips;
@property(retain, nonatomic) NSString *videoLowBitrateTips; // @dynamic videoLowBitrateTips;
@property(retain, nonatomic) FinderWxAppInfo *wxaShopBindUrl; // @dynamic wxaShopBindUrl;
@property(retain, nonatomic) FinderWxAppInfo *wxaShopCouponInfo; // @dynamic wxaShopCouponInfo;
@property(retain, nonatomic) FinderWxAppInfo *wxaShopInfo; // @dynamic wxaShopInfo;

@end

