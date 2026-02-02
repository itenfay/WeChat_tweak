//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGetUserGameConfigResponse_GeneralCreateLivePrepareInfo, FinderLiveGetUserGameConfigResponse_Weapp, GameLiveJoinTeamSettingInfo, NSMutableArray, NSString;

@interface MMFinderLiveGameUserInfo : NSObject
{
    _Bool _isFirstLive;
    _Bool _hasStickers;
    unsigned int _appStatus;
    unsigned int _minMemSize;
    unsigned int _playingStatus;
    unsigned int _liveStatus;
    unsigned int _gameType;
    unsigned int _gameShowType;
    unsigned int _supportLiveType;
    unsigned int _lastJoinTeamUpSetting;
    unsigned int _durationMs;
    unsigned int _redpacketChatroomSelectStatus;
    unsigned int _maxVisibleUserCount;
    NSString *_appId;
    NSString *_appName;
    NSString *_iconUrl;
    NSString *_downloadUrl;
    NSString *_defaultLiveCoverUrl;
    NSString *_captureModeTips;
    NSMutableArray *_supportLiveTypeArray;
    FinderLiveGetUserGameConfigResponse_Weapp *_weApp;
    FinderLiveGetUserGameConfigResponse_GeneralCreateLivePrepareInfo *_prepareInfo;
    NSString *_stickersUrl;
    NSString *_liveCoverUrl;
    NSString *_liveDescription;
    GameLiveJoinTeamSettingInfo *_joinTeamSettings;
    NSString *_jumpGameParam;
    NSMutableArray *_bannerList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int maxVisibleUserCount; // @synthesize maxVisibleUserCount=_maxVisibleUserCount;
@property(nonatomic) unsigned int redpacketChatroomSelectStatus; // @synthesize redpacketChatroomSelectStatus=_redpacketChatroomSelectStatus;
@property(nonatomic) unsigned int durationMs; // @synthesize durationMs=_durationMs;
@property(retain, nonatomic) NSMutableArray *bannerList; // @synthesize bannerList=_bannerList;
@property(retain, nonatomic) NSString *jumpGameParam; // @synthesize jumpGameParam=_jumpGameParam;
@property(nonatomic) unsigned int lastJoinTeamUpSetting; // @synthesize lastJoinTeamUpSetting=_lastJoinTeamUpSetting;
@property(retain, nonatomic) GameLiveJoinTeamSettingInfo *joinTeamSettings; // @synthesize joinTeamSettings=_joinTeamSettings;
@property(retain, nonatomic) NSString *liveDescription; // @synthesize liveDescription=_liveDescription;
@property(retain, nonatomic) NSString *liveCoverUrl; // @synthesize liveCoverUrl=_liveCoverUrl;
@property(retain, nonatomic) NSString *stickersUrl; // @synthesize stickersUrl=_stickersUrl;
@property(nonatomic) _Bool hasStickers; // @synthesize hasStickers=_hasStickers;
@property(nonatomic) _Bool isFirstLive; // @synthesize isFirstLive=_isFirstLive;
@property(retain, nonatomic) FinderLiveGetUserGameConfigResponse_GeneralCreateLivePrepareInfo *prepareInfo; // @synthesize prepareInfo=_prepareInfo;
@property(retain, nonatomic) FinderLiveGetUserGameConfigResponse_Weapp *weApp; // @synthesize weApp=_weApp;
@property(retain, nonatomic) NSMutableArray *supportLiveTypeArray; // @synthesize supportLiveTypeArray=_supportLiveTypeArray;
@property(retain, nonatomic) NSString *captureModeTips; // @synthesize captureModeTips=_captureModeTips;
@property(nonatomic) unsigned int supportLiveType; // @synthesize supportLiveType=_supportLiveType;
@property(nonatomic) unsigned int gameShowType; // @synthesize gameShowType=_gameShowType;
@property(nonatomic) unsigned int gameType; // @synthesize gameType=_gameType;
@property(nonatomic) unsigned int liveStatus; // @synthesize liveStatus=_liveStatus;
@property(nonatomic) unsigned int playingStatus; // @synthesize playingStatus=_playingStatus;
@property(nonatomic) unsigned int minMemSize; // @synthesize minMemSize=_minMemSize;
@property(retain, nonatomic) NSString *defaultLiveCoverUrl; // @synthesize defaultLiveCoverUrl=_defaultLiveCoverUrl;
@property(nonatomic) unsigned int appStatus; // @synthesize appStatus=_appStatus;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (_Bool)canStartRecordLive;
- (void)copyFromAppInfo:(id)arg1;
- (id)initWithAppInfo:(id)arg1;
- (void)copyFromPBItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPBItem:(id)arg1;

@end

