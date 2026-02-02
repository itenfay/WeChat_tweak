//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, HardDevice, SKBuiltinBuffer_t;

@interface HardDeviceAuthRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *authBuffer; // @dynamic authBuffer;
@property(nonatomic) unsigned int authVer; // @dynamic authVer;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) HardDevice *hardDevice; // @dynamic hardDevice;

@end

