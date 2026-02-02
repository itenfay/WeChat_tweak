//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface Channel : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cantSendReason; // @dynamic cantSendReason;
@property(nonatomic) unsigned int channelId; // @dynamic channelId;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) _Bool readOnly; // @dynamic readOnly;
@property(nonatomic) unsigned long long unreadMsgCount; // @dynamic unreadMsgCount;

@end

