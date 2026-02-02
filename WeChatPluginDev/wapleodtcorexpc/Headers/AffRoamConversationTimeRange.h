//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface AffRoamConversationTimeRange : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(nonatomic) unsigned long long estimatedSize; // @dynamic estimatedSize;
@property(nonatomic) unsigned long long fromTime; // @dynamic fromTime;
@property(nonatomic) _Bool fullDiff; // @dynamic fullDiff;
@property(nonatomic) unsigned long long fullDiffOffset; // @dynamic fullDiffOffset;
@property(nonatomic) unsigned long long recoverTime; // @dynamic recoverTime;
@property(nonatomic) unsigned long long toTime; // @dynamic toTime;

@end

