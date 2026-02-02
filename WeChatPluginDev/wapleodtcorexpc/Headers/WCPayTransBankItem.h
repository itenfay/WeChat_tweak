//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCPayTransBankItem
{
    unsigned int _m_uiBankFlag;
    unsigned int _m_uiChargeFee;
    NSString *_m_nsBankCardType;
    NSString *_m_nsBankName;
    NSString *_m_nsBankImageUrl;
    NSString *_m_nsMaintenanceText;
    NSString *_m_nsMaintenanceColor;
    NSString *_m_nsMaintenanceAlertTitle;
    NSString *_m_feeRateExplain;
    unsigned long long _m_minPondage;
    NSString *_m_nsPinYin;
    NSArray *_m_enterTimeList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *m_enterTimeList; // @synthesize m_enterTimeList=_m_enterTimeList;
@property(retain, nonatomic) NSString *m_nsPinYin; // @synthesize m_nsPinYin=_m_nsPinYin;
@property(nonatomic) unsigned long long m_minPondage; // @synthesize m_minPondage=_m_minPondage;
@property(retain, nonatomic) NSString *m_feeRateExplain; // @synthesize m_feeRateExplain=_m_feeRateExplain;
@property(retain, nonatomic) NSString *m_nsMaintenanceAlertTitle; // @synthesize m_nsMaintenanceAlertTitle=_m_nsMaintenanceAlertTitle;
@property(retain, nonatomic) NSString *m_nsMaintenanceColor; // @synthesize m_nsMaintenanceColor=_m_nsMaintenanceColor;
@property(retain, nonatomic) NSString *m_nsMaintenanceText; // @synthesize m_nsMaintenanceText=_m_nsMaintenanceText;
@property(nonatomic) unsigned int m_uiChargeFee; // @synthesize m_uiChargeFee=_m_uiChargeFee;
@property(nonatomic) unsigned int m_uiBankFlag; // @synthesize m_uiBankFlag=_m_uiBankFlag;
@property(retain, nonatomic) NSString *m_nsBankImageUrl; // @synthesize m_nsBankImageUrl=_m_nsBankImageUrl;
@property(retain, nonatomic) NSString *m_nsBankName; // @synthesize m_nsBankName=_m_nsBankName;
@property(retain, nonatomic) NSString *m_nsBankCardType; // @synthesize m_nsBankCardType=_m_nsBankCardType;
- (id)pinYin;
- (id)bankIconUrl;
- (id)bankName;
- (id)bankCardType;
- (_Bool)isUnderMaintenance;
- (id)initWithBankCardElem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

