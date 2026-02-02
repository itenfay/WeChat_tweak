//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ProxyInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *password; // @dynamic password;
@property(retain, nonatomic) NSString *proxyIp; // @dynamic proxyIp;
@property(nonatomic) unsigned int proxyPort; // @dynamic proxyPort;
@property(nonatomic) unsigned int proxyType; // @dynamic proxyType;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

