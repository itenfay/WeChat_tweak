//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, WCDevice;

@interface WCDeviceMessage : NSObject
{
    WCDevice *m_device;
    unsigned long long m_sessionID;
    NSData *m_data;
    NSData *m_sessionBuffer;
    unsigned int m_type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_type; // @synthesize m_type;
@property(retain, nonatomic) NSData *m_sessionBuffer; // @synthesize m_sessionBuffer;
@property(retain, nonatomic) NSData *m_data; // @synthesize m_data;
@property(nonatomic) unsigned long long m_sessionID; // @synthesize m_sessionID;
@property(retain, nonatomic) WCDevice *m_device; // @synthesize m_device;

@end

