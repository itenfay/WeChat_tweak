//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface ClientBaseHandShakeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) NSData *deviceRandom; // @dynamic deviceRandom;
@property(nonatomic) unsigned int hwClientVersion; // @dynamic hwClientVersion;
@property(retain, nonatomic) NSString *hwDeviceType; // @dynamic hwDeviceType;
@property(retain, nonatomic) NSData *wxappRandom; // @dynamic wxappRandom;

@end

