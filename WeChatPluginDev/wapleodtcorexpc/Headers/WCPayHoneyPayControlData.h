//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, CheckHoneyPayerResp, CheckHoneyPayerResp_HPCardTypeInfo, CheckHoneyUserResp, CreateHoneyPayCardResp, GetCreateTokenSignResp, GetHoneyPayCardResp, GetMCreditLineTokenSignResp, HoneyPayListResp, HoneyPayListResp_HoneyPayRecord, NSString, QryHoneyPayCardDetailResp, QryHoneyPayerDetailResp, QryHoneyUserDetailResp, WCPayBindCardInfo;

@interface WCPayHoneyPayControlData : NSObject
{
    _Bool _popWebView;
    HoneyPayListResp *_honeyPayListResp;
    CContact *_userContact;
    CheckHoneyPayerResp *_checkPayerResp;
    CheckHoneyPayerResp_HPCardTypeInfo *_selectedCardTypeInfo;
    CheckHoneyUserResp *_checkUserResp;
    GetCreateTokenSignResp *_getCreateTokenSignResp;
    CreateHoneyPayCardResp *_createdReponse;
    GetMCreditLineTokenSignResp *_getMCreditLineTokenSignResp;
    unsigned long long _maximumAmount;
    NSString *_wishing;
    HoneyPayListResp_HoneyPayRecord *_selectedHoneyPayRecord;
    QryHoneyPayerDetailResp *_payerDetailResp;
    QryHoneyUserDetailResp *_receiverDetailResp;
    GetHoneyPayCardResp *_getHoneyPayResp;
    QryHoneyPayCardDetailResp *_cardDetailResp;
    NSString *_cellCardNo;
    WCPayBindCardInfo *_honeyPayCardInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBindCardInfo *honeyPayCardInfo; // @synthesize honeyPayCardInfo=_honeyPayCardInfo;
@property(copy, nonatomic) NSString *cellCardNo; // @synthesize cellCardNo=_cellCardNo;
@property(retain, nonatomic) QryHoneyPayCardDetailResp *cardDetailResp; // @synthesize cardDetailResp=_cardDetailResp;
@property(retain, nonatomic) GetHoneyPayCardResp *getHoneyPayResp; // @synthesize getHoneyPayResp=_getHoneyPayResp;
@property(retain, nonatomic) QryHoneyUserDetailResp *receiverDetailResp; // @synthesize receiverDetailResp=_receiverDetailResp;
@property(retain, nonatomic) QryHoneyPayerDetailResp *payerDetailResp; // @synthesize payerDetailResp=_payerDetailResp;
@property(retain, nonatomic) HoneyPayListResp_HoneyPayRecord *selectedHoneyPayRecord; // @synthesize selectedHoneyPayRecord=_selectedHoneyPayRecord;
@property(copy, nonatomic) NSString *wishing; // @synthesize wishing=_wishing;
@property(nonatomic) unsigned long long maximumAmount; // @synthesize maximumAmount=_maximumAmount;
@property(retain, nonatomic) GetMCreditLineTokenSignResp *getMCreditLineTokenSignResp; // @synthesize getMCreditLineTokenSignResp=_getMCreditLineTokenSignResp;
@property(retain, nonatomic) CreateHoneyPayCardResp *createdReponse; // @synthesize createdReponse=_createdReponse;
@property(retain, nonatomic) GetCreateTokenSignResp *getCreateTokenSignResp; // @synthesize getCreateTokenSignResp=_getCreateTokenSignResp;
@property(retain, nonatomic) CheckHoneyUserResp *checkUserResp; // @synthesize checkUserResp=_checkUserResp;
@property(retain, nonatomic) CheckHoneyPayerResp_HPCardTypeInfo *selectedCardTypeInfo; // @synthesize selectedCardTypeInfo=_selectedCardTypeInfo;
@property(retain, nonatomic) CheckHoneyPayerResp *checkPayerResp; // @synthesize checkPayerResp=_checkPayerResp;
@property(retain, nonatomic) CContact *userContact; // @synthesize userContact=_userContact;
@property(retain, nonatomic) HoneyPayListResp *honeyPayListResp; // @synthesize honeyPayListResp=_honeyPayListResp;
@property(nonatomic) _Bool popWebView; // @synthesize popWebView=_popWebView;

@end

