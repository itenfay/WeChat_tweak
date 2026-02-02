//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface __WCDeviceSendDataTask
{
    int _m_sendState;
    long long _m_sessionId;
    unsigned long long _m_sendCGIFinishTime;
}

@property(nonatomic) unsigned long long m_sendCGIFinishTime; // @synthesize m_sendCGIFinishTime=_m_sendCGIFinishTime;
@property int m_sendState; // @synthesize m_sendState=_m_sendState;
@property long long m_sessionId; // @synthesize m_sessionId=_m_sessionId;
- (id)init;

@end

