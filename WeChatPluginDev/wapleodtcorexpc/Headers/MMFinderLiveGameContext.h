//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGameData, FinderLiveGameInfo, GameLiveJumpInfo, GameTeamUpPaymentSetting, GeneralGameLiveInfo, MMFinderLiveGameTeamInfo, MMFinderLiveGameTeamWAGameJumpInfo, MMFinderLiveGameUserInfo, NSString, OrderedDictionary;

@interface MMFinderLiveGameContext : NSObject
{
    _Bool _hasClickJoinTeamButton;
    _Bool _notPassOpenIdOnLaunchGame;
    unsigned int _lastJoinGameMode;
    unsigned int _platformId;
    MMFinderLiveGameTeamInfo *_gameTeamInfo;
    FinderLiveGameInfo *_gameInfo;
    NSString *_lastJoinGameLaunchParam;
    MMFinderLiveGameTeamWAGameJumpInfo *_lastJoinGameWaGameJumpInfo;
    OrderedDictionary *_joinTeamQualifications;
    GameTeamUpPaymentSetting *_joinTeamPaymentSetting;
    GameLiveJumpInfo *_gameLiveJumpInfo;
    GeneralGameLiveInfo *_generalGameLiveInfo;
    FinderLiveGameData *_liveGameData;
    MMFinderLiveGameUserInfo *_gameUserInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGameUserInfo *gameUserInfo; // @synthesize gameUserInfo=_gameUserInfo;
@property(nonatomic) _Bool notPassOpenIdOnLaunchGame; // @synthesize notPassOpenIdOnLaunchGame=_notPassOpenIdOnLaunchGame;
@property(nonatomic) unsigned int platformId; // @synthesize platformId=_platformId;
@property(retain, nonatomic) FinderLiveGameData *liveGameData; // @synthesize liveGameData=_liveGameData;
@property(nonatomic) _Bool hasClickJoinTeamButton; // @synthesize hasClickJoinTeamButton=_hasClickJoinTeamButton;
@property(retain, nonatomic) GeneralGameLiveInfo *generalGameLiveInfo; // @synthesize generalGameLiveInfo=_generalGameLiveInfo;
@property(retain, nonatomic) GameLiveJumpInfo *gameLiveJumpInfo; // @synthesize gameLiveJumpInfo=_gameLiveJumpInfo;
@property(retain, nonatomic) GameTeamUpPaymentSetting *joinTeamPaymentSetting; // @synthesize joinTeamPaymentSetting=_joinTeamPaymentSetting;
@property(retain, nonatomic) OrderedDictionary *joinTeamQualifications; // @synthesize joinTeamQualifications=_joinTeamQualifications;
@property(retain, nonatomic) MMFinderLiveGameTeamWAGameJumpInfo *lastJoinGameWaGameJumpInfo; // @synthesize lastJoinGameWaGameJumpInfo=_lastJoinGameWaGameJumpInfo;
@property(retain, nonatomic) NSString *lastJoinGameLaunchParam; // @synthesize lastJoinGameLaunchParam=_lastJoinGameLaunchParam;
@property(nonatomic) unsigned int lastJoinGameMode; // @synthesize lastJoinGameMode=_lastJoinGameMode;
@property(retain, nonatomic) FinderLiveGameInfo *gameInfo; // @synthesize gameInfo=_gameInfo;
@property(retain, nonatomic) MMFinderLiveGameTeamInfo *gameTeamInfo; // @synthesize gameTeamInfo=_gameTeamInfo;
- (_Bool)isLiveFromWechat;
- (_Bool)isLiveFromQQ;
- (id)description;
- (_Bool)isSupportGameDynamicCard;
- (void)copyJoinTeamQualificationsFromPB:(id)arg1;
- (id)init;

@end

