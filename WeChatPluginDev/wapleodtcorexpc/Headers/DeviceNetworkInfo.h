//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface DeviceNetworkInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *deviceNetworkCardList; // @dynamic deviceNetworkCardList;
@property(retain, nonatomic) NSString *discoveryPort; // @dynamic discoveryPort;
@property(nonatomic) _Bool isOnline; // @dynamic isOnline;
@property(retain, nonatomic) NSString *sdkId; // @dynamic sdkId;

@end

