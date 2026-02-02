//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveFanClubMember, NSData, NSMutableArray;

@interface FinderLiveGetFanClubMembersResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int audienceCurrentRank; // @dynamic audienceCurrentRank;
@property(retain, nonatomic) FinderLiveFanClubMember *audienceMember; // @dynamic audienceMember;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int intimacyDistanceToPrevMember; // @dynamic intimacyDistanceToPrevMember;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned int memberCount; // @dynamic memberCount;
@property(retain, nonatomic) NSMutableArray *members; // @dynamic members;
@property(nonatomic) unsigned int superFansCount; // @dynamic superFansCount;

@end

