//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface FinderLiveGetUserGameConfigResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *gameCategoryList; // @dynamic gameCategoryList;
@property(retain, nonatomic) NSMutableArray *gameUserInfoList; // @dynamic gameUserInfoList;
@property(nonatomic) _Bool needClearClientLocalCache; // @dynamic needClearClientLocalCache;
@property(nonatomic) unsigned int showSearchMoreGames; // @dynamic showSearchMoreGames;

@end

