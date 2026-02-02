//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FQFCardInfo, HoneyPayCardInfo, NSArray, NSDate, NSString, PromptInfo, WCPayBindCardYHTInfo, WCPayBindCardYHTInfoMinimchInfo, WCPayCredInfo;

@interface WCPayBindCardInfo : NSObject
{
    NSString *m_cardBankName;
    NSString *m_cardBankType;
    NSString *m_cardType;
    NSString *m_cardTypeName;
    NSString *m_creditTypeID;
    unsigned int m_cardBankTag;
    NSString *m_cardNumber;
    NSString *m_cardTail;
    NSString *m_cardLogoUrl;
    NSString *m_cardHolder;
    NSString *m_bindSerial;
    NSString *m_bindPhoneNumber;
    NSString *m_bankPhone;
    WCPayCredInfo *m_oWCPayCredInfo;
    unsigned int m_virtualSingalTranscationLimit;
    unsigned int m_virtualDayTranscationLimit;
    unsigned int m_physicalSignalTranscationLimit;
    unsigned int m_physicalDayTranscationLimit;
    _Bool m_bankFlag;
    _Bool m_expiredFlag;
    _Bool m_bNeedMoneyToResetPwd;
    _Bool m_bCanReturnMoneyAfterResetPwd;
    _Bool m_bIsSupportOfflinePay;
    _Bool m_bIsWXCredit;
    NSString *m_nsForbidWord;
    NSString *m_nsRepayUrl;
    NSDate *m_ndFetchPreArriveTime;
    NSString *m_nsFetchPreArriveTime;
    unsigned int m_uiCvvLength;
    NSString *m_nsAvailableSavedDetail;
    NSString *m_nsTips;
    NSString *m_nsCardDetailUrl;
    _Bool _m_bISFullFetchDirect;
    _Bool _is_hightlight_pre_arrive_time_wording;
    _Bool _support_lqt_turn_in;
    _Bool _support_lqt_turn_out;
    _Bool _support_foreign_mobile;
    unsigned int _m_uiFetchChargeRate;
    unsigned int _m_uiFullFetchChargeFee;
    unsigned int _card_min_charge_fee;
    int _default_card_state;
    int _fetch_limit_recommend_action;
    NSString *m_arriveType;
    NSString *m_nsOfflinePayNotSupportWord;
    NSString *_m_nsFetchChargeInfo;
    NSString *_m_forbid_title;
    NSString *_m_forbid_url;
    NSString *_m_nsBottomWording;
    HoneyPayCardInfo *_qmfCardInfo;
    FQFCardInfo *_fqf_info;
    NSString *_card_state_name;
    NSString *_card_fetch_wording;
    NSString *_tinyapp_username;
    NSString *_tinyapp_path;
    PromptInfo *_promptInfo;
    NSString *_fetch_limit_title;
    NSString *_fetch_limit_popup_title;
    NSString *_fetch_limit_popup_wording;
    NSArray *_fetch_limit_array;
    NSString *_fetch_limit_recommend_wording;
    NSString *_fetch_limit_recommend_bank_logo;
    NSString *_fetch_limit_recommend_action_wording;
    NSArray *_fetch_limit_recommend_bind_serial;
    WCPayBindCardYHTInfo *_yht_info;
    WCPayBindCardYHTInfoMinimchInfo *_minimch_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBindCardYHTInfoMinimchInfo *minimch_info; // @synthesize minimch_info=_minimch_info;
@property(retain, nonatomic) WCPayBindCardYHTInfo *yht_info; // @synthesize yht_info=_yht_info;
@property(retain, nonatomic) NSArray *fetch_limit_recommend_bind_serial; // @synthesize fetch_limit_recommend_bind_serial=_fetch_limit_recommend_bind_serial;
@property(retain, nonatomic) NSString *fetch_limit_recommend_action_wording; // @synthesize fetch_limit_recommend_action_wording=_fetch_limit_recommend_action_wording;
@property(nonatomic) int fetch_limit_recommend_action; // @synthesize fetch_limit_recommend_action=_fetch_limit_recommend_action;
@property(retain, nonatomic) NSString *fetch_limit_recommend_bank_logo; // @synthesize fetch_limit_recommend_bank_logo=_fetch_limit_recommend_bank_logo;
@property(retain, nonatomic) NSString *fetch_limit_recommend_wording; // @synthesize fetch_limit_recommend_wording=_fetch_limit_recommend_wording;
@property(retain, nonatomic) NSArray *fetch_limit_array; // @synthesize fetch_limit_array=_fetch_limit_array;
@property(retain, nonatomic) NSString *fetch_limit_popup_wording; // @synthesize fetch_limit_popup_wording=_fetch_limit_popup_wording;
@property(retain, nonatomic) NSString *fetch_limit_popup_title; // @synthesize fetch_limit_popup_title=_fetch_limit_popup_title;
@property(retain, nonatomic) NSString *fetch_limit_title; // @synthesize fetch_limit_title=_fetch_limit_title;
@property(nonatomic) int default_card_state; // @synthesize default_card_state=_default_card_state;
@property(retain, nonatomic) PromptInfo *promptInfo; // @synthesize promptInfo=_promptInfo;
@property(retain, nonatomic) NSString *tinyapp_path; // @synthesize tinyapp_path=_tinyapp_path;
@property(retain, nonatomic) NSString *tinyapp_username; // @synthesize tinyapp_username=_tinyapp_username;
@property(nonatomic) unsigned int card_min_charge_fee; // @synthesize card_min_charge_fee=_card_min_charge_fee;
@property(retain, nonatomic) NSString *card_fetch_wording; // @synthesize card_fetch_wording=_card_fetch_wording;
@property(retain, nonatomic) NSString *card_state_name; // @synthesize card_state_name=_card_state_name;
@property(nonatomic) _Bool support_foreign_mobile; // @synthesize support_foreign_mobile=_support_foreign_mobile;
@property(retain, nonatomic) FQFCardInfo *fqf_info; // @synthesize fqf_info=_fqf_info;
@property(retain, nonatomic) HoneyPayCardInfo *qmfCardInfo; // @synthesize qmfCardInfo=_qmfCardInfo;
@property(nonatomic) _Bool support_lqt_turn_out; // @synthesize support_lqt_turn_out=_support_lqt_turn_out;
@property(nonatomic) _Bool support_lqt_turn_in; // @synthesize support_lqt_turn_in=_support_lqt_turn_in;
@property(nonatomic) _Bool is_hightlight_pre_arrive_time_wording; // @synthesize is_hightlight_pre_arrive_time_wording=_is_hightlight_pre_arrive_time_wording;
@property(retain, nonatomic) NSString *m_nsBottomWording; // @synthesize m_nsBottomWording=_m_nsBottomWording;
@property(retain, nonatomic) NSString *m_forbid_url; // @synthesize m_forbid_url=_m_forbid_url;
@property(retain, nonatomic) NSString *m_forbid_title; // @synthesize m_forbid_title=_m_forbid_title;
@property(nonatomic) _Bool m_bISFullFetchDirect; // @synthesize m_bISFullFetchDirect=_m_bISFullFetchDirect;
@property(nonatomic) unsigned int m_uiFullFetchChargeFee; // @synthesize m_uiFullFetchChargeFee=_m_uiFullFetchChargeFee;
@property(retain, nonatomic) NSString *m_nsFetchChargeInfo; // @synthesize m_nsFetchChargeInfo=_m_nsFetchChargeInfo;
@property(nonatomic) unsigned int m_uiFetchChargeRate; // @synthesize m_uiFetchChargeRate=_m_uiFetchChargeRate;
@property(retain, nonatomic) NSString *m_nsCardDetailUrl; // @synthesize m_nsCardDetailUrl;
@property(retain, nonatomic) NSString *m_nsTips; // @synthesize m_nsTips;
@property(retain, nonatomic) NSString *m_nsFetchPreArriveTime; // @synthesize m_nsFetchPreArriveTime;
@property(retain, nonatomic) NSString *m_nsOfflinePayNotSupportWord; // @synthesize m_nsOfflinePayNotSupportWord;
@property(retain, nonatomic) NSString *m_arriveType; // @synthesize m_arriveType;
@property(retain, nonatomic) NSString *m_nsAvailableSavedDetail; // @synthesize m_nsAvailableSavedDetail;
@property(nonatomic) unsigned int m_uiCvvLength; // @synthesize m_uiCvvLength;
@property(retain, nonatomic) NSDate *m_ndFetchPreArriveTime; // @synthesize m_ndFetchPreArriveTime;
@property(retain, nonatomic) NSString *m_nsRepayUrl; // @synthesize m_nsRepayUrl;
@property(nonatomic) _Bool m_bIsWXCredit; // @synthesize m_bIsWXCredit;
@property(retain, nonatomic) NSString *m_nsForbidWord; // @synthesize m_nsForbidWord;
@property(nonatomic) _Bool m_bIsSupportOfflinePay; // @synthesize m_bIsSupportOfflinePay;
@property(nonatomic) _Bool m_bCanReturnMoneyAfterResetPwd; // @synthesize m_bCanReturnMoneyAfterResetPwd;
@property(nonatomic) _Bool m_bNeedMoneyToResetPwd; // @synthesize m_bNeedMoneyToResetPwd;
@property(nonatomic) _Bool m_expiredFlag; // @synthesize m_expiredFlag;
@property(nonatomic) unsigned int m_virtualSingalTranscationLimit; // @synthesize m_virtualSingalTranscationLimit;
@property(nonatomic) unsigned int m_virtualDayTranscationLimit; // @synthesize m_virtualDayTranscationLimit;
@property(nonatomic) unsigned int m_physicalSignalTranscationLimit; // @synthesize m_physicalSignalTranscationLimit;
@property(nonatomic) unsigned int m_physicalDayTranscationLimit; // @synthesize m_physicalDayTranscationLimit;
@property(retain, nonatomic) NSString *m_bankPhone; // @synthesize m_bankPhone;
@property(retain, nonatomic) WCPayCredInfo *m_oWCPayCredInfo; // @synthesize m_oWCPayCredInfo;
@property(retain, nonatomic) NSString *m_bindSerial; // @synthesize m_bindSerial;
@property(retain, nonatomic) NSString *m_bindPhoneNumber; // @synthesize m_bindPhoneNumber;
@property(retain, nonatomic) NSString *m_cardType; // @synthesize m_cardType;
@property(retain, nonatomic) NSString *m_cardNumber; // @synthesize m_cardNumber;
@property(retain, nonatomic) NSString *m_cardTail; // @synthesize m_cardTail;
@property(retain, nonatomic) NSString *m_creditTypeID; // @synthesize m_creditTypeID;
@property(retain, nonatomic) NSString *m_cardLogoUrl; // @synthesize m_cardLogoUrl;
@property(retain, nonatomic) NSString *m_cardHolder; // @synthesize m_cardHolder;
@property(nonatomic) unsigned int m_cardBankTag; // @synthesize m_cardBankTag;
@property(retain, nonatomic) NSString *m_cardTypeName; // @synthesize m_cardTypeName;
@property(retain, nonatomic) NSString *m_cardBankType; // @synthesize m_cardBankType;
@property(retain, nonatomic) NSString *m_cardBankName; // @synthesize m_cardBankName;
@property(nonatomic) _Bool m_bankFlag; // @synthesize m_bankFlag;
- (_Bool)isMinimchCard;
- (_Bool)isYHTCard;
- (_Bool)canSetAsOfflinePayDefaultCard;
- (_Bool)isFQF;
- (id)honeyPayCardString;
- (_Bool)isHoneyPay;
- (_Bool)isBalance;
- (void)updateInvalid:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

