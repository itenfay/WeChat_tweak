//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, FinderLiveGamePlayTogether, FinderLiveGameTeamInfo;

@class WXPBGeneratedMessage;

@interface FinderLiveGetGameTeamInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderLiveGameTeamInfo *gameTeamInfo; // @dynamic gameTeamInfo;
@property(nonatomic) _Bool notPassOpenidToGame; // @dynamic notPassOpenidToGame;
@property(retain, nonatomic) FinderLiveGamePlayTogether *playTogetherInfo; // @dynamic playTogetherInfo;

@end

