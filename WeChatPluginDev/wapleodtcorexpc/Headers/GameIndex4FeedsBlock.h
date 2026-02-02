//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameIndex4FeedsBlock_Corner, GameIndex4FeedsBlock_CreateTopicTemplate, GameIndex4FeedsBlock_GameListTemplate, GameIndex4FeedsBlock_GameTemplate, GameIndex4FeedsBlock_ImageTextTemplate, GameIndex4FeedsBlock_LiveTemplate, GameIndex4FeedsBlock_MatchTemplate, GameIndex4FeedsBlock_MoreGameTemplate, GameIndex4FeedsBlock_NoPlayGameTemplate, GameIndex4FeedsBlock_RecommendGameTemplate, GameIndex4FeedsBlock_VideoTemplate, NSString;

@interface GameIndex4FeedsBlock : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) GameIndex4FeedsBlock_CreateTopicTemplate *createTopic; // @dynamic createTopic;
@property(retain, nonatomic) NSString *externInfo; // @dynamic externInfo;
@property(retain, nonatomic) GameIndex4FeedsBlock_GameTemplate *game; // @dynamic game;
@property(retain, nonatomic) GameIndex4FeedsBlock_GameListTemplate *gameList; // @dynamic gameList;
@property(retain, nonatomic) GameIndex4FeedsBlock_ImageTextTemplate *imageText; // @dynamic imageText;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) GameIndex4FeedsBlock_Corner *leftCorner; // @dynamic leftCorner;
@property(retain, nonatomic) GameIndex4FeedsBlock_LiveTemplate *live; // @dynamic live;
@property(retain, nonatomic) GameIndex4FeedsBlock_MatchTemplate *match; // @dynamic match;
@property(retain, nonatomic) GameIndex4FeedsBlock_MoreGameTemplate *moreGame; // @dynamic moreGame;
@property(retain, nonatomic) GameIndex4FeedsBlock_NoPlayGameTemplate *noPlayGame; // @dynamic noPlayGame;
@property(nonatomic) unsigned int positionId; // @dynamic positionId;
@property(retain, nonatomic) GameIndex4FeedsBlock_RecommendGameTemplate *recommendGame; // @dynamic recommendGame;
@property(retain, nonatomic) GameIndex4FeedsBlock_Corner *rightCorner; // @dynamic rightCorner;
@property(nonatomic) unsigned int tplId; // @dynamic tplId;
@property(retain, nonatomic) GameIndex4FeedsBlock_VideoTemplate *video; // @dynamic video;

@end

