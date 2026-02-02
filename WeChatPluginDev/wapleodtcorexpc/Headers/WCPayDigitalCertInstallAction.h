//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayDigitalCertInstallCrtWording;

@interface WCPayDigitalCertInstallAction : NSObject
{
    int _m_isHintCrt;
    int _m_isGenCert;
    int _m_isIgnoreCrt;
    int _m_noResetMobile;
    NSString *_m_balanceMobile;
    WCPayDigitalCertInstallCrtWording *_m_crt_wording;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPayDigitalCertInstallCrtWording *m_crt_wording; // @synthesize m_crt_wording=_m_crt_wording;
@property(nonatomic) int m_noResetMobile; // @synthesize m_noResetMobile=_m_noResetMobile;
@property(nonatomic) int m_isIgnoreCrt; // @synthesize m_isIgnoreCrt=_m_isIgnoreCrt;
@property(nonatomic) int m_isGenCert; // @synthesize m_isGenCert=_m_isGenCert;
@property(nonatomic) int m_isHintCrt; // @synthesize m_isHintCrt=_m_isHintCrt;
@property(retain, nonatomic) NSString *m_balanceMobile; // @synthesize m_balanceMobile=_m_balanceMobile;
- (_Bool)noResetMobile;
- (_Bool)showDigitalInstallLayout;

@end

