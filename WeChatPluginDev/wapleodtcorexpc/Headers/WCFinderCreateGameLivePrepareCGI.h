//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLocation, FinderMedia, GameTeamUpSpecialGiftSettingDetail, MMFinderLiveCreateParamsModel, MMLiveTaskId, NSString;

@interface WCFinderCreateGameLivePrepareCGI
{
    int _liveScene;
    unsigned int _joinTeamMode;
    unsigned int _anchorSwitchFlag;
    unsigned int _platformId;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    MMFinderLiveCreateParamsModel *_createLiveGeneralParamsModel;
    NSString *_finderUsername;
    FinderMedia *_coverImg;
    NSString *_liveDescription;
    FinderLocation *_location;
    NSString *_liveGameAuthTicket;
    NSString *_appId;
    NSString *_gameUserId;
    GameTeamUpSpecialGiftSettingDetail *_specialGiftSetting;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameTeamUpSpecialGiftSettingDetail *specialGiftSetting; // @synthesize specialGiftSetting=_specialGiftSetting;
@property(retain, nonatomic) NSString *gameUserId; // @synthesize gameUserId=_gameUserId;
@property(nonatomic) unsigned int platformId; // @synthesize platformId=_platformId;
@property(nonatomic) unsigned int anchorSwitchFlag; // @synthesize anchorSwitchFlag=_anchorSwitchFlag;
@property(nonatomic) unsigned int joinTeamMode; // @synthesize joinTeamMode=_joinTeamMode;
@property(nonatomic) int liveScene; // @synthesize liveScene=_liveScene;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *liveGameAuthTicket; // @synthesize liveGameAuthTicket=_liveGameAuthTicket;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *liveDescription; // @synthesize liveDescription=_liveDescription;
@property(retain, nonatomic) FinderMedia *coverImg; // @synthesize coverImg=_coverImg;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) MMFinderLiveCreateParamsModel *createLiveGeneralParamsModel; // @synthesize createLiveGeneralParamsModel=_createLiveGeneralParamsModel;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)getWordingInfo;
- (void)createRequest;
- (id)initWithFinderUsername:(id)arg1 liveTaskId:(id)arg2 coverImg:(id)arg3 liveDescription:(id)arg4 liveGameAuthTicket:(id)arg5 appId:(id)arg6 liveScene:(int)arg7 location:(id)arg8 joinTeamMode:(unsigned int)arg9 specialGiftSetting:(id)arg10 generalParamsModel:(id)arg11 anchorSwitchFlag:(unsigned int)arg12 platformId:(unsigned int)arg13 gameUserId:(id)arg14 lotteryPanel:(id)arg15 successBlock:(CDUnknownBlockType)arg16 failBlock:(CDUnknownBlockType)arg17;

// Remaining properties
@property(retain, nonatomic) MMLiveTaskId *liveTaskId;

@end

