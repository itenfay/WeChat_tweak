//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCDeviceTask : NSObject
{
    unsigned char m_req;
    unsigned char m_resp;
    unsigned short m_seq;
    long long m_taskId;
    long long m_deviceId;
    struct AccessoryCmd *m_cmd;
}

@property(nonatomic) unsigned char m_resp; // @synthesize m_resp;
@property(nonatomic) unsigned char m_req; // @synthesize m_req;
@property(nonatomic) struct AccessoryCmd *m_cmd; // @synthesize m_cmd;
@property(nonatomic) unsigned short m_seq; // @synthesize m_seq;
@property(nonatomic) long long m_deviceId; // @synthesize m_deviceId;
@property(nonatomic) long long m_taskId; // @synthesize m_taskId;
- (void)dealloc;

@end

