//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface AffRoamBackedUpConversationsInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *conversationId; // @dynamic conversationId;
@property(nonatomic) _Bool isComplete; // @dynamic isComplete;
@property(retain, nonatomic) NSMutableArray *size; // @dynamic size;
@property(nonatomic) unsigned int version; // @dynamic version;

@end

