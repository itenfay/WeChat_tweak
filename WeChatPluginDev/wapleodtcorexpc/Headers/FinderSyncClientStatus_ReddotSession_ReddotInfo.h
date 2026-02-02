//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface FinderSyncClientStatus_ReddotSession_ReddotInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSData *bypassInfo; // @dynamic bypassInfo;
@property(nonatomic) unsigned int ctrlType; // @dynamic ctrlType;
@property(nonatomic) unsigned long long exposeInterval; // @dynamic exposeInterval;
@property(nonatomic) unsigned long long mentionCount; // @dynamic mentionCount;

@end

