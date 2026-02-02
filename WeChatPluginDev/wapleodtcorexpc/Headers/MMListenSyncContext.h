//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface MMListenSyncContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long seq; // @dynamic seq;
@property(retain, nonatomic) NSData *syncDataBuffer; // @dynamic syncDataBuffer;
@property(nonatomic) int type; // @dynamic type;

@end

