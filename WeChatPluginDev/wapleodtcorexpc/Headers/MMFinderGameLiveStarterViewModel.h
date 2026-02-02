//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLocation, GameTeamUpSpecialGiftSettingDetail, MMFinderLiveGameUserInfo, MMFinderLiveImageOcrOp, MMFinderLivePromoteManageLogic, MMFinderLiveTask, MMLiveTaskId, NSData, NSString, WCFinderDataItem, WCFinderLiveShareItem;

@interface MMFinderGameLiveStarterViewModel : NSObject
{
    int _createGameLiveScene;
    int _wxaGameLiveScene;
    unsigned int _currJoinTeamMode;
    unsigned int _currJoinTeamCoinValue;
    WCFinderDataItem *_dataItem;
    WCFinderLiveShareItem *_shareItem;
    long long _entryScene;
    NSString *_appId;
    MMFinderLiveGameUserInfo *_gameUserInfo;
    GameTeamUpSpecialGiftSettingDetail *_specialGiftSetting;
    NSData *_spamCheckInfo;
    MMFinderLivePromoteManageLogic *_promoteManageLogic;
    FinderLocation *_locationInfo;
    NSString *_liveGameAuthTicket;
    NSString *_liveCoverUrl;
    NSString *_defaultLiveCoverUrl;
    NSString *_liveDescription;
    MMLiveTaskId *_liveTaskId;
    NSString *_finderUsername;
    MMFinderLiveImageOcrOp *_ocrOp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveImageOcrOp *ocrOp; // @synthesize ocrOp=_ocrOp;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) NSString *liveDescription; // @synthesize liveDescription=_liveDescription;
@property(retain, nonatomic) NSString *defaultLiveCoverUrl; // @synthesize defaultLiveCoverUrl=_defaultLiveCoverUrl;
@property(retain, nonatomic) NSString *liveCoverUrl; // @synthesize liveCoverUrl=_liveCoverUrl;
@property(retain, nonatomic) NSString *liveGameAuthTicket; // @synthesize liveGameAuthTicket=_liveGameAuthTicket;
@property(retain, nonatomic) FinderLocation *locationInfo; // @synthesize locationInfo=_locationInfo;
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
@property(retain, nonatomic) WCFinderLiveShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)releaseCreateLiveImageOcrCache;
- (void)assembleSpamCheckInfoWithCoverPicFeature:(id)arg1 headImgPicFeat:(id)arg2;
- (void)asyncGetCreateLiveImageOcrSpamInfo:(id)arg1 appId:(id)arg2 coverImgUrl:(id)arg3 coverImgPath:(id)arg4 headImg:(id)arg5 headImgPath:(id)arg6 headUrl:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)createMiniGameLiveWithAckSpamMsg:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)createGameLivePrepareWithGeneralParamsModel:(id)arg1 gameLiveParams:(id)arg2 lotteryPanel:(id)arg3 Success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)updateLocationInfoWithCachedLocation:(id)arg1;
- (void)updateLiveGameAuthTicket:(id)arg1;
- (void)updateLiveDescription:(id)arg1;
- (void)updateLiveShareItem:(id)arg1;
- (void)updateGameLiveDataItemCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (id)getLiveCoverUrl;
- (void)updateLiveCoverUrl:(id)arg1;
- (void)fetchLocation;
- (id)initWithLiveTaskId:(id)arg1 appId:(id)arg2 andGameLiveEntryScene:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

