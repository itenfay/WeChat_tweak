//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DeviceAudioParam, DeviceVideoParam;

@interface ConfDeviceParam : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) DeviceAudioParam *audioParam; // @dynamic audioParam;
@property(nonatomic) unsigned long long roomid; // @dynamic roomid;
@property(retain, nonatomic) DeviceVideoParam *videoParam; // @dynamic videoParam;

@end

