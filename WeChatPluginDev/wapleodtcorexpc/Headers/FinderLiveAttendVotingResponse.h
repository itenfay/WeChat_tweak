//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, FinderLiveVotingInfo;

@class WXPBGeneratedMessage;

@interface FinderLiveAttendVotingResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int statusFlag; // @dynamic statusFlag;
@property(retain, nonatomic) FinderLiveVotingInfo *votingInfo; // @dynamic votingInfo;

@end

