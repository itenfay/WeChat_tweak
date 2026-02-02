//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCPayGenDigitalCertCgiResp : NSObject
{
    unsigned int _m_wxErrorType;
    int _m_crtEncryptType;
    unsigned int _m_retCode;
    NSString *_m_wxErrorMsg;
    NSString *_m_crtCrt;
    NSString *_m_crtNo;
    NSString *_m_retMsg;
    NSDictionary *_m_userInfo;
}

+ (id)GenFromDictionary:(id)arg1 WithErrorType:(unsigned int)arg2 ErrorMsg:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *m_userInfo; // @synthesize m_userInfo=_m_userInfo;
@property(retain, nonatomic) NSString *m_retMsg; // @synthesize m_retMsg=_m_retMsg;
@property(nonatomic) unsigned int m_retCode; // @synthesize m_retCode=_m_retCode;
@property(nonatomic) int m_crtEncryptType; // @synthesize m_crtEncryptType=_m_crtEncryptType;
@property(retain, nonatomic) NSString *m_crtNo; // @synthesize m_crtNo=_m_crtNo;
@property(retain, nonatomic) NSString *m_crtCrt; // @synthesize m_crtCrt=_m_crtCrt;
@property(retain, nonatomic) NSString *m_wxErrorMsg; // @synthesize m_wxErrorMsg=_m_wxErrorMsg;
@property(nonatomic) unsigned int m_wxErrorType; // @synthesize m_wxErrorType=_m_wxErrorType;
- (id)init;

@end

