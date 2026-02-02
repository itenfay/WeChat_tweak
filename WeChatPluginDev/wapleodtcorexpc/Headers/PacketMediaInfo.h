//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface PacketMediaInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) long long createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(nonatomic) unsigned long long svrId; // @dynamic svrId;

@end

