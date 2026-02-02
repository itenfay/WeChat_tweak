//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, WCPayBankCardInfo;

@interface WCPayCardBinInfo : NSObject
{
    NSString *m_cardBankType;
    NSString *m_cardBankName;
    NSString *m_cardType;
    NSString *m_cardTypeName;
    NSString *m_cardNumber;
    NSString *m_cardLogoUrl;
    NSString *m_bankPhone;
    NSString *m_nsForbidWord;
    NSArray *m_arrSupCredInfo;
    _Bool m_isBankUsable;
    _Bool m_isConfidentTrue;
    _Bool m_needUsrNameInfo;
    _Bool m_needUsrIDInfo;
    _Bool m_needValidDate;
    _Bool m_needCVVNumber;
    _Bool m_needUsrPhoneNumber;
    _Bool m_needPayMoneyAfferBind;
    _Bool m_canBindReturnMoney;
    _Bool m_needFirstName;
    _Bool m_needLastName;
    _Bool m_needCountry;
    _Bool m_needArea;
    _Bool m_needAddress;
    _Bool m_needPhoneNumber;
    _Bool m_needEmail;
    _Bool m_needZip;
    _Bool m_bSupportOfflinePay;
    unsigned int m_cardBankTag;
    unsigned int m_cardAuthMode;
    NSString *m_nsBrandUserName;
    NSString *m_nsBrandTips;
    NSDate *m_ndFetchArriveTime;
    NSString *m_nsAvailableSaveInfo;
    _Bool m_needShowProtocol;
    _Bool _support_foreign_mobile;
    NSString *m_usrName;
    NSString *m_nsFetchArriveTimeWording;
    NSString *_pre_auth_word;
    NSString *_m_arriveType;
    NSString *_m_nsBankNamePinYin;
    NSArray *_m_arrCreRule;
    WCPayBankCardInfo *_m_bankCardInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBankCardInfo *m_bankCardInfo; // @synthesize m_bankCardInfo=_m_bankCardInfo;
@property(retain, nonatomic) NSArray *m_arrCreRule; // @synthesize m_arrCreRule=_m_arrCreRule;
@property(retain, nonatomic) NSString *m_nsBankNamePinYin; // @synthesize m_nsBankNamePinYin=_m_nsBankNamePinYin;
@property(nonatomic) _Bool support_foreign_mobile; // @synthesize support_foreign_mobile=_support_foreign_mobile;
@property(retain, nonatomic) NSString *m_arriveType; // @synthesize m_arriveType=_m_arriveType;
@property(retain, nonatomic) NSString *pre_auth_word; // @synthesize pre_auth_word=_pre_auth_word;
@property(nonatomic) _Bool m_needShowProtocol; // @synthesize m_needShowProtocol;
@property(retain, nonatomic) NSString *m_nsAvailableSaveInfo; // @synthesize m_nsAvailableSaveInfo;
@property(retain, nonatomic) NSString *m_nsFetchArriveTimeWording; // @synthesize m_nsFetchArriveTimeWording;
@property(retain, nonatomic) NSDate *m_ndFetchArriveTime; // @synthesize m_ndFetchArriveTime;
@property(retain, nonatomic) NSString *m_nsBrandUserName; // @synthesize m_nsBrandUserName;
@property(retain, nonatomic) NSString *m_nsBrandTips; // @synthesize m_nsBrandTips;
@property(nonatomic) unsigned int m_cardAuthMode; // @synthesize m_cardAuthMode;
@property(nonatomic) unsigned int m_cardBankTag; // @synthesize m_cardBankTag;
@property(nonatomic) _Bool m_bSupportOfflinePay; // @synthesize m_bSupportOfflinePay;
@property(nonatomic) _Bool m_needZip; // @synthesize m_needZip;
@property(nonatomic) _Bool m_needEmail; // @synthesize m_needEmail;
@property(nonatomic) _Bool m_needPhoneNumber; // @synthesize m_needPhoneNumber;
@property(nonatomic) _Bool m_needAddress; // @synthesize m_needAddress;
@property(nonatomic) _Bool m_needArea; // @synthesize m_needArea;
@property(nonatomic) _Bool m_needCountry; // @synthesize m_needCountry;
@property(nonatomic) _Bool m_needLastName; // @synthesize m_needLastName;
@property(nonatomic) _Bool m_needFirstName; // @synthesize m_needFirstName;
@property(nonatomic) _Bool m_canBindReturnMoney; // @synthesize m_canBindReturnMoney;
@property(nonatomic) _Bool m_needPayMoneyAfferBind; // @synthesize m_needPayMoneyAfferBind;
@property(nonatomic) _Bool m_isBankUsable; // @synthesize m_isBankUsable;
@property(retain, nonatomic) NSString *m_usrName; // @synthesize m_usrName;
@property(nonatomic) _Bool m_needValidDate; // @synthesize m_needValidDate;
@property(nonatomic) _Bool m_needUsrPhoneNumber; // @synthesize m_needUsrPhoneNumber;
@property(nonatomic) _Bool m_needUsrNameInfo; // @synthesize m_needUsrNameInfo;
@property(nonatomic) _Bool m_needUsrIDInfo; // @synthesize m_needUsrIDInfo;
@property(nonatomic) _Bool m_needCVVNumber; // @synthesize m_needCVVNumber;
@property(nonatomic) _Bool m_isConfidentTrue; // @synthesize m_isConfidentTrue;
@property(retain, nonatomic) NSArray *m_arrSupCredInfo; // @synthesize m_arrSupCredInfo;
@property(retain, nonatomic) NSString *m_nsForbidWord; // @synthesize m_nsForbidWord;
@property(retain, nonatomic) NSString *m_bankPhone; // @synthesize m_bankPhone;
@property(retain, nonatomic) NSString *m_cardBankName; // @synthesize m_cardBankName;
@property(retain, nonatomic) NSString *m_cardLogoUrl; // @synthesize m_cardLogoUrl;
@property(retain, nonatomic) NSString *m_cardBankType; // @synthesize m_cardBankType;
@property(retain, nonatomic) NSString *m_cardNumber; // @synthesize m_cardNumber;
@property(retain, nonatomic) NSString *m_cardTypeName; // @synthesize m_cardTypeName;
@property(retain, nonatomic) NSString *m_cardType; // @synthesize m_cardType;
- (id)bankCardType;
- (id)pinYin;
- (id)bankIconUrl;
- (id)bankName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

