//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, HardDevice, HardDeviceMsg, SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface SendHardDeviceMsgRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) HardDevice *hardDevice; // @dynamic hardDevice;
@property(retain, nonatomic) HardDeviceMsg *hardDeviceMsg; // @dynamic hardDeviceMsg;
@property(retain, nonatomic) SKBuiltinBuffer_t *sessionBuffer; // @dynamic sessionBuffer;

@end

