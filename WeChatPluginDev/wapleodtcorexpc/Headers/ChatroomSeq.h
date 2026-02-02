//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ChatroomSeq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int channelId; // @dynamic channelId;
@property(retain, nonatomic) NSString *chatroomName; // @dynamic chatroomName;
@property(nonatomic) unsigned long long seq; // @dynamic seq;

@end

