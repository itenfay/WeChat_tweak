//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, HardDevice;

@class WXPBGeneratedMessage;

@interface UnbindHardDeviceRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(retain, nonatomic) HardDevice *hardDevice; // @dynamic hardDevice;

@end

