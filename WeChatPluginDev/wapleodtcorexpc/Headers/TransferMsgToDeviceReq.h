//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, HwDeviceMsg, NSString;

@interface TransferMsgToDeviceReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) HwDeviceMsg *deviceMsg; // @dynamic deviceMsg;
@property(retain, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(nonatomic) int isThroughtServer; // @dynamic isThroughtServer;

@end

