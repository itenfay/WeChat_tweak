//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class HardDevice, ModContact, NSString;

@interface BatchSearchHardDeviceResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bindTicket; // @dynamic bindTicket;
@property(retain, nonatomic) ModContact *contact; // @dynamic contact;
@property(retain, nonatomic) HardDevice *device; // @dynamic device;
@property(retain, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(retain, nonatomic) NSString *mac; // @dynamic mac;
@property(nonatomic) unsigned int ret; // @dynamic ret;

@end

