//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveVotingInfo_Choice : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int choiceId; // @dynamic choiceId;
@property(nonatomic) unsigned int selectCount; // @dynamic selectCount;
@property(nonatomic) unsigned int selfVoted; // @dynamic selfVoted;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

