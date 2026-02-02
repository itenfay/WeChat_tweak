//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FieldAreaInfo, NSArray, NSMutableArray, NSString, WCPayBeforePayInfo, WCPayEntrustPayInfo, WCPaySimpleCashierInfo, WCPayTradeFavInfo;

@interface WCPayMultiOrderDetail : NSObject
{
    unsigned int m_productNum;
    long long m_totalFee;
    NSArray *m_supportBankArray;
    NSMutableArray *m_orderDetailArray;
    _Bool m_isOpenProtocal;
    _Bool m_bNeedBindCardToShowFavInfo;
    NSString *m_nsDiscountWording;
    NSString *m_nsFavorRuleWording;
    WCPayTradeFavInfo *m_oWCPayTradeFavInfo;
    unsigned long long m_assignUserInfoPay;
    NSString *m_nsJumpToSafariUrl;
    WCPayEntrustPayInfo *m_entrustPayInfo;
    _Bool _m_isSupportBindCard;
    _Bool _m_isSupportRetry;
    _Bool _bIsUseNewPaidSuccPage;
    int _is_use_show_info;
    NSString *m_assignedUserName;
    NSString *m_assignUserCreId;
    long long m_assignUserCreType;
    NSString *m_assignPayInfo;
    NSString *m_payFlag;
    NSString *_paySuccBtnWording;
    WCPayBeforePayInfo *_m_beforePayInfo;
    NSArray *_show_info;
    NSArray *_fetch_charge_show_info;
    unsigned long long _is_open_field_area;
    FieldAreaInfo *_field_area_info;
    NSString *_price_total_fee;
    NSString *_price_fee_type;
    NSString *_price_fee_symbol;
    NSString *_settlement_fee;
    NSString *_settlement_type;
    NSString *_settlement_symbol;
    WCPaySimpleCashierInfo *_simple_cashier_info;
}

- (void).cxx_destruct;
@property(retain) WCPaySimpleCashierInfo *simple_cashier_info; // @synthesize simple_cashier_info=_simple_cashier_info;
@property(retain) NSString *settlement_symbol; // @synthesize settlement_symbol=_settlement_symbol;
@property(retain) NSString *settlement_type; // @synthesize settlement_type=_settlement_type;
@property(retain) NSString *settlement_fee; // @synthesize settlement_fee=_settlement_fee;
@property(retain) NSString *price_fee_symbol; // @synthesize price_fee_symbol=_price_fee_symbol;
@property(retain) NSString *price_fee_type; // @synthesize price_fee_type=_price_fee_type;
@property(retain) NSString *price_total_fee; // @synthesize price_total_fee=_price_total_fee;
@property(retain) FieldAreaInfo *field_area_info; // @synthesize field_area_info=_field_area_info;
@property unsigned long long is_open_field_area; // @synthesize is_open_field_area=_is_open_field_area;
@property(retain, nonatomic) NSArray *fetch_charge_show_info; // @synthesize fetch_charge_show_info=_fetch_charge_show_info;
@property(retain, nonatomic) NSArray *show_info; // @synthesize show_info=_show_info;
@property(nonatomic) int is_use_show_info; // @synthesize is_use_show_info=_is_use_show_info;
@property(retain, nonatomic) WCPayBeforePayInfo *m_beforePayInfo; // @synthesize m_beforePayInfo=_m_beforePayInfo;
@property(nonatomic) _Bool bIsUseNewPaidSuccPage; // @synthesize bIsUseNewPaidSuccPage=_bIsUseNewPaidSuccPage;
@property(retain, nonatomic) NSString *paySuccBtnWording; // @synthesize paySuccBtnWording=_paySuccBtnWording;
@property(nonatomic) _Bool m_isSupportRetry; // @synthesize m_isSupportRetry=_m_isSupportRetry;
@property(nonatomic) _Bool m_isSupportBindCard; // @synthesize m_isSupportBindCard=_m_isSupportBindCard;
@property(retain, nonatomic) WCPayEntrustPayInfo *m_entrustPayInfo; // @synthesize m_entrustPayInfo;
@property(retain, nonatomic) NSString *m_nsFavorRuleWording; // @synthesize m_nsFavorRuleWording;
@property(retain, nonatomic) NSString *m_nsDiscountWording; // @synthesize m_nsDiscountWording;
@property(retain, nonatomic) NSString *m_payFlag; // @synthesize m_payFlag;
@property(retain, nonatomic) NSString *m_nsJumpToSafariUrl; // @synthesize m_nsJumpToSafariUrl;
@property(retain, nonatomic) NSString *m_assignPayInfo; // @synthesize m_assignPayInfo;
@property(nonatomic) long long m_assignUserCreType; // @synthesize m_assignUserCreType;
@property(retain, nonatomic) NSString *m_assignUserCreId; // @synthesize m_assignUserCreId;
@property(retain, nonatomic) NSString *m_assignedUserName; // @synthesize m_assignedUserName;
@property(nonatomic) unsigned long long m_assignUserInfoPay; // @synthesize m_assignUserInfoPay;
@property(nonatomic) _Bool m_bNeedBindCardToShowFavInfo; // @synthesize m_bNeedBindCardToShowFavInfo;
@property(retain, nonatomic) WCPayTradeFavInfo *m_oWCPayTradeFavInfo; // @synthesize m_oWCPayTradeFavInfo;
@property(nonatomic) _Bool m_isOpenProtocal; // @synthesize m_isOpenProtocal;
@property(retain, nonatomic) NSMutableArray *m_orderDetailArray; // @synthesize m_orderDetailArray;
@property(retain, nonatomic) NSArray *m_supportBankArray; // @synthesize m_supportBankArray;
@property(nonatomic) long long m_totalFee; // @synthesize m_totalFee;
@property(nonatomic) unsigned int m_productNum; // @synthesize m_productNum;

@end

