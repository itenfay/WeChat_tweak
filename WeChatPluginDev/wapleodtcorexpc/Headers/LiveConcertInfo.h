//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface LiveConcertInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *activityId; // @dynamic activityId;
@property(nonatomic) _Bool enableTopic; // @dynamic enableTopic;
@property(nonatomic) unsigned int hasTicket; // @dynamic hasTicket;
@property(nonatomic) _Bool isConcertLive; // @dynamic isConcertLive;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;
@property(nonatomic) unsigned long long topicType; // @dynamic topicType;

@end

