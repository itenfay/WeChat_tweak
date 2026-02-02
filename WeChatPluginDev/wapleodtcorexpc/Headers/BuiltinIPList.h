//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface BuiltinIPList : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int longConnectIpcount; // @dynamic longConnectIpcount;
@property(retain, nonatomic) NSMutableArray *longConnectIplist; // @dynamic longConnectIplist;
@property(nonatomic) unsigned int seq; // @dynamic seq;
@property(nonatomic) unsigned int shortConnectIpcount; // @dynamic shortConnectIpcount;
@property(retain, nonatomic) NSMutableArray *shortConnectIplist; // @dynamic shortConnectIplist;

@end

