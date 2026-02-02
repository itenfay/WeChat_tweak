//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface ClientECDHHandShakeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *device4ServerEcdhPubKey; // @dynamic device4ServerEcdhPubKey;
@property(retain, nonatomic) NSData *device4WxappEcdhPubKey; // @dynamic device4WxappEcdhPubKey;
@property(retain, nonatomic) NSData *localBaseKey; // @dynamic localBaseKey;
@property(retain, nonatomic) NSData *wxapp4DeviceEcdhPubKey; // @dynamic wxapp4DeviceEcdhPubKey;

@end

