//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface AffRoamWinDeviceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bindTicket; // @dynamic bindTicket;
@property(retain, nonatomic) NSString *tcpIp; // @dynamic tcpIp;
@property(nonatomic) int tcpPort; // @dynamic tcpPort;
@property(nonatomic) int usbmuxdPort; // @dynamic usbmuxdPort;

@end

