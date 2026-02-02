//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCPayDigitalCertInstallAction, WCPayMultiOrderDetail, WCPayPayResponseRetryInfo, WCPayRealnameGuideInfo, WCPaySimpleUserSetPassGuideInfo, WCPayVerifyCreTailInfo;

@interface WCPayAuthenticationPayStatusStruct : NSObject
{
    _Bool m_bPayCompleteFlag;
    NSString *m_nsReturnKey;
    NSArray *m_naTranscationID;
    NSString *nsServiceAppID;
    NSString *nsServiceDetail;
    NSString *nsServiceAppUserName;
    NSString *nsServiceAppLogoUrl;
    NSString *nsServiceAppNickName;
    NSString *nsServiceAppSubscribeURL;
    NSString *nsShareToFriendsURL;
    NSString *nsPaidSuccessDetail;
    int uiServiceSubscribeStrategy;
    WCPayMultiOrderDetail *m_oOrdelStatusDetail;
    NSString *nsBindSerial;
    NSString *nsCardBankName;
    NSString *nsCardBankType;
    NSString *nsCardNumber;
    NSString *nsJumpToSafariUrl;
    NSString *nsWapPayJumpUrl;
    WCPayRealnameGuideInfo *realnameInfo;
    _Bool _is_jsapi_close_page;
    unsigned int _is_clear_failure;
    WCPayRealnameGuideInfo *realnameGuideInfo;
    NSString *_balanceMobile;
    NSString *_balanceHelpUrl;
    WCPayVerifyCreTailInfo *_verify_cre_tail_info;
    WCPayDigitalCertInstallAction *_m_digitalAction;
    WCPaySimpleUserSetPassGuideInfo *_m_simpleUserGuideInfo;
    long long _can_pay_retry;
    WCPayPayResponseRetryInfo *_retry_pay_info;
    NSString *_jsapi_tinyapp_username;
    NSString *_jsapi_tinyapp_path;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int is_clear_failure; // @synthesize is_clear_failure=_is_clear_failure;
@property(retain, nonatomic) NSString *jsapi_tinyapp_path; // @synthesize jsapi_tinyapp_path=_jsapi_tinyapp_path;
@property(retain, nonatomic) NSString *jsapi_tinyapp_username; // @synthesize jsapi_tinyapp_username=_jsapi_tinyapp_username;
@property(nonatomic) _Bool is_jsapi_close_page; // @synthesize is_jsapi_close_page=_is_jsapi_close_page;
@property(retain, nonatomic) WCPayPayResponseRetryInfo *retry_pay_info; // @synthesize retry_pay_info=_retry_pay_info;
@property(nonatomic) long long can_pay_retry; // @synthesize can_pay_retry=_can_pay_retry;
@property(retain, nonatomic) WCPaySimpleUserSetPassGuideInfo *m_simpleUserGuideInfo; // @synthesize m_simpleUserGuideInfo=_m_simpleUserGuideInfo;
@property(retain, nonatomic) WCPayDigitalCertInstallAction *m_digitalAction; // @synthesize m_digitalAction=_m_digitalAction;
@property(retain, nonatomic) WCPayVerifyCreTailInfo *verify_cre_tail_info; // @synthesize verify_cre_tail_info=_verify_cre_tail_info;
@property(retain, nonatomic) NSString *balanceHelpUrl; // @synthesize balanceHelpUrl=_balanceHelpUrl;
@property(retain, nonatomic) NSString *balanceMobile; // @synthesize balanceMobile=_balanceMobile;
@property(retain, nonatomic) WCPayRealnameGuideInfo *realnameGuideInfo; // @synthesize realnameGuideInfo;
@property(retain, nonatomic) NSString *nsWapPayJumpUrl; // @synthesize nsWapPayJumpUrl;
@property(retain, nonatomic) NSString *nsJumpToSafariUrl; // @synthesize nsJumpToSafariUrl;
@property(retain, nonatomic) NSString *nsCardNumber; // @synthesize nsCardNumber;
@property(retain, nonatomic) NSString *nsCardBankType; // @synthesize nsCardBankType;
@property(retain, nonatomic) NSString *nsCardBankName; // @synthesize nsCardBankName;
@property(retain, nonatomic) NSString *nsPaidSuccessDetail; // @synthesize nsPaidSuccessDetail;
@property(retain, nonatomic) NSString *nsShareToFriendsURL; // @synthesize nsShareToFriendsURL;
@property(retain, nonatomic) NSString *nsBindSerial; // @synthesize nsBindSerial;
@property(retain, nonatomic) WCPayMultiOrderDetail *m_oOrdelStatusDetail; // @synthesize m_oOrdelStatusDetail;
@property(nonatomic) int uiServiceSubscribeStrategy; // @synthesize uiServiceSubscribeStrategy;
@property(retain, nonatomic) NSString *nsServiceAppSubscribeURL; // @synthesize nsServiceAppSubscribeURL;
@property(retain, nonatomic) NSString *nsServiceAppNickName; // @synthesize nsServiceAppNickName;
@property(retain, nonatomic) NSString *nsServiceAppLogoUrl; // @synthesize nsServiceAppLogoUrl;
@property(retain, nonatomic) NSString *nsServiceAppUserName; // @synthesize nsServiceAppUserName;
@property(retain, nonatomic) NSString *nsServiceDetail; // @synthesize nsServiceDetail;
@property(retain, nonatomic) NSString *nsServiceAppID; // @synthesize nsServiceAppID;
@property(nonatomic) _Bool m_bPayCompleteFlag; // @synthesize m_bPayCompleteFlag;
@property(retain, nonatomic) NSString *m_nsReturnKey; // @synthesize m_nsReturnKey;
@property(retain, nonatomic) NSArray *m_naTranscationID; // @synthesize m_naTranscationID;

@end

