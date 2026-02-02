//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WalletMixSpGenprepayResp;

@interface WCPayPayAuthNativeCgiResp : NSObject
{
    unsigned int _m_wxErrorType;
    unsigned int _m_retCode;
    NSString *_m_wxErrorMsg;
    NSString *_m_retMsg;
    NSString *_m_reqKey;
    NSString *_m_appId;
    NSString *_m_appSource;
    NSString *_m_productId;
    WalletMixSpGenprepayResp *_m_walletMixSpGenprepayResp;
}

+ (id)GenFromDictionary:(id)arg1 WithErrorType:(unsigned int)arg2 ErrorMsg:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WalletMixSpGenprepayResp *m_walletMixSpGenprepayResp; // @synthesize m_walletMixSpGenprepayResp=_m_walletMixSpGenprepayResp;
@property(retain, nonatomic) NSString *m_productId; // @synthesize m_productId=_m_productId;
@property(retain, nonatomic) NSString *m_appSource; // @synthesize m_appSource=_m_appSource;
@property(retain, nonatomic) NSString *m_appId; // @synthesize m_appId=_m_appId;
@property(retain, nonatomic) NSString *m_reqKey; // @synthesize m_reqKey=_m_reqKey;
@property(retain, nonatomic) NSString *m_retMsg; // @synthesize m_retMsg=_m_retMsg;
@property(nonatomic) unsigned int m_retCode; // @synthesize m_retCode=_m_retCode;
@property(retain, nonatomic) NSString *m_wxErrorMsg; // @synthesize m_wxErrorMsg=_m_wxErrorMsg;
@property(nonatomic) unsigned int m_wxErrorType; // @synthesize m_wxErrorType=_m_wxErrorType;

@end

