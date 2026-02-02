//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface LogOutWebWxRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int opCode; // @dynamic opCode;
@property(nonatomic) unsigned int targetClientVersion; // @dynamic targetClientVersion;
@property(nonatomic) unsigned int targetDeviceType; // @dynamic targetDeviceType;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

