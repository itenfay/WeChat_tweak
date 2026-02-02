//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OnClickPurchaseRes, OnClickRedeemRes, QryPurchaseResultRes, QrySettingResp, QryUsrFundDetailRes, RedeemFundRes;

@interface WCPayLQTControlData : NSObject
{
    _Bool _autoJumpChargeSettingVC;
    _Bool _showOpenSuccToast;
    _Bool _showKeyboard;
    _Bool _checkPurchaseFromLqGuide;
    unsigned int _lqtCurrentTransMoney;
    unsigned int _outerEntranceType;
    unsigned long long _lqtMoneyScene;
    QryUsrFundDetailRes *_userDetailFundResp;
    QryPurchaseResultRes *_qrypurchaseResultResp;
    OnClickRedeemRes *_clickRedeemResp;
    OnClickPurchaseRes *_clickPurchaseResp;
    RedeemFundRes *_redeemFundResp;
    QrySettingResp *_chargeSettingResp;
    NSString *_ecardtype;
    NSString *_extraData;
    long long _needOpenLqb;
    NSString *_outerPurchaseBindSerial;
    NSString *_outerTransMoney;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool checkPurchaseFromLqGuide; // @synthesize checkPurchaseFromLqGuide=_checkPurchaseFromLqGuide;
@property(nonatomic) _Bool showKeyboard; // @synthesize showKeyboard=_showKeyboard;
@property(nonatomic) unsigned int outerEntranceType; // @synthesize outerEntranceType=_outerEntranceType;
@property(retain, nonatomic) NSString *outerTransMoney; // @synthesize outerTransMoney=_outerTransMoney;
@property(retain, nonatomic) NSString *outerPurchaseBindSerial; // @synthesize outerPurchaseBindSerial=_outerPurchaseBindSerial;
@property(nonatomic) _Bool showOpenSuccToast; // @synthesize showOpenSuccToast=_showOpenSuccToast;
@property(nonatomic) _Bool autoJumpChargeSettingVC; // @synthesize autoJumpChargeSettingVC=_autoJumpChargeSettingVC;
@property(nonatomic) long long needOpenLqb; // @synthesize needOpenLqb=_needOpenLqb;
@property(retain, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) NSString *ecardtype; // @synthesize ecardtype=_ecardtype;
@property(retain, nonatomic) QrySettingResp *chargeSettingResp; // @synthesize chargeSettingResp=_chargeSettingResp;
@property(retain, nonatomic) RedeemFundRes *redeemFundResp; // @synthesize redeemFundResp=_redeemFundResp;
@property(retain, nonatomic) OnClickPurchaseRes *clickPurchaseResp; // @synthesize clickPurchaseResp=_clickPurchaseResp;
@property(retain, nonatomic) OnClickRedeemRes *clickRedeemResp; // @synthesize clickRedeemResp=_clickRedeemResp;
@property(retain, nonatomic) QryPurchaseResultRes *qrypurchaseResultResp; // @synthesize qrypurchaseResultResp=_qrypurchaseResultResp;
@property(retain, nonatomic) QryUsrFundDetailRes *userDetailFundResp; // @synthesize userDetailFundResp=_userDetailFundResp;
@property(nonatomic) unsigned int lqtCurrentTransMoney; // @synthesize lqtCurrentTransMoney=_lqtCurrentTransMoney;
@property(nonatomic) unsigned long long lqtMoneyScene; // @synthesize lqtMoneyScene=_lqtMoneyScene;
- (id)getCurrentAccountTypeName;

@end

