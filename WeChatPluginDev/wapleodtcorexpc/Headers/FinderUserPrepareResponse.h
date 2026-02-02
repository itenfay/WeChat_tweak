//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AccountExtraSettingConfig, AcctTransferConfig, AgencyCollaborateInfo, BaseResponse, DataCenterConfig, FinderContact, FinderLiveNoticeListInfo, FinderLiveWxaPreloadInfo, FinderNicknameVerifyInfo, FinderPrivacySetting, FinderUserPreparePoiInfo, FinderWxAppInfo, GameRankSwitchInfo, JoinLiveInvisiableSwitchInfo, NSMutableArray, NSString, PostActionSheetList, PostActionWording, SettleToAgencyRelateInfo;

@interface FinderUserPrepareResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *acctDetailUrl; // @dynamic acctDetailUrl;
@property(retain, nonatomic) AccountExtraSettingConfig *acctExtSettingConfig; // @dynamic acctExtSettingConfig;
@property(retain, nonatomic) AcctTransferConfig *acctTransferConf; // @dynamic acctTransferConf;
@property(retain, nonatomic) PostActionSheetList *actionList; // @dynamic actionList;
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) PostActionWording *actionWording; // @dynamic actionWording;
@property(retain, nonatomic) AgencyCollaborateInfo *agencyCollaborateInfo; // @dynamic agencyCollaborateInfo;
@property(retain, nonatomic) NSMutableArray *aliasInfo; // @dynamic aliasInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *creatorCentorUrl; // @dynamic creatorCentorUrl;
@property(nonatomic) unsigned int currentAliasRoleType; // @dynamic currentAliasRoleType;
@property(retain, nonatomic) DataCenterConfig *datacenterConf; // @dynamic datacenterConf;
@property(nonatomic) unsigned int favTotalCount; // @dynamic favTotalCount;
@property(nonatomic) unsigned int foreignUserFlag; // @dynamic foreignUserFlag;
@property(retain, nonatomic) GameRankSwitchInfo *gameLiveSwitchInfo; // @dynamic gameLiveSwitchInfo;
@property(retain, nonatomic) JoinLiveInvisiableSwitchInfo *joinliveInvisiableSwitch; // @dynamic joinliveInvisiableSwitch;
@property(nonatomic) unsigned int likedTotalCount; // @dynamic likedTotalCount;
@property(nonatomic) unsigned int liveGlobalFlag; // @dynamic liveGlobalFlag;
@property(retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo; // @dynamic liveNoticeListInfo;
@property(nonatomic) unsigned int livePrivilegesFlag; // @dynamic livePrivilegesFlag;
@property(nonatomic) unsigned int logoutLock; // @dynamic logoutLock;
@property(retain, nonatomic) NSString *logoutUrl; // @dynamic logoutUrl;
@property(nonatomic) unsigned long long nextAliasModAvailableTime; // @dynamic nextAliasModAvailableTime;
@property(nonatomic) unsigned int nicknameMaxLength; // @dynamic nicknameMaxLength;
@property(nonatomic) unsigned int nicknameMinLength; // @dynamic nicknameMinLength;
@property(retain, nonatomic) NSString *nicknameModifyRestCountNotice; // @dynamic nicknameModifyRestCountNotice;
@property(retain, nonatomic) NSString *nicknameModifyWording; // @dynamic nicknameModifyWording;
@property(retain, nonatomic) NSString *noPostPrivilegeDesc; // @dynamic noPostPrivilegeDesc;
@property(retain, nonatomic) NSString *noPostPrivilegeTitle; // @dynamic noPostPrivilegeTitle;
@property(retain, nonatomic) FinderUserPreparePoiInfo *poiInfo; // @dynamic poiInfo;
@property(retain, nonatomic) FinderPrivacySetting *privacySetting; // @dynamic privacySetting;
@property(nonatomic) unsigned int purchasedTotalCount; // @dynamic purchasedTotalCount;
@property(retain, nonatomic) NSString *realnameUrl; // @dynamic realnameUrl;
@property(retain, nonatomic) FinderContact *selfContact; // @dynamic selfContact;
@property(retain, nonatomic) SettleToAgencyRelateInfo *settleInfo; // @dynamic settleInfo;
@property(retain, nonatomic) FinderLiveWxaPreloadInfo *shopWindowPreload; // @dynamic shopWindowPreload;
@property(nonatomic) unsigned int signatureMaxLength; // @dynamic signatureMaxLength;
@property(nonatomic) unsigned int signatureMinLength; // @dynamic signatureMinLength;
@property(nonatomic) unsigned int userFlag; // @dynamic userFlag;
@property(nonatomic) int userNoFinder; // @dynamic userNoFinder;
@property(retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo; // @dynamic verifyInfo;
@property(retain, nonatomic) FinderWxAppInfo *wxaShopBindUrl; // @dynamic wxaShopBindUrl;
@property(retain, nonatomic) FinderWxAppInfo *wxaShopCouponInfo; // @dynamic wxaShopCouponInfo;
@property(retain, nonatomic) FinderWxAppInfo *wxaShopInfo; // @dynamic wxaShopInfo;

@end

