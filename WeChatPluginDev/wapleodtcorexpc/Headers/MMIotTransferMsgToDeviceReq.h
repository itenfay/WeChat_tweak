//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMIotHwDeviceMsg, NSString;

@interface MMIotTransferMsgToDeviceReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) MMIotHwDeviceMsg *deviceMsg; // @dynamic deviceMsg;
@property(nonatomic) unsigned int deviceType; // @dynamic deviceType;

@end

