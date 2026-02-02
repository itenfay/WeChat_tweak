//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface GameWeAvatarEventInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *eventId; // @dynamic eventId;
@property(nonatomic) unsigned long long eventTimestamp; // @dynamic eventTimestamp;
@property(nonatomic) unsigned int eventType; // @dynamic eventType;
@property(nonatomic) _Bool immediate; // @dynamic immediate;
@property(nonatomic) unsigned long long timeoutMs; // @dynamic timeoutMs;

@end

