//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, GameIndexGameBlock, GameIndexGameRecomBlock, GameIndexMoreGameEntr, GameIndexWxagInfo, HomePageTheme, TypeNavModule;

@class WXPBGeneratedMessage;

@interface GetGameIndex4Response : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) GameIndexGameBlock *gameBlock; // @dynamic gameBlock;
@property(retain, nonatomic) GameIndexGameRecomBlock *gameRecom; // @dynamic gameRecom;
@property(retain, nonatomic) GameIndexMoreGameEntr *moreGame; // @dynamic moreGame;
@property(retain, nonatomic) HomePageTheme *theme; // @dynamic theme;
@property(retain, nonatomic) TypeNavModule *typeNav; // @dynamic typeNav;
@property(retain, nonatomic) GameIndexWxagInfo *wxagInfo; // @dynamic wxagInfo;

@end

