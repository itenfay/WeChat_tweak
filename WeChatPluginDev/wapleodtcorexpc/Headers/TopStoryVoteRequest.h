//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface TopStoryVoteRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int category; // @dynamic category;
@property(retain, nonatomic) NSString *docid; // @dynamic docid;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) int voteType; // @dynamic voteType;

@end

