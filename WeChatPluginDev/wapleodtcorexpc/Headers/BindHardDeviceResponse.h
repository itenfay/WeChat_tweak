//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, HardDevice, HardDeviceAttr;

@interface BindHardDeviceResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(retain, nonatomic) HardDevice *hardDevice; // @dynamic hardDevice;
@property(retain, nonatomic) HardDeviceAttr *hardDeviceAttr; // @dynamic hardDeviceAttr;

@end

