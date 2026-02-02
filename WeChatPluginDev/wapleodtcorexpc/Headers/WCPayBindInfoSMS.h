//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBindInfoSMS : NSObject
{
    unsigned int m_flag;
    NSString *m_payPassword;
    NSString *m_SMSMsg;
    NSString *m_retKey;
    _Bool m_canPassPwd;
    NSString *m_usertoken;
    NSString *_bank_type;
    NSString *_autoDeductBankType;
    NSString *_autoDeductBankSerial;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(retain) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *autoDeductBankSerial; // @synthesize autoDeductBankSerial=_autoDeductBankSerial;
@property(copy, nonatomic) NSString *autoDeductBankType; // @synthesize autoDeductBankType=_autoDeductBankType;
@property(retain, nonatomic) NSString *bank_type; // @synthesize bank_type=_bank_type;
@property(retain, nonatomic) NSString *m_usertoken; // @synthesize m_usertoken;
@property(nonatomic) _Bool m_canPassPwd; // @synthesize m_canPassPwd;
@property(retain, nonatomic) NSString *m_SMSMsg; // @synthesize m_SMSMsg;
@property(retain, nonatomic) NSString *m_retKey; // @synthesize m_retKey;
@property(retain, nonatomic) NSString *m_payPassword; // @synthesize m_payPassword;
@property(nonatomic) unsigned int m_flag; // @synthesize m_flag;

@end

