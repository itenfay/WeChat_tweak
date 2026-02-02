//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, GameTeamUpSpecialGiftSettingDetail, MMFinderLiveTask, NSString;

@interface WCFinderLiveGameTeamModel : NSObject
{
    int _scene;
    int _role;
    unsigned int _joinTeamMode;
    FinderJumpInfo *_playTogetherIconJumpInfo;
    MMFinderLiveTask *_finderLiveTask;
    NSString *_gameAppId;
    NSString *_entraAntiInfo;
    NSString *_gameUserId;
    NSString *_headImgUrl;
    long long _gamePlatformId;
    NSString *_nickname;
    GameTeamUpSpecialGiftSettingDetail *_specialGiftSetting;
    NSString *_dataFromGame;
    NSString *_gameClientParams;
    NSString *_uxInfo;
    NSString *_commentScene;
    NSString *_enterImmerseType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *enterImmerseType; // @synthesize enterImmerseType=_enterImmerseType;
@property(retain, nonatomic) NSString *commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *gameClientParams; // @synthesize gameClientParams=_gameClientParams;
@property(retain, nonatomic) NSString *dataFromGame; // @synthesize dataFromGame=_dataFromGame;
@property(retain, nonatomic) GameTeamUpSpecialGiftSettingDetail *specialGiftSetting; // @synthesize specialGiftSetting=_specialGiftSetting;
@property(nonatomic) unsigned int joinTeamMode; // @synthesize joinTeamMode=_joinTeamMode;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) long long gamePlatformId; // @synthesize gamePlatformId=_gamePlatformId;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(retain, nonatomic) NSString *gameUserId; // @synthesize gameUserId=_gameUserId;
@property(retain, nonatomic) NSString *entraAntiInfo; // @synthesize entraAntiInfo=_entraAntiInfo;
@property(retain, nonatomic) NSString *gameAppId; // @synthesize gameAppId=_gameAppId;
@property(nonatomic) int role; // @synthesize role=_role;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMFinderLiveTask *finderLiveTask; // @synthesize finderLiveTask=_finderLiveTask;
@property(retain, nonatomic) FinderJumpInfo *playTogetherIconJumpInfo; // @synthesize playTogetherIconJumpInfo=_playTogetherIconJumpInfo;

@end

