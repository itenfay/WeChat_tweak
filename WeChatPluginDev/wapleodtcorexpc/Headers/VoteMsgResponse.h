//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, JumpInfo, NSString, VoteInfo;

@class WXPBGeneratedMessage;

@interface VoteMsgResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) JumpInfo *educationJumpInfo; // @dynamic educationJumpInfo;
@property(retain, nonatomic) NSString *reportExtInfo; // @dynamic reportExtInfo;
@property(retain, nonatomic) VoteInfo *voteInfo; // @dynamic voteInfo;

@end

