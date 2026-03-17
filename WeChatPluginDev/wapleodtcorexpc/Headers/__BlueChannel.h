//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface __BlueChannel : NSObject
{
    int _m_state;
    long long _m_deviceId;
    long long _m_channelId;
    long long _m_sessionId;
}

@property(nonatomic) int m_state; // @synthesize m_state=_m_state;
@property(nonatomic) long long m_sessionId; // @synthesize m_sessionId=_m_sessionId;
@property(nonatomic) long long m_channelId; // @synthesize m_channelId=_m_channelId;
@property(nonatomic) long long m_deviceId; // @synthesize m_deviceId=_m_deviceId;

@end

