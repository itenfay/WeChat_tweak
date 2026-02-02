//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveGamePlayTogether, FinderLiveGameTeamInfo;

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

