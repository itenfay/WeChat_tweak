//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString, PromptInfo, WCPayBalanceMenuInfo, WCPayLqpEntranceInfo;

@interface WCPayBalanceInfo : NSObject
{
    unsigned long long m_uiTotalBalance;
    unsigned long long m_uiAvailableBalance;
    unsigned long long m_uiFrozenBalance;
    unsigned long long m_uiFetchBalance;
    NSDate *m_ndFetchArriveTime;
    NSString *m_nsFetchArriveTimeWording;
    NSString *m_nsBankType;
    NSString *m_nsBindSerial;
    NSString *m_nsForbidWord;
    NSString *m_nsBalanceTelPhone;
    NSString *m_nsBalanceListUrl;
    _Bool m_bSupportOfflinePay;
    NSString *m_nsAvailFetchWording;
    NSString *m_nsMaxFetchWording;
    unsigned long long m_uiBalanceVersion;
    unsigned long long m_uiBalanceExpiredDate;
    int _default_card_state;
    NSString *_m_forbid_title;
    NSString *_m_forbid_url;
    NSString *_m_balanceShowWording;
    WCPayBalanceMenuInfo *_balance_menu_info;
    NSString *_m_balanceLogoUrl;
    unsigned long long _wallet_balance;
    unsigned long long _wallet_entrance_balance_switch_state;
    WCPayLqpEntranceInfo *_lqp_entrance_info;
    PromptInfo *_promptInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int default_card_state; // @synthesize default_card_state=_default_card_state;
@property(retain, nonatomic) PromptInfo *promptInfo; // @synthesize promptInfo=_promptInfo;
@property(retain) WCPayLqpEntranceInfo *lqp_entrance_info; // @synthesize lqp_entrance_info=_lqp_entrance_info;
@property(nonatomic) unsigned long long wallet_entrance_balance_switch_state; // @synthesize wallet_entrance_balance_switch_state=_wallet_entrance_balance_switch_state;
@property(nonatomic) unsigned long long wallet_balance; // @synthesize wallet_balance=_wallet_balance;
@property(retain, nonatomic) NSString *m_balanceLogoUrl; // @synthesize m_balanceLogoUrl=_m_balanceLogoUrl;
@property(retain, nonatomic) WCPayBalanceMenuInfo *balance_menu_info; // @synthesize balance_menu_info=_balance_menu_info;
@property(retain, nonatomic) NSString *m_balanceShowWording; // @synthesize m_balanceShowWording=_m_balanceShowWording;
@property(retain, nonatomic) NSString *m_forbid_url; // @synthesize m_forbid_url=_m_forbid_url;
@property(retain, nonatomic) NSString *m_forbid_title; // @synthesize m_forbid_title=_m_forbid_title;
@property(retain, nonatomic) NSString *m_nsFetchArriveTimeWording; // @synthesize m_nsFetchArriveTimeWording;
@property(nonatomic) unsigned long long m_uiBalanceExpiredDate; // @synthesize m_uiBalanceExpiredDate;
@property(nonatomic) unsigned long long m_uiBalanceVersion; // @synthesize m_uiBalanceVersion;
@property(retain, nonatomic) NSString *m_nsMaxFetchWording; // @synthesize m_nsMaxFetchWording;
@property(retain, nonatomic) NSString *m_nsAvailFetchWording; // @synthesize m_nsAvailFetchWording;
@property(nonatomic) _Bool m_bSupportOfflinePay; // @synthesize m_bSupportOfflinePay;
@property(retain, nonatomic) NSString *m_nsBalanceListUrl; // @synthesize m_nsBalanceListUrl;
@property(retain, nonatomic) NSString *m_nsBalanceTelPhone; // @synthesize m_nsBalanceTelPhone;
@property(retain, nonatomic) NSString *m_nsForbidWord; // @synthesize m_nsForbidWord;
@property(retain, nonatomic) NSString *m_nsBindSerial; // @synthesize m_nsBindSerial;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;
@property(retain, nonatomic) NSDate *m_ndFetchArriveTime; // @synthesize m_ndFetchArriveTime;
@property(nonatomic) unsigned long long m_uiTotalBalance; // @synthesize m_uiTotalBalance;
@property(nonatomic) unsigned long long m_uiFrozenBalance; // @synthesize m_uiFrozenBalance;
@property(nonatomic) unsigned long long m_uiFetchBalance; // @synthesize m_uiFetchBalance;
@property(nonatomic) unsigned long long m_uiAvailableBalance; // @synthesize m_uiAvailableBalance;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

