//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BankInfoItem, BindECardRes, JSEvent, NSArray, NSString, OpenECardRes, QryBankList4BindRes, WCPayBindCardInfo;

@interface WCPayECardControlData : NSObject
{
    int _openScene;
    JSEvent *_jsEvent;
    NSString *_reqSerial;
    NSString *_payPassword;
    NSString *_ecardType;
    NSString *_filledCardNumber;
    NSString *_filledPhoneNumber;
    NSString *_filledBankType;
    BankInfoItem *_selectedCardInfo;
    NSArray *_bankArray;
    QryBankList4BindRes *_bankListResponse;
    OpenECardRes *_openECardResponse;
    BindECardRes *_bindECardResponse;
    WCPayBindCardInfo *_ECardInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBindCardInfo *ECardInfo; // @synthesize ECardInfo=_ECardInfo;
@property(retain, nonatomic) BindECardRes *bindECardResponse; // @synthesize bindECardResponse=_bindECardResponse;
@property(retain, nonatomic) OpenECardRes *openECardResponse; // @synthesize openECardResponse=_openECardResponse;
@property(retain, nonatomic) QryBankList4BindRes *bankListResponse; // @synthesize bankListResponse=_bankListResponse;
@property(retain, nonatomic) NSArray *bankArray; // @synthesize bankArray=_bankArray;
@property(retain, nonatomic) BankInfoItem *selectedCardInfo; // @synthesize selectedCardInfo=_selectedCardInfo;
@property(retain, nonatomic) NSString *filledBankType; // @synthesize filledBankType=_filledBankType;
@property(copy, nonatomic) NSString *filledPhoneNumber; // @synthesize filledPhoneNumber=_filledPhoneNumber;
@property(copy, nonatomic) NSString *filledCardNumber; // @synthesize filledCardNumber=_filledCardNumber;
@property(copy, nonatomic) NSString *ecardType; // @synthesize ecardType=_ecardType;
@property(nonatomic) int openScene; // @synthesize openScene=_openScene;
@property(copy, nonatomic) NSString *payPassword; // @synthesize payPassword=_payPassword;
@property(copy, nonatomic) NSString *reqSerial; // @synthesize reqSerial=_reqSerial;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;

@end

