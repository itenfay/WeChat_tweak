//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface VoteInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool canVote; // @dynamic canVote;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSMutableArray *latestVoterUsernameList; // @dynamic latestVoterUsernameList;
@property(nonatomic) unsigned int showType; // @dynamic showType;
@property(nonatomic) _Bool votedByMe; // @dynamic votedByMe;

@end

