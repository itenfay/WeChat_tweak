//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString;

@interface WCLanDeviceEvent
{
    NSString *m_deviceId;
    JSEvent *m_event;
    long long m_cmd;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_cmd; // @synthesize m_cmd;
@property(retain, nonatomic) JSEvent *m_event; // @synthesize m_event;
@property(retain, nonatomic) NSString *m_deviceId; // @synthesize m_deviceId;

@end

