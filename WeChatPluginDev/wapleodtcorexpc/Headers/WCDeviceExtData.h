//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDeviceExtData : NSObject
{
    unsigned int m_deviceTypeMainDevice;
    unsigned int m_isEnterMyDevice;
    int _m_deviceSourceType;
    NSString *m_alias;
    NSString *m_iconUrl;
    NSString *m_jumpUrl;
    NSString *m_deviceTitle;
    NSString *m_deviceDesc;
    NSString *m_category;
    long long m_bleSimpleProtol;
    NSString *m_ability;
    NSString *m_serialNumber;
    NSString *_m_abilityExtInfo;
    NSString *_m_subDeviceIDList;
}

- (void).cxx_destruct;
@property(nonatomic) int m_deviceSourceType; // @synthesize m_deviceSourceType=_m_deviceSourceType;
@property(retain, nonatomic) NSString *m_subDeviceIDList; // @synthesize m_subDeviceIDList=_m_subDeviceIDList;
@property(retain, nonatomic) NSString *m_abilityExtInfo; // @synthesize m_abilityExtInfo=_m_abilityExtInfo;
@property(retain, nonatomic) NSString *m_serialNumber; // @synthesize m_serialNumber;
@property(retain, nonatomic) NSString *m_ability; // @synthesize m_ability;
@property(nonatomic) long long m_bleSimpleProtol; // @synthesize m_bleSimpleProtol;
@property(nonatomic) unsigned int m_isEnterMyDevice; // @synthesize m_isEnterMyDevice;
@property(nonatomic) unsigned int m_deviceTypeMainDevice; // @synthesize m_deviceTypeMainDevice;
@property(retain, nonatomic) NSString *m_category; // @synthesize m_category;
@property(retain, nonatomic) NSString *m_deviceDesc; // @synthesize m_deviceDesc;
@property(retain, nonatomic) NSString *m_deviceTitle; // @synthesize m_deviceTitle;
@property(retain, nonatomic) NSString *m_jumpUrl; // @synthesize m_jumpUrl;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl;
@property(retain, nonatomic) NSString *m_alias; // @synthesize m_alias;

@end

