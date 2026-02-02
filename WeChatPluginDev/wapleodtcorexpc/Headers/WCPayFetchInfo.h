//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCPayFetchQAInfo;

@interface WCPayFetchInfo : NSObject
{
    _Bool _m_bShowCharge;
    _Bool _m_bCalcCharge;
    _Bool _m_bISFullFetchDirect;
    unsigned int _m_uiRemainFee;
    unsigned int _m_uiMinChargeFee;
    NSString *_m_nsFetchChargeTitle;
    NSString *_m_nsFetchChargeRemark;
    NSArray *_m_arrAlertContent;
    NSArray *_m_arrKey;
    NSArray *_m_arrValue;
    NSString *_card_list_wording_title;
    NSString *_card_list_wording_content;
    WCPayFetchQAInfo *_withdraw_sector;
}

+ (id)GenFromDictionary:(id)arg1;
+ (id)fetchInfoOfJSONDic:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPayFetchQAInfo *withdraw_sector; // @synthesize withdraw_sector=_withdraw_sector;
@property(copy, nonatomic) NSString *card_list_wording_content; // @synthesize card_list_wording_content=_card_list_wording_content;
@property(copy, nonatomic) NSString *card_list_wording_title; // @synthesize card_list_wording_title=_card_list_wording_title;
@property(nonatomic) _Bool m_bISFullFetchDirect; // @synthesize m_bISFullFetchDirect=_m_bISFullFetchDirect;
@property(nonatomic) unsigned int m_uiMinChargeFee; // @synthesize m_uiMinChargeFee=_m_uiMinChargeFee;
@property(nonatomic) unsigned int m_uiRemainFee; // @synthesize m_uiRemainFee=_m_uiRemainFee;
@property(nonatomic) _Bool m_bCalcCharge; // @synthesize m_bCalcCharge=_m_bCalcCharge;
@property(nonatomic) _Bool m_bShowCharge; // @synthesize m_bShowCharge=_m_bShowCharge;
@property(retain, nonatomic) NSArray *m_arrValue; // @synthesize m_arrValue=_m_arrValue;
@property(retain, nonatomic) NSArray *m_arrKey; // @synthesize m_arrKey=_m_arrKey;
@property(retain, nonatomic) NSArray *m_arrAlertContent; // @synthesize m_arrAlertContent=_m_arrAlertContent;
@property(retain, nonatomic) NSString *m_nsFetchChargeRemark; // @synthesize m_nsFetchChargeRemark=_m_nsFetchChargeRemark;
@property(retain, nonatomic) NSString *m_nsFetchChargeTitle; // @synthesize m_nsFetchChargeTitle=_m_nsFetchChargeTitle;
- (void)genFromDic:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

