//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, FinderLiveFanClubMember, NSMutableArray;

@class WXPBGeneratedMessage;

@interface FinderLiveAudienceCheckFanClubResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveFanClubMember *audienceMember; // @dynamic audienceMember;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool isFanClubMember; // @dynamic isFanClubMember;
@property(retain, nonatomic) NSMutableArray *productList; // @dynamic productList;

@end

