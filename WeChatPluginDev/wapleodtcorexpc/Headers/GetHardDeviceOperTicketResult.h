//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class HardDevice, NSString;

@interface GetHardDeviceOperTicketResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) HardDevice *device; // @dynamic device;
@property(nonatomic) unsigned int oper; // @dynamic oper;
@property(nonatomic) int ret; // @dynamic ret;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;

@end

