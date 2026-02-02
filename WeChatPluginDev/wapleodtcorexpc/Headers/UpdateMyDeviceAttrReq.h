//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface UpdateMyDeviceAttrReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *alias; // @dynamic alias;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *deviceid; // @dynamic deviceid;
@property(retain, nonatomic) NSString *devicetype; // @dynamic devicetype;
@property(nonatomic) unsigned int maindevice; // @dynamic maindevice;

@end

