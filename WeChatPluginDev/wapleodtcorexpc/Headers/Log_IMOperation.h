//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface Log_IMOperation : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int clientVersion; // @dynamic clientVersion;
@property(retain, nonatomic) NSString *currChatName; // @dynamic currChatName;
@property(nonatomic) int device; // @dynamic device;
@property(nonatomic) int ds; // @dynamic ds;
@property(nonatomic) int importDs; // @dynamic importDs;
@property(retain, nonatomic) NSMutableArray *oplist; // @dynamic oplist;
@property(nonatomic) long long timeStamp; // @dynamic timeStamp;
@property(nonatomic) unsigned long long uin; // @dynamic uin;

@end

