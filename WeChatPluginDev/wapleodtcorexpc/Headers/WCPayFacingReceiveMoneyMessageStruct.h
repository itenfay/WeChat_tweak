//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayFacingReceiveMoneyMessageStruct : NSObject
{
    int m_enWCPayFacingReceiveMoneyScene;
    NSString *m_nsTransactionID;
    NSString *m_nsUserName;
    NSString *m_nsDisplayName;
    unsigned int m_uiTimeStamp;
    long long m_llFee;
    NSString *m_nsFeeType;
    int m_enWCPayFacingReceiveMoneyStatus;
    NSString *m_nsOutTradeNo;
    unsigned int _m_expireTime;
    int _codeType;
    NSString *_m_voiceContent;
    NSString *_m_nsType;
    long long _m_n64SvrId;
    NSString *_mchPayerHeadImgUrl;
}

- (void).cxx_destruct;
@property(nonatomic) int codeType; // @synthesize codeType=_codeType;
@property(retain, nonatomic) NSString *mchPayerHeadImgUrl; // @synthesize mchPayerHeadImgUrl=_mchPayerHeadImgUrl;
@property(nonatomic) unsigned int m_expireTime; // @synthesize m_expireTime=_m_expireTime;
@property(nonatomic) long long m_n64SvrId; // @synthesize m_n64SvrId=_m_n64SvrId;
@property(retain, nonatomic) NSString *m_nsType; // @synthesize m_nsType=_m_nsType;
@property(retain, nonatomic) NSString *m_voiceContent; // @synthesize m_voiceContent=_m_voiceContent;
@property(retain, nonatomic) NSString *m_nsOutTradeNo; // @synthesize m_nsOutTradeNo;
@property(nonatomic) int m_enWCPayFacingReceiveMoneyStatus; // @synthesize m_enWCPayFacingReceiveMoneyStatus;
@property(nonatomic) int m_enWCPayFacingReceiveMoneyScene; // @synthesize m_enWCPayFacingReceiveMoneyScene;
@property(nonatomic) unsigned int m_uiTimeStamp; // @synthesize m_uiTimeStamp;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(retain, nonatomic) NSString *m_nsTransactionID; // @synthesize m_nsTransactionID;
@property(retain, nonatomic) NSString *m_nsDisplayName; // @synthesize m_nsDisplayName;
@property(retain, nonatomic) NSString *m_nsFeeType; // @synthesize m_nsFeeType;
@property(nonatomic) long long m_llFee; // @synthesize m_llFee;

@end

