//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface NICInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int netType; // @dynamic netType;
@property(retain, nonatomic) NSString *nicDeviceId; // @dynamic nicDeviceId;
@property(retain, nonatomic) NSString *nicIspInfo; // @dynamic nicIspInfo;
@property(nonatomic) int nicRole; // @dynamic nicRole;
@property(retain, nonatomic) NSString *wanIp; // @dynamic wanIp;

@end

