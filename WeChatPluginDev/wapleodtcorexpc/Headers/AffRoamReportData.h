//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface AffRoamReportData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long beginDuration; // @dynamic beginDuration;
@property(nonatomic) unsigned long long brDataSize; // @dynamic brDataSize;
@property(nonatomic) unsigned long long conversationCount; // @dynamic conversationCount;
@property(nonatomic) unsigned long long elapsedTime; // @dynamic elapsedTime;
@property(nonatomic) unsigned long long endDuration; // @dynamic endDuration;
@property(nonatomic) unsigned long long fullDiffConversationCount; // @dynamic fullDiffConversationCount;
@property(nonatomic) unsigned long long importedConversationCount; // @dynamic importedConversationCount;
@property(nonatomic) unsigned long long limitedFullDiffConversationCount; // @dynamic limitedFullDiffConversationCount;
@property(nonatomic) unsigned long long mediaCount; // @dynamic mediaCount;
@property(nonatomic) unsigned long long msgCount; // @dynamic msgCount;
@property(nonatomic) unsigned long long packageId; // @dynamic packageId;
@property(nonatomic) unsigned long long recoverImportingDuration; // @dynamic recoverImportingDuration;
@property(nonatomic) unsigned long long selectedConversations; // @dynamic selectedConversations;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) int taskType; // @dynamic taskType;
@property(nonatomic) unsigned long long uploadIndexSize; // @dynamic uploadIndexSize;
@property(nonatomic) unsigned long long uploadMediaSize; // @dynamic uploadMediaSize;
@property(nonatomic) unsigned long long uploadMsgSize; // @dynamic uploadMsgSize;

@end

