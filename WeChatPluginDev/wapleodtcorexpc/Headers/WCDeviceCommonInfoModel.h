//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCDeviceSysFileInfo;

@interface WCDeviceCommonInfoModel : NSObject
{
    NSString *_bootSecTime;
    NSString *_countryCode;
    NSString *_language;
    NSString *_deviceName;
    NSString *_systemVersion;
    NSString *_machine;
    NSString *_carrierInfo;
    NSString *_physicalMemory;
    NSString *_disk;
    NSString *_sysFileTime;
    NSString *_model;
    NSString *_timeZone;
    NSString *_ua;
    WCDeviceSysFileInfo *_mcMetaFileInfo;
    NSString *_tnmId;
    NSString *_deviceInitTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *deviceInitTime; // @synthesize deviceInitTime=_deviceInitTime;
@property(retain, nonatomic) NSString *tnmId; // @synthesize tnmId=_tnmId;
@property(retain, nonatomic) WCDeviceSysFileInfo *mcMetaFileInfo; // @synthesize mcMetaFileInfo=_mcMetaFileInfo;
@property(retain, nonatomic) NSString *ua; // @synthesize ua=_ua;
@property(retain, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *sysFileTime; // @synthesize sysFileTime=_sysFileTime;
@property(retain, nonatomic) NSString *disk; // @synthesize disk=_disk;
@property(retain, nonatomic) NSString *physicalMemory; // @synthesize physicalMemory=_physicalMemory;
@property(retain, nonatomic) NSString *carrierInfo; // @synthesize carrierInfo=_carrierInfo;
@property(retain, nonatomic) NSString *machine; // @synthesize machine=_machine;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *bootSecTime; // @synthesize bootSecTime=_bootSecTime;

@end

