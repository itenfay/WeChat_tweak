//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameCenterBaseMsg, GameLifeFindMoreFriendEntranceInfo;

@interface GameFindEntryRedDotInfo : NSObject
{
    _Bool _isRedPointExposured;
    _Bool _isRedPointCompleteExposured;
    _Bool _isRedPointHalfExposured;
    GameCenterBaseMsg *_gameCenterMsg;
    GameLifeFindMoreFriendEntranceInfo *_gameLifeInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRedPointHalfExposured; // @synthesize isRedPointHalfExposured=_isRedPointHalfExposured;
@property(nonatomic) _Bool isRedPointCompleteExposured; // @synthesize isRedPointCompleteExposured=_isRedPointCompleteExposured;
@property(nonatomic) _Bool isRedPointExposured; // @synthesize isRedPointExposured=_isRedPointExposured;
@property(retain, nonatomic, getter=getGameLifeInfo) GameLifeFindMoreFriendEntranceInfo *gameLifeInfo; // @synthesize gameLifeInfo=_gameLifeInfo;
@property(retain, nonatomic, getter=getGameCenterMsg) GameCenterBaseMsg *gameCenterMsg; // @synthesize gameCenterMsg=_gameCenterMsg;

@end

