//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface NetCmdSendOnlyEvent
{
    struct INetCmdSendOnly *m_netcmd;
    int m_cmdstatus;
}

@property(nonatomic) struct INetCmdSendOnly *m_netcmd; // @synthesize m_netcmd;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (void)Stop;
- (void)TryStart;
- (void)dealloc;
- (id)init;

@end

