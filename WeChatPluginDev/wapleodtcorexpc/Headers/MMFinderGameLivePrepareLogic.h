//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, WCFinderCreateCoordinator, WCFinderDataItem;
@protocol MMFinderGameLivePrepareLogicDelegate;

@interface MMFinderGameLivePrepareLogic : NSObject
{
    unsigned int _scene;
    unsigned int _opensdkVersion;
    unsigned int _platformId;
    NSMutableDictionary *_opensdkGameLiveExtInfo;
    id <MMFinderGameLivePrepareLogicDelegate> _delegate;
    NSString *_liveObjectExportId;
    NSMutableArray *_gameUserInfoList;
    NSArray *_gameCategoryList;
    NSMutableArray *_gameSearchUserInfoList;
    WCFinderDataItem *_finderDataItem;
    WCFinderCreateCoordinator *_createCoordinator;
    NSString *_extInfoAppId;
    NSString *_appName;
    NSString *_ticket;
    NSString *_extraAntiInfo;
    NSString *_gameUserId;
    NSString *_dataFromGame;
}

+ (_Bool)isValidToJumpFromOpenBusinessViewWithExtInfo:(id)arg1;
+ (_Bool)isValidToJumpWithExtInfo:(id)arg1;
+ (_Bool)notValidForDifferentAccountWithExtInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dataFromGame; // @synthesize dataFromGame=_dataFromGame;
@property(retain, nonatomic) NSString *gameUserId; // @synthesize gameUserId=_gameUserId;
@property(nonatomic) unsigned int platformId; // @synthesize platformId=_platformId;
@property(nonatomic) unsigned int opensdkVersion; // @synthesize opensdkVersion=_opensdkVersion;
@property(retain, nonatomic) NSString *extraAntiInfo; // @synthesize extraAntiInfo=_extraAntiInfo;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *extInfoAppId; // @synthesize extInfoAppId=_extInfoAppId;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(retain, nonatomic) NSMutableArray *gameSearchUserInfoList; // @synthesize gameSearchUserInfoList=_gameSearchUserInfoList;
@property(retain, nonatomic) NSArray *gameCategoryList; // @synthesize gameCategoryList=_gameCategoryList;
@property(retain, nonatomic) NSMutableArray *gameUserInfoList; // @synthesize gameUserInfoList=_gameUserInfoList;
@property(retain, nonatomic) NSString *liveObjectExportId; // @synthesize liveObjectExportId=_liveObjectExportId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <MMFinderGameLivePrepareLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *opensdkGameLiveExtInfo; // @synthesize opensdkGameLiveExtInfo=_opensdkGameLiveExtInfo;
- (_Bool)haveFinderContact;
- (_Bool)isGameSearchUserInfoListContain:(id)arg1;
- (void)getStickerStatusWithAppid:(id)arg1;
- (void)getFilteredGameUserInfoWithAppId:(id)arg1;
- (void)getGameUserInfoList;
- (void)jumpToPlayTogetherLiteAppPanelWithExportId:(id)arg1 failure:(CDUnknownBlockType)arg2;
- (void)jumpToPlayTogetherPanelWithExportId:(id)arg1 failure:(CDUnknownBlockType)arg2;
- (void)jumpToGame3DSettingWithExportId:(id)arg1 failure:(CDUnknownBlockType)arg2;
- (void)jumpToShopShelfWithExportId:(id)arg1 failure:(CDUnknownBlockType)arg2;
- (void)jumpToPromoteWithExportId:(id)arg1 failure:(CDUnknownBlockType)arg2;
- (void)jumpToMusicSettingWithExportId:(id)arg1 failure:(CDUnknownBlockType)arg2;
- (void)jumpToLiveFansWithExportId:(id)arg1;
- (void)jumpToLiveShareWithExportId:(id)arg1;
- (void)jumpToLiveEnterWithExportId:(id)arg1 extParam:(id)arg2 failure:(CDUnknownBlockType)arg3;
- (void)jumpToLiveEnterWithExportId:(id)arg1 extParam:(id)arg2;
- (void)internalStartLiveWithVC:(id)arg1 appId:(id)arg2;
- (void)startFinderLiveWithAppid:(id)arg1 rootVC:(id)arg2;
- (void)onJumpToGameLiveStarterPrepareWithAppId:(id)arg1 rootViewController:(id)arg2;
- (void)jumpToGameLiveFromOpenSDKWithAppId:(id)arg1 rootVC:(id)arg2 extInfos:(id)arg3;
- (void)jumpLiveForDifferentAccount;
- (void)fetchDataWithAppId:(id)arg1;
- (void)initPropertyWithExtInfoDic:(id)arg1;
- (id)initWithAppId:(id)arg1 opensdkVersion:(unsigned int)arg2 extInfoDic:(id)arg3 needFetchData:(_Bool)arg4;
- (id)init;

@end

