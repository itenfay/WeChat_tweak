//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WCPayIdKeyRegularReporter;
@protocol WCPayGenDigitalCertCgiDelegate;

@interface WCPayGenDigitalCertCgi : NSObject
{
    unsigned int _m_payScene;
    int _m_type;
    int _m_idType;
    unsigned int _cert_encrypt_type;
    NSString *_m_trueName;
    NSString *_m_idNo;
    NSString *_m_crtSms;
    NSString *_m_reqKey;
    NSString *_cre_tail;
    NSString *_m_token;
    NSDictionary *_m_userInfo;
    id <WCPayGenDigitalCertCgiDelegate> _m_delegate;
    NSString *_m_crtCsr;
    NSString *_m_snSalt;
    NSString *_m_deviceName;
    NSString *_m_deviceOS;
    NSString *_m_crtDeviceId;
    WCPayIdKeyRegularReporter *_m_cgiReporter;
    WCPayIdKeyRegularReporter *_m_controlReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayIdKeyRegularReporter *m_controlReporter; // @synthesize m_controlReporter=_m_controlReporter;
@property(retain, nonatomic) WCPayIdKeyRegularReporter *m_cgiReporter; // @synthesize m_cgiReporter=_m_cgiReporter;
@property(retain, nonatomic) NSString *m_crtDeviceId; // @synthesize m_crtDeviceId=_m_crtDeviceId;
@property(retain, nonatomic) NSString *m_deviceOS; // @synthesize m_deviceOS=_m_deviceOS;
@property(retain, nonatomic) NSString *m_deviceName; // @synthesize m_deviceName=_m_deviceName;
@property(retain, nonatomic) NSString *m_snSalt; // @synthesize m_snSalt=_m_snSalt;
@property(retain, nonatomic) NSString *m_crtCsr; // @synthesize m_crtCsr=_m_crtCsr;
@property(nonatomic) __weak id <WCPayGenDigitalCertCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSDictionary *m_userInfo; // @synthesize m_userInfo=_m_userInfo;
@property(nonatomic) unsigned int cert_encrypt_type; // @synthesize cert_encrypt_type=_cert_encrypt_type;
@property(retain, nonatomic) NSString *m_token; // @synthesize m_token=_m_token;
@property(retain, nonatomic) NSString *cre_tail; // @synthesize cre_tail=_cre_tail;
@property(retain, nonatomic) NSString *m_reqKey; // @synthesize m_reqKey=_m_reqKey;
@property(retain, nonatomic) NSString *m_crtSms; // @synthesize m_crtSms=_m_crtSms;
@property(nonatomic) int m_idType; // @synthesize m_idType=_m_idType;
@property(retain, nonatomic) NSString *m_idNo; // @synthesize m_idNo=_m_idNo;
@property(retain, nonatomic) NSString *m_trueName; // @synthesize m_trueName=_m_trueName;
@property(nonatomic) int m_type; // @synthesize m_type=_m_type;
@property(nonatomic) unsigned int m_payScene; // @synthesize m_payScene=_m_payScene;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequest;
- (void)genInternalInfo;
- (void)callErrorDelegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

