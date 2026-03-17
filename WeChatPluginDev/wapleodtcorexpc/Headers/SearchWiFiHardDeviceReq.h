//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, HardDevice, NSString;

@class WXPBGeneratedMessage;

@interface SearchWiFiHardDeviceReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *extraParams; // @dynamic extraParams;
@property(retain, nonatomic) HardDevice *hardDevice; // @dynamic hardDevice;

@end

