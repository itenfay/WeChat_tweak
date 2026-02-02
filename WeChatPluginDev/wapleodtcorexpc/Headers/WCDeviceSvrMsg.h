//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCDeviceSvrMsg : NSObject
{
    int m_type;
    unsigned int m_wifiStatus;
    NSString *m_deviceId;
    NSString *m_deviceType;
    long long m_sessionId;
    NSData *m_data;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_wifiStatus; // @synthesize m_wifiStatus;
@property(retain, nonatomic) NSData *m_data; // @synthesize m_data;
@property(nonatomic) long long m_sessionId; // @synthesize m_sessionId;
@property(retain, nonatomic) NSString *m_deviceType; // @synthesize m_deviceType;
@property(retain, nonatomic) NSString *m_deviceId; // @synthesize m_deviceId;
@property(nonatomic) int m_type; // @synthesize m_type;

@end

