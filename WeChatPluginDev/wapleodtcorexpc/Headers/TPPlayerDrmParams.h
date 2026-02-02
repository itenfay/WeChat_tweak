//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPPlayerDrmParams : NSObject
{
    long long _drmAbility;
    long long _drmType;
    long long _drmSecureLevel;
    long long _drmPrepareStartTimeMs;
    long long _drmPrepareEndTimeMs;
    long long _drmSupportSecureDecoder;
    long long _drmSupportSecureDecrypt;
    NSString *_drmComponentName;
    long long _drmOpenSessionStartTimeMs;
    long long _drmOpenSessionEndTimeMs;
    long long _drmGetProvisionReqStartTimeMs;
    long long _drmGetProvisionReqEndTimeMs;
    long long _drmSendProvisionReqTimeMs;
    long long _drmRecvProvisionRespTimeMs;
    long long _drmProvideProvisionRespStartTimeMs;
    long long _drmProvideProvisionRespEndTimeMs;
    long long _drmGetKeyReqStartTimeMs;
    long long _drmGetKeyReqEndTimeMs;
    long long _drmSendKeyReqTimeMs;
    long long _drmRecvKeyRespTimeMs;
    long long _drmProvideKeyRespStartTimeMs;
    long long _drmProvideKeyRespEndTimeMs;
    long long _drmCertificateStartTimeMs;
    long long _drmCertificateEndTimeMs;
    long long _drmLicenseStartTimeMs;
    long long _drmLicenseEndTimeMs;
}

- (void).cxx_destruct;
@property(nonatomic) long long drmLicenseEndTimeMs; // @synthesize drmLicenseEndTimeMs=_drmLicenseEndTimeMs;
@property(nonatomic) long long drmLicenseStartTimeMs; // @synthesize drmLicenseStartTimeMs=_drmLicenseStartTimeMs;
@property(nonatomic) long long drmCertificateEndTimeMs; // @synthesize drmCertificateEndTimeMs=_drmCertificateEndTimeMs;
@property(nonatomic) long long drmCertificateStartTimeMs; // @synthesize drmCertificateStartTimeMs=_drmCertificateStartTimeMs;
@property(nonatomic) long long drmProvideKeyRespEndTimeMs; // @synthesize drmProvideKeyRespEndTimeMs=_drmProvideKeyRespEndTimeMs;
@property(nonatomic) long long drmProvideKeyRespStartTimeMs; // @synthesize drmProvideKeyRespStartTimeMs=_drmProvideKeyRespStartTimeMs;
@property(nonatomic) long long drmRecvKeyRespTimeMs; // @synthesize drmRecvKeyRespTimeMs=_drmRecvKeyRespTimeMs;
@property(nonatomic) long long drmSendKeyReqTimeMs; // @synthesize drmSendKeyReqTimeMs=_drmSendKeyReqTimeMs;
@property(nonatomic) long long drmGetKeyReqEndTimeMs; // @synthesize drmGetKeyReqEndTimeMs=_drmGetKeyReqEndTimeMs;
@property(nonatomic) long long drmGetKeyReqStartTimeMs; // @synthesize drmGetKeyReqStartTimeMs=_drmGetKeyReqStartTimeMs;
@property(nonatomic) long long drmProvideProvisionRespEndTimeMs; // @synthesize drmProvideProvisionRespEndTimeMs=_drmProvideProvisionRespEndTimeMs;
@property(nonatomic) long long drmProvideProvisionRespStartTimeMs; // @synthesize drmProvideProvisionRespStartTimeMs=_drmProvideProvisionRespStartTimeMs;
@property(nonatomic) long long drmRecvProvisionRespTimeMs; // @synthesize drmRecvProvisionRespTimeMs=_drmRecvProvisionRespTimeMs;
@property(nonatomic) long long drmSendProvisionReqTimeMs; // @synthesize drmSendProvisionReqTimeMs=_drmSendProvisionReqTimeMs;
@property(nonatomic) long long drmGetProvisionReqEndTimeMs; // @synthesize drmGetProvisionReqEndTimeMs=_drmGetProvisionReqEndTimeMs;
@property(nonatomic) long long drmGetProvisionReqStartTimeMs; // @synthesize drmGetProvisionReqStartTimeMs=_drmGetProvisionReqStartTimeMs;
@property(nonatomic) long long drmOpenSessionEndTimeMs; // @synthesize drmOpenSessionEndTimeMs=_drmOpenSessionEndTimeMs;
@property(nonatomic) long long drmOpenSessionStartTimeMs; // @synthesize drmOpenSessionStartTimeMs=_drmOpenSessionStartTimeMs;
@property(copy, nonatomic) NSString *drmComponentName; // @synthesize drmComponentName=_drmComponentName;
@property(nonatomic) long long drmSupportSecureDecrypt; // @synthesize drmSupportSecureDecrypt=_drmSupportSecureDecrypt;
@property(nonatomic) long long drmSupportSecureDecoder; // @synthesize drmSupportSecureDecoder=_drmSupportSecureDecoder;
@property(nonatomic) long long drmPrepareEndTimeMs; // @synthesize drmPrepareEndTimeMs=_drmPrepareEndTimeMs;
@property(nonatomic) long long drmPrepareStartTimeMs; // @synthesize drmPrepareStartTimeMs=_drmPrepareStartTimeMs;
@property(nonatomic) long long drmSecureLevel; // @synthesize drmSecureLevel=_drmSecureLevel;
@property(nonatomic) long long drmType; // @synthesize drmType=_drmType;
@property(nonatomic) long long drmAbility; // @synthesize drmAbility=_drmAbility;
- (id)init;

@end

