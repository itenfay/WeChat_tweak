//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString, VoipAddr;

@class WXPBGeneratedMessage;

@interface GetNICAddrSvrInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *nicDeviceId; // @dynamic nicDeviceId;
@property(retain, nonatomic) VoipAddr *punchSvr; // @dynamic punchSvr;

@end

