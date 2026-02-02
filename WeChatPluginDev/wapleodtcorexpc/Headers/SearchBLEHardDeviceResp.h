//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, HardDevice, HardDeviceAttr, ModContact, NSString;

@interface SearchBLEHardDeviceResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bindTicket; // @dynamic bindTicket;
@property(retain, nonatomic) ModContact *contact; // @dynamic contact;
@property(retain, nonatomic) HardDevice *hardDevice; // @dynamic hardDevice;
@property(retain, nonatomic) HardDeviceAttr *hardDeviceAttr; // @dynamic hardDeviceAttr;

@end

