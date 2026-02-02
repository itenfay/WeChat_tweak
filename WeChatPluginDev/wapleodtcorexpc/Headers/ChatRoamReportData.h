//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ChatRoamReportData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long brDataSize; // @dynamic brDataSize;
@property(nonatomic) unsigned long long conversationCount; // @dynamic conversationCount;
@property(nonatomic) unsigned long long elapsedTime; // @dynamic elapsedTime;
@property(nonatomic) unsigned long long msgCount; // @dynamic msgCount;
@property(nonatomic) unsigned long long selectedConversations; // @dynamic selectedConversations;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

