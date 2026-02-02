//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface VoteMsgRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *chatroomName; // @dynamic chatroomName;
@property(nonatomic) _Bool isVote; // @dynamic isVote;
@property(nonatomic) _Bool needEducation; // @dynamic needEducation;
@property(nonatomic) unsigned long long seq; // @dynamic seq;

@end

