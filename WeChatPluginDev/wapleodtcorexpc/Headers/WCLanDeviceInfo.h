//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCLanDeviceInfo : NSObject
{
    NSString *m_deviceType;
    NSString *m_deviceId;
    NSString *m_manufacturerData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_manufacturerData; // @synthesize m_manufacturerData;
@property(retain, nonatomic) NSString *m_deviceId; // @synthesize m_deviceId;
@property(retain, nonatomic) NSString *m_deviceType; // @synthesize m_deviceType;

@end

