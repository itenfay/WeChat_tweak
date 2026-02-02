//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMIotDeviceExtInfo, NSDictionary, NSString, WCDeviceExtData;

@interface WCDevice : NSObject
{
    NSString *m_deviceType;
    NSString *m_deviceID;
    NSString *m_usrname;
    NSString *m_deviceName;
    long long m_DID;
    NSString *m_mac;
    NSString *m_md5Str;
    NSString *m_connProto;
    unsigned int m_connStrategy;
    unsigned int m_closeStrategy;
    int m_manuDataMacOffset;
    int m_serNumMacOffset;
    WCDeviceExtData *m_extData;
    NSDictionary *m_externalInfoJSONCache;
    unsigned int IntRes1;
    unsigned int IntRes2;
    NSString *StrRes1;
    NSString *StrRes2;
    NSString *_PLACE_HOLDER;
    MMIotDeviceExtInfo *_iotExtraInfo;
}

+ (id)swift_StrRes2;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)StrRes2;
+ (id)swift_StrRes1;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)StrRes1;
+ (id)swift_IntRes2;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)IntRes2;
+ (id)swift_IntRes1;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)IntRes1;
+ (id)swift_m_serNumMacOffset;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)m_serNumMacOffset;
+ (id)swift_m_manuDataMacOffset;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)m_manuDataMacOffset;
+ (id)swift_m_closeStrategy;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)m_closeStrategy;
+ (id)swift_m_connStrategy;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)m_connStrategy;
+ (id)swift_m_connProto;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)m_connProto;
+ (id)swift_m_md5Str;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)m_md5Str;
+ (id)swift_m_mac;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)m_mac;
+ (id)swift_m_DID;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)m_DID;
+ (id)swift_m_deviceName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)m_deviceName;
+ (id)swift_m_usrname;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_usrname;
+ (id)swift_m_deviceID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)m_deviceID;
+ (id)swift_m_deviceType;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_deviceType;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (_Bool)canShowSettingDeviceEntry;
+ (_Bool)hasBoundValidDevices;
- (void).cxx_destruct;
@property(retain, nonatomic) MMIotDeviceExtInfo *iotExtraInfo; // @synthesize iotExtraInfo=_iotExtraInfo;
@property(retain, nonatomic) NSString *PLACE_HOLDER; // @synthesize PLACE_HOLDER=_PLACE_HOLDER;
@property(retain, nonatomic) NSDictionary *m_externalInfoJSONCache; // @synthesize m_externalInfoJSONCache;
@property(retain, nonatomic) WCDeviceExtData *m_extData; // @synthesize m_extData;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(nonatomic) int m_serNumMacOffset; // @synthesize m_serNumMacOffset;
@property(nonatomic) int m_manuDataMacOffset; // @synthesize m_manuDataMacOffset;
@property(nonatomic) unsigned int m_closeStrategy; // @synthesize m_closeStrategy;
@property(nonatomic) unsigned int m_connStrategy; // @synthesize m_connStrategy;
@property(retain, nonatomic) NSString *m_connProto; // @synthesize m_connProto;
@property(retain, nonatomic) NSString *m_md5Str; // @synthesize m_md5Str;
@property(retain, nonatomic) NSString *m_mac; // @synthesize m_mac;
@property(nonatomic) long long m_DID; // @synthesize m_DID;
@property(retain, nonatomic) NSString *m_deviceName; // @synthesize m_deviceName;
@property(retain, nonatomic) NSString *m_usrname; // @synthesize m_usrname;
@property(retain, nonatomic) NSString *m_deviceID; // @synthesize m_deviceID;
@property(retain, nonatomic) NSString *m_deviceType; // @synthesize m_deviceType;
@property(readonly, copy) NSString *description;
- (id)deviceMacNumber;
- (id)deviceDisplayIconUrl;
- (id)deviceDisplayTitle;
- (void)setupDataBeforeWriteDB;
- (void)setupDataFromDB;
- (_Bool)isIgnoreInChatView;
- (_Bool)isAlwaysConnectInChatView;
- (_Bool)isConnectOnceInChatView;
- (_Bool)isContinueConnectWhenExit;
- (_Bool)isPedometerDev;
- (_Bool)isBleSimpleDev;
- (_Bool)isM7Device;
- (_Bool)isWifiDevice;
- (_Bool)isBLEDevice;
- (_Bool)isEADevice;
- (_Bool)isBluetoohDevice;
- (id)init;
- (id)ownerDevice;
- (id)subDevices;
- (id)subDeviceMd5;
- (_Bool)isSubLanDevice;
- (_Bool)canApplyURL:(id)arg1;
- (id)getDeviceSupportUrls;
- (id)getExternalInfoDictionary;
- (_Bool)supportMsg:(id)arg1;
- (_Bool)isValidDevice;
- (_Bool)hasAbility:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

