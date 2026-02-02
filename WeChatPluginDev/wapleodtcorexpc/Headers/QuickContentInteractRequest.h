//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface QuickContentInteractRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int follow; // @dynamic follow;
@property(nonatomic) unsigned int greet; // @dynamic greet;
@property(nonatomic) int operateType; // @dynamic operateType;
@property(retain, nonatomic) NSString *quickResponseContentId; // @dynamic quickResponseContentId;
@property(retain, nonatomic) NSString *replyContent; // @dynamic replyContent;

@end

