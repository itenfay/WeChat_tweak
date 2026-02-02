//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdAppGiftPackCodeInfo, WCAdAppointmentInfo, WCAdBrandProfileInfo, WCAdCardBtnAnimationInfo, WCAdClickActionCanvasInfo, WCAdConventionalHalfScreenInfo, WCAdCouponInfo, WCAdCustomerServiceInfo, WCAdDynamicCanvasLoadInfo, WCAdFinderFollowInfo, WCAdFinderInfo, WCAdFinderLiveInfo, WCAdFinderLiveNoticeInfo, WCAdFinderProfileInfo, WCAdFinderTopicInfo, WCAdLiteAppInfo, WCAdMiniShopInfo, WCAdOpenAppHalfScreenInfo, WCAdOpenWeGameHalfScreenInfo, WCAdQrCodeScanInfo, WCAdQuicklyAddBrandInfo, WCAdSearchH5Info, WCAdStatePublishInfo;

@interface WCAdCardBtnInfo : NSObject
{
    _Bool _bInternalJumpAppStore;
    _Bool _hasSubscribeSuc;
    _Bool _singleLineBtn;
    unsigned int _weappVersion;
    int _miniProgramType;
    int _appType;
    NSString *_btnTitle;
    NSString *_iconUrl;
    long long _clickActionType;
    NSString *_clickActionLink;
    NSString *_weappUserName;
    NSString *_weappPath;
    WCAdOpenWeGameHalfScreenInfo *_openWeGameHalfScreenInfo;
    NSString *_appJumpUrl;
    NSString *_openSdkAppId;
    NSString *_appPageUrl;
    WCAdOpenAppHalfScreenInfo *_openAppHalfScreenInfo;
    NSString *_cardTpId;
    NSString *_cardExt;
    NSString *_tempId;
    NSString *_btnTitleAfterSubscribe;
    NSString *_subscribeTitle;
    NSString *_subscribeContent;
    NSString *_subscribeSubmitBtnTitle;
    NSString *_appId;
    NSString *_subscribeSucTip;
    NSString *_subscribeFailedTip;
    NSString *_subscribeHeadImage;
    NSString *_subscribeNickname;
    unsigned long long _subscribeExpiredTime;
    NSString *_subscribeExpiredTip;
    WCAdQuicklyAddBrandInfo *_quicklyAddBrandInfo;
    WCAdCouponInfo *_adCouponInfo;
    WCAdFinderLiveNoticeInfo *_adFinderLiveNoticeInfo;
    WCAdFinderLiveInfo *_adFinderLiveInfo;
    WCAdFinderTopicInfo *_adFinderTopicInfo;
    WCAdFinderInfo *_adFinderFeedInfo;
    WCAdFinderFollowInfo *_adFinderFollowInfo;
    WCAdFinderProfileInfo *_adFinderProfileInfo;
    WCAdAppGiftPackCodeInfo *_adAppGiftPackCodeInfo;
    WCAdAppointmentInfo *_adAppointmentInfo;
    WCAdSearchH5Info *_adSearchH5Info;
    WCAdCustomerServiceInfo *_adCustomerServiceInfo;
    WCAdBrandProfileInfo *_adBrandProfileInfo;
    WCAdClickActionCanvasInfo *_adClickActionCanvasInfo;
    WCAdStatePublishInfo *_adStatePublishInfo;
    WCAdQrCodeScanInfo *_adQrCodeScanInfo;
    WCAdDynamicCanvasLoadInfo *_adDynamicCanvasLoadInfo;
    WCAdConventionalHalfScreenInfo *_adConventionalHalfScreenInfo;
    WCAdMiniShopInfo *_adMiniShopInfo;
    WCAdLiteAppInfo *_adLiteAppInfo;
    WCAdCardBtnAnimationInfo *_btnAnimationInfo;
    NSString *_btnColor;
    NSString *_btnBgColor;
    NSString *_btnDarkColor;
    NSString *_btnBgDarkColor;
    WCAdCardBtnInfo *_defaultClickActionInfo;
    long long _indirectJumpType;
    long long _originClickActionType;
}

- (void).cxx_destruct;
@property(nonatomic) long long originClickActionType; // @synthesize originClickActionType=_originClickActionType;
@property(nonatomic) long long indirectJumpType; // @synthesize indirectJumpType=_indirectJumpType;
@property(retain, nonatomic) WCAdCardBtnInfo *defaultClickActionInfo; // @synthesize defaultClickActionInfo=_defaultClickActionInfo;
@property(retain, nonatomic) NSString *btnBgDarkColor; // @synthesize btnBgDarkColor=_btnBgDarkColor;
@property(retain, nonatomic) NSString *btnDarkColor; // @synthesize btnDarkColor=_btnDarkColor;
@property(retain, nonatomic) NSString *btnBgColor; // @synthesize btnBgColor=_btnBgColor;
@property(retain, nonatomic) NSString *btnColor; // @synthesize btnColor=_btnColor;
@property(nonatomic) _Bool singleLineBtn; // @synthesize singleLineBtn=_singleLineBtn;
@property(retain, nonatomic) WCAdCardBtnAnimationInfo *btnAnimationInfo; // @synthesize btnAnimationInfo=_btnAnimationInfo;
@property(retain, nonatomic) WCAdLiteAppInfo *adLiteAppInfo; // @synthesize adLiteAppInfo=_adLiteAppInfo;
@property(retain, nonatomic) WCAdMiniShopInfo *adMiniShopInfo; // @synthesize adMiniShopInfo=_adMiniShopInfo;
@property(retain, nonatomic) WCAdConventionalHalfScreenInfo *adConventionalHalfScreenInfo; // @synthesize adConventionalHalfScreenInfo=_adConventionalHalfScreenInfo;
@property(retain, nonatomic) WCAdDynamicCanvasLoadInfo *adDynamicCanvasLoadInfo; // @synthesize adDynamicCanvasLoadInfo=_adDynamicCanvasLoadInfo;
@property(retain, nonatomic) WCAdQrCodeScanInfo *adQrCodeScanInfo; // @synthesize adQrCodeScanInfo=_adQrCodeScanInfo;
@property(retain, nonatomic) WCAdStatePublishInfo *adStatePublishInfo; // @synthesize adStatePublishInfo=_adStatePublishInfo;
@property(retain, nonatomic) WCAdClickActionCanvasInfo *adClickActionCanvasInfo; // @synthesize adClickActionCanvasInfo=_adClickActionCanvasInfo;
@property(retain, nonatomic) WCAdBrandProfileInfo *adBrandProfileInfo; // @synthesize adBrandProfileInfo=_adBrandProfileInfo;
@property(retain, nonatomic) WCAdCustomerServiceInfo *adCustomerServiceInfo; // @synthesize adCustomerServiceInfo=_adCustomerServiceInfo;
@property(retain, nonatomic) WCAdSearchH5Info *adSearchH5Info; // @synthesize adSearchH5Info=_adSearchH5Info;
@property(retain, nonatomic) WCAdAppointmentInfo *adAppointmentInfo; // @synthesize adAppointmentInfo=_adAppointmentInfo;
@property(retain, nonatomic) WCAdAppGiftPackCodeInfo *adAppGiftPackCodeInfo; // @synthesize adAppGiftPackCodeInfo=_adAppGiftPackCodeInfo;
@property(retain, nonatomic) WCAdFinderProfileInfo *adFinderProfileInfo; // @synthesize adFinderProfileInfo=_adFinderProfileInfo;
@property(retain, nonatomic) WCAdFinderFollowInfo *adFinderFollowInfo; // @synthesize adFinderFollowInfo=_adFinderFollowInfo;
@property(retain, nonatomic) WCAdFinderInfo *adFinderFeedInfo; // @synthesize adFinderFeedInfo=_adFinderFeedInfo;
@property(retain, nonatomic) WCAdFinderTopicInfo *adFinderTopicInfo; // @synthesize adFinderTopicInfo=_adFinderTopicInfo;
@property(retain, nonatomic) WCAdFinderLiveInfo *adFinderLiveInfo; // @synthesize adFinderLiveInfo=_adFinderLiveInfo;
@property(retain, nonatomic) WCAdFinderLiveNoticeInfo *adFinderLiveNoticeInfo; // @synthesize adFinderLiveNoticeInfo=_adFinderLiveNoticeInfo;
@property(retain, nonatomic) WCAdCouponInfo *adCouponInfo; // @synthesize adCouponInfo=_adCouponInfo;
@property(retain, nonatomic) WCAdQuicklyAddBrandInfo *quicklyAddBrandInfo; // @synthesize quicklyAddBrandInfo=_quicklyAddBrandInfo;
@property(retain, nonatomic) NSString *subscribeExpiredTip; // @synthesize subscribeExpiredTip=_subscribeExpiredTip;
@property(nonatomic) unsigned long long subscribeExpiredTime; // @synthesize subscribeExpiredTime=_subscribeExpiredTime;
@property(nonatomic) _Bool hasSubscribeSuc; // @synthesize hasSubscribeSuc=_hasSubscribeSuc;
@property(retain, nonatomic) NSString *subscribeNickname; // @synthesize subscribeNickname=_subscribeNickname;
@property(retain, nonatomic) NSString *subscribeHeadImage; // @synthesize subscribeHeadImage=_subscribeHeadImage;
@property(retain, nonatomic) NSString *subscribeFailedTip; // @synthesize subscribeFailedTip=_subscribeFailedTip;
@property(retain, nonatomic) NSString *subscribeSucTip; // @synthesize subscribeSucTip=_subscribeSucTip;
@property(nonatomic) int appType; // @synthesize appType=_appType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *subscribeSubmitBtnTitle; // @synthesize subscribeSubmitBtnTitle=_subscribeSubmitBtnTitle;
@property(retain, nonatomic) NSString *subscribeContent; // @synthesize subscribeContent=_subscribeContent;
@property(retain, nonatomic) NSString *subscribeTitle; // @synthesize subscribeTitle=_subscribeTitle;
@property(retain, nonatomic) NSString *btnTitleAfterSubscribe; // @synthesize btnTitleAfterSubscribe=_btnTitleAfterSubscribe;
@property(retain, nonatomic) NSString *tempId; // @synthesize tempId=_tempId;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId=_cardTpId;
@property(retain, nonatomic) WCAdOpenAppHalfScreenInfo *openAppHalfScreenInfo; // @synthesize openAppHalfScreenInfo=_openAppHalfScreenInfo;
@property(nonatomic) _Bool bInternalJumpAppStore; // @synthesize bInternalJumpAppStore=_bInternalJumpAppStore;
@property(retain, nonatomic) NSString *appPageUrl; // @synthesize appPageUrl=_appPageUrl;
@property(retain, nonatomic) NSString *openSdkAppId; // @synthesize openSdkAppId=_openSdkAppId;
@property(retain, nonatomic) NSString *appJumpUrl; // @synthesize appJumpUrl=_appJumpUrl;
@property(retain, nonatomic) WCAdOpenWeGameHalfScreenInfo *openWeGameHalfScreenInfo; // @synthesize openWeGameHalfScreenInfo=_openWeGameHalfScreenInfo;
@property(nonatomic) int miniProgramType; // @synthesize miniProgramType=_miniProgramType;
@property(nonatomic) unsigned int weappVersion; // @synthesize weappVersion=_weappVersion;
@property(retain, nonatomic) NSString *weappPath; // @synthesize weappPath=_weappPath;
@property(retain, nonatomic) NSString *weappUserName; // @synthesize weappUserName=_weappUserName;
@property(retain, nonatomic) NSString *clickActionLink; // @synthesize clickActionLink=_clickActionLink;
@property(nonatomic) long long clickActionType; // @synthesize clickActionType=_clickActionType;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
- (double)fetchHalfScreenMinHeightPercent;
- (_Bool)shouldFetchHalfScreenMinHeightPercent;
- (_Bool)shouldHalfScreenRepresentAsH5;
- (_Bool)isValidForHalfScreenCustomerService;
- (_Bool)isValidForHalfScreenLinkProfile;
- (_Bool)isValidForHalfScreenQrCode;
- (_Bool)isValidForHalfScreenActionLink;
- (_Bool)isValidForHalfScreen;
- (id)getWeAppInfo;
- (_Bool)isValidForJumpToWeApp;
- (id)fetchAdClickActionLink;
- (unsigned int)fetchAdClickActionTypeWithClickActionType:(long long)arg1;
- (unsigned int)fetchAdOriginClickActionType;
- (unsigned int)fetchAdClickActionType;
- (_Bool)isValidForShowActionBtn;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

