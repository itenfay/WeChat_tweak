//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCDeviceUserSportDevice
{
    _Bool m_isHealThkitOrApp;
    unsigned int m_stepCount;
    NSString *m_deviceId;
    NSString *m_deviceType;
    NSString *m_bundleId;
    NSString *m_appName;
    NSString *m_deviceName;
    NSString *m_iconUrl;
    NSString *m_connProto;
    long long m_bleSimpleProtol;
    long long m_DID;
    NSString *_m_iconName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_iconName; // @synthesize m_iconName=_m_iconName;
@property(nonatomic) unsigned int m_stepCount; // @synthesize m_stepCount;
@property(nonatomic) long long m_DID; // @synthesize m_DID;
@property(nonatomic) long long m_bleSimpleProtol; // @synthesize m_bleSimpleProtol;
@property(retain, nonatomic) NSString *m_connProto; // @synthesize m_connProto;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl;
@property(retain, nonatomic) NSString *m_deviceName; // @synthesize m_deviceName;
@property(retain, nonatomic) NSString *m_appName; // @synthesize m_appName;
@property(retain, nonatomic) NSString *m_bundleId; // @synthesize m_bundleId;
@property(retain, nonatomic) NSString *m_deviceType; // @synthesize m_deviceType;
@property(retain, nonatomic) NSString *m_deviceId; // @synthesize m_deviceId;
@property(nonatomic) _Bool m_isHealThkitOrApp; // @synthesize m_isHealThkitOrApp;
- (_Bool)isSimpleProfileDevcie;
- (_Bool)isBLEDevice;
- (_Bool)isM7Device;

@end

