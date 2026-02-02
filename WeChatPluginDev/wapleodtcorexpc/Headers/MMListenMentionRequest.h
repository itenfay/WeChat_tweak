//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest;

@interface MMListenMentionRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(nonatomic) unsigned long long lastSyncId; // @dynamic lastSyncId;
@property(nonatomic) unsigned int mentionScene; // @dynamic mentionScene;
@property(nonatomic) unsigned int mentionType; // @dynamic mentionType;
@property(nonatomic) unsigned long long minFilterId; // @dynamic minFilterId;
@property(nonatomic) unsigned int notifyScene; // @dynamic notifyScene;

@end

