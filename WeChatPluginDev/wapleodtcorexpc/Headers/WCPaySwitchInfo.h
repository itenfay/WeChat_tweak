//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPaySwitchInfo : NSObject
{
    _Bool m_bSupportOfflinePay;
    _Bool m_bShowedFetch;
    _Bool m_bUsedBalance;
    _Bool m_bSupportBarCodeOfflinePay;
    _Bool m_bSupportQRCodeOfflinePay;
    _Bool m_bUsedMainCard;
    _Bool m_bCanSwitchWallet;
    _Bool m_bEnableCardDetailUrl;
    _Bool m_bEnableReportLocation;
    _Bool m_bIsHideBalanceValue;
    _Bool m_bIsBalanceDetailShowRealnameGuide;
    _Bool m_bIsShowOrderHistoryH5;
    _Bool m_bSupportTouchID;
    _Bool m_bEnableReportSSID;
    _Bool _m_bConfirmTouchAuth;
    _Bool _m_bLCTBalance;
    _Bool _m_bShowBalanceValue;
    _Bool _m_bSupportBindCardOpt;
    _Bool _m_bEnableNewPayManage;
}

@property(nonatomic) _Bool m_bEnableNewPayManage; // @synthesize m_bEnableNewPayManage=_m_bEnableNewPayManage;
@property(nonatomic) _Bool m_bSupportBindCardOpt; // @synthesize m_bSupportBindCardOpt=_m_bSupportBindCardOpt;
@property(nonatomic) _Bool m_bShowBalanceValue; // @synthesize m_bShowBalanceValue=_m_bShowBalanceValue;
@property(nonatomic) _Bool m_bLCTBalance; // @synthesize m_bLCTBalance=_m_bLCTBalance;
@property(nonatomic) _Bool m_bConfirmTouchAuth; // @synthesize m_bConfirmTouchAuth=_m_bConfirmTouchAuth;
@property(nonatomic) _Bool m_bEnableReportSSID; // @synthesize m_bEnableReportSSID;
@property(nonatomic) _Bool m_bSupportTouchID; // @synthesize m_bSupportTouchID;
@property(nonatomic) _Bool m_bIsShowOrderHistoryH5; // @synthesize m_bIsShowOrderHistoryH5;
@property(nonatomic) _Bool m_bIsBalanceDetailShowRealnameGuide; // @synthesize m_bIsBalanceDetailShowRealnameGuide;
@property(nonatomic) _Bool m_bIsHideBalanceValue; // @synthesize m_bIsHideBalanceValue;
@property(nonatomic) _Bool m_bEnableReportLocation; // @synthesize m_bEnableReportLocation;
@property(nonatomic) _Bool m_bEnableCardDetailUrl; // @synthesize m_bEnableCardDetailUrl;
@property(nonatomic) _Bool m_bCanSwitchWallet; // @synthesize m_bCanSwitchWallet;
@property(nonatomic) _Bool m_bUsedMainCard; // @synthesize m_bUsedMainCard;
@property(nonatomic) _Bool m_bSupportQRCodeOfflinePay; // @synthesize m_bSupportQRCodeOfflinePay;
@property(nonatomic) _Bool m_bSupportBarCodeOfflinePay; // @synthesize m_bSupportBarCodeOfflinePay;
@property(nonatomic) _Bool m_bUsedBalance; // @synthesize m_bUsedBalance;
@property(nonatomic) _Bool m_bShowedFetch; // @synthesize m_bShowedFetch;
@property(nonatomic) _Bool m_bSupportOfflinePay; // @synthesize m_bSupportOfflinePay;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

