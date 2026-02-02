//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCLanDeviceTask : NSObject
{
    int m_subTaskId;
    NSString *m_deviceType;
    NSString *m_deviceId;
    long long m_taskId;
    long long m_taskCmd;
}

- (void).cxx_destruct;
@property(nonatomic) int m_subTaskId; // @synthesize m_subTaskId;
@property(nonatomic) long long m_taskCmd; // @synthesize m_taskCmd;
@property(nonatomic) long long m_taskId; // @synthesize m_taskId;
@property(retain, nonatomic) NSString *m_deviceId; // @synthesize m_deviceId;
@property(retain, nonatomic) NSString *m_deviceType; // @synthesize m_deviceType;

@end

