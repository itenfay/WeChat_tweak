//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface AffRoamNetworkInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int fileDescriptor; // @dynamic fileDescriptor;
@property(nonatomic) _Bool isConnected; // @dynamic isConnected;
@property(nonatomic) int netType; // @dynamic netType;
@property(retain, nonatomic) NSString *ssid; // @dynamic ssid;
@property(nonatomic) _Bool useMmaoa; // @dynamic useMmaoa;

@end

