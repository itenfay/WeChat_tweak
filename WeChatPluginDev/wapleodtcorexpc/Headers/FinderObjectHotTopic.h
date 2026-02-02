//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderObjectHotTopic : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int jumpFlag; // @dynamic jumpFlag;
@property(retain, nonatomic) NSData *topicBuffer; // @dynamic topicBuffer;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;
@property(retain, nonatomic) NSString *topicName; // @dynamic topicName;
@property(nonatomic) unsigned int topicType; // @dynamic topicType;

@end

