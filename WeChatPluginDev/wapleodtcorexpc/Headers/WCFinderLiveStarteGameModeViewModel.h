//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLocation, GameTeamUpSpecialGiftSettingDetail, MMFinderLiveGameUserInfo, MMFinderLiveImageOcrOp, MMFinderLivePromoteManageLogic, MMFinderLiveTask, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol WCFinderStarterLiveGameViewModelDelegate;

@interface WCFinderLiveStarteGameModeViewModel
{
    int _createGameLiveScene;
    int _wxaGameLiveScene;
    unsigned int _currJoinTeamMode;
    unsigned int _currJoinTeamCoinValue;
    unsigned int _scene;
    unsigned int _opensdkVersion;
    unsigned int _platformId;
    id <WCFinderStarterLiveGameViewModelDelegate> _gameDelegate;
    NSMutableArray *_gameUserInfoList;
    NSArray *_gameCategoryList;
    long long _entryScene;
    NSString *_appId;
    MMFinderLiveGameUserInfo *_gameUserInfo;
    GameTeamUpSpecialGiftSettingDetail *_specialGiftSetting;
    NSData *_spamCheckInfo;
    MMFinderLivePromoteManageLogic *_promoteManageLogic;
    NSMutableDictionary *_opensdkGameLiveExtInfo;
    NSString *_extraAntiInfo;
    NSString *_gameUserId;
    NSString *_liveDescription;
    FinderLocation *_locationInfo;
    NSString *_liveGameAuthTicket;
    NSString *_liveCoverUrl;
    NSString *_defaultLiveCoverUrl;
    NSString *_finderUsername;
    MMFinderLiveImageOcrOp *_ocrOp;
    NSString *_liveObjectExportId;
    NSString *_extInfoAppId;
    NSString *_appName;
    NSString *_ticket;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int platformId; // @synthesize platformId=_platformId;
@property(nonatomic) unsigned int opensdkVersion; // @synthesize opensdkVersion=_opensdkVersion;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *extInfoAppId; // @synthesize extInfoAppId=_extInfoAppId;
@property(retain, nonatomic) NSString *liveObjectExportId; // @synthesize liveObjectExportId=_liveObjectExportId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMFinderLiveImageOcrOp *ocrOp; // @synthesize ocrOp=_ocrOp;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *defaultLiveCoverUrl; // @synthesize defaultLiveCoverUrl=_defaultLiveCoverUrl;
@property(retain, nonatomic) NSString *liveCoverUrl; // @synthesize liveCoverUrl=_liveCoverUrl;
@property(retain, nonatomic) NSString *liveGameAuthTicket; // @synthesize liveGameAuthTicket=_liveGameAuthTicket;
@property(retain, nonatomic) FinderLocation *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) NSString *liveDescription; // @synthesize liveDescription=_liveDescription;
@property(retain, nonatomic) NSString *gameUserId; // @synthesize gameUserId=_gameUserId;
@property(retain, nonatomic) NSString *extraAntiInfo; // @synthesize extraAntiInfo=_extraAntiInfo;
@property(retain, nonatomic) NSMutableDictionary *opensdkGameLiveExtInfo; // @synthesize opensdkGameLiveExtInfo=_opensdkGameLiveExtInfo;
@property(retain, nonatomic) MMFinderLivePromoteManageLogic *promoteManageLogic; // @synthesize promoteManageLogic=_promoteManageLogic;
@property(retain, nonatomic) NSData *spamCheckInfo; // @synthesize spamCheckInfo=_spamCheckInfo;
@property(nonatomic) unsigned int currJoinTeamCoinValue; // @synthesize currJoinTeamCoinValue=_currJoinTeamCoinValue;
@property(retain, nonatomic) GameTeamUpSpecialGiftSettingDetail *specialGiftSetting; // @synthesize specialGiftSetting=_specialGiftSetting;
@property(nonatomic) unsigned int currJoinTeamMode; // @synthesize currJoinTeamMode=_currJoinTeamMode;
@property(retain, nonatomic) MMFinderLiveGameUserInfo *gameUserInfo; // @synthesize gameUserInfo=_gameUserInfo;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) int wxaGameLiveScene; // @synthesize wxaGameLiveScene=_wxaGameLiveScene;
@property(nonatomic) int createGameLiveScene; // @synthesize createGameLiveScene=_createGameLiveScene;
@property(nonatomic) long long entryScene; // @synthesize entryScene=_entryScene;
@property(retain, nonatomic) NSArray *gameCategoryList; // @synthesize gameCategoryList=_gameCategoryList;
@property(retain, nonatomic) NSMutableArray *gameUserInfoList; // @synthesize gameUserInfoList=_gameUserInfoList;
@property(nonatomic) __weak id <WCFinderStarterLiveGameViewModelDelegate> gameDelegate; // @synthesize gameDelegate=_gameDelegate;
- (void)createRecordGameLiveWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)innerGetGameUserInfoList;
- (void)assembleSpamCheckInfoWithCoverPicFeature:(id)arg1 headImgPicFeat:(id)arg2;
- (void)asyncGetCreateLiveImageOcrSpamInfo:(id)arg1 appId:(id)arg2 coverImgUrl:(id)arg3 coverImgPath:(id)arg4 headImg:(id)arg5 headImgPath:(id)arg6 headUrl:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)createMiniGameLiveWithAckSpamMsg:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)createGameLivePrepareWithGeneralParamsModel:(id)arg1 gameLiveParams:(id)arg2 lotteryPanel:(id)arg3 Success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)updateLocationInfoWithCachedLocation:(id)arg1;
- (void)updateLiveGameAuthTicket:(id)arg1;
- (void)updateLiveDescription:(id)arg1;
- (void)updateGameLiveDataItemCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (id)getLiveCoverUrl;
- (void)updateLiveCoverUrl:(id)arg1;
- (void)fetchLocation;
- (void)updateWithLiveTaskId:(id)arg1 appId:(id)arg2 andGameLiveEntryScene:(long long)arg3;
- (_Bool)haveFinderContact;
- (void)getStickerStatusWithAppid:(id)arg1;
- (void)getFilteredGameUserInfoWithAppId:(id)arg1;
- (_Bool)isGameLiveCreated;
- (void)fetchDataWithAppId:(id)arg1;
- (void)initPropertyWithExtInfoDic:(id)arg1;
- (void)getGameUserInfoWithAppId:(id)arg1 opensdkVersion:(unsigned int)arg2 extInfoDic:(id)arg3 needFetchData:(_Bool)arg4;
- (void)getGameUserInfoList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

