//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayAuthenRequestRetryInfo;

@interface WCPaySetWCPayPasswordStruct : NSObject
{
    NSString *m_nsWCPayPassword;
    NSString *m_nsRequestKey;
    unsigned int m_uiPayScene;
    unsigned int m_uiPayChannel;
    NSString *m_nsToken;
    NSString *m_nsVerifyCode;
    NSString *m_nsUUID;
    NSString *m_nsAppID;
    NSString *m_nsAppName;
    NSString *m_nsAppSource;
    unsigned int m_cardBankTag;
    _Bool m_bIsAutoDeduct;
    NSString *_autoDeductBankType;
    NSString *_autoDeductBankSerial;
    WCPayAuthenRequestRetryInfo *_m_retryInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayAuthenRequestRetryInfo *m_retryInfo; // @synthesize m_retryInfo=_m_retryInfo;
@property(copy, nonatomic) NSString *autoDeductBankSerial; // @synthesize autoDeductBankSerial=_autoDeductBankSerial;
@property(copy, nonatomic) NSString *autoDeductBankType; // @synthesize autoDeductBankType=_autoDeductBankType;
@property(nonatomic) _Bool m_bIsAutoDeduct; // @synthesize m_bIsAutoDeduct;
@property(nonatomic) unsigned int m_cardBankTag; // @synthesize m_cardBankTag;
@property(nonatomic) unsigned int m_uiPayScene; // @synthesize m_uiPayScene;
@property(nonatomic) unsigned int m_uiPayChannel; // @synthesize m_uiPayChannel;
@property(retain, nonatomic) NSString *m_nsWCPayPassword; // @synthesize m_nsWCPayPassword;
@property(retain, nonatomic) NSString *m_nsVerifyCode; // @synthesize m_nsVerifyCode;
@property(retain, nonatomic) NSString *m_nsUUID; // @synthesize m_nsUUID;
@property(retain, nonatomic) NSString *m_nsToken; // @synthesize m_nsToken;
@property(retain, nonatomic) NSString *m_nsRequestKey; // @synthesize m_nsRequestKey;
@property(retain, nonatomic) NSString *m_nsAppSource; // @synthesize m_nsAppSource;
@property(retain, nonatomic) NSString *m_nsAppName; // @synthesize m_nsAppName;
@property(retain, nonatomic) NSString *m_nsAppID; // @synthesize m_nsAppID;

@end

