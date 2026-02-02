//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChosenInfo, MsgChannelInfo, NSData, NSMutableArray, NSString, TickleInfo, TopicInfo, VoteInfo;

@interface MsgOptions : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *atList; // @dynamic atList;
@property(nonatomic) unsigned int bgType; // @dynamic bgType;
@property(retain, nonatomic) ChosenInfo *chosenInfo; // @dynamic chosenInfo;
@property(retain, nonatomic) NSData *cliLocalData; // @dynamic cliLocalData;
@property(retain, nonatomic) NSString *complaintUrl; // @dynamic complaintUrl;
@property(nonatomic) unsigned int msgBizType; // @dynamic msgBizType;
@property(retain, nonatomic) MsgChannelInfo *msgChannelInfo; // @dynamic msgChannelInfo;
@property(nonatomic) unsigned long long replySeq; // @dynamic replySeq;
@property(nonatomic) _Bool selfMsg; // @dynamic selfMsg;
@property(retain, nonatomic) TickleInfo *tickleInfo; // @dynamic tickleInfo;
@property(retain, nonatomic) TopicInfo *topicInfo; // @dynamic topicInfo;
@property(retain, nonatomic) VoteInfo *voteInfo; // @dynamic voteInfo;

@end

