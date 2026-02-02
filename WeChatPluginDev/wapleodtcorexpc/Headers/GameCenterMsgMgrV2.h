//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCCommonServer, GCMRedpointExposureControlModel, GameCenterBaseMsg, GamePullMsgControlInfo, MessageExposureStrategyControl, NSMutableSet, NSString;

@interface GameCenterMsgMgrV2
{
    _Bool _dataHasLoaded;
    _Bool _userHasLogout;
    GameCenterBaseMsg *_findFriendMsg;
    NSString *_currentShowMsgID;
    NSMutableSet *_allAvailableMsg;
    GCMRedpointExposureControlModel *_controlInfo;
    MessageExposureStrategyControl *_strategyControl;
    GameCenterBaseMsg *_curQueue0Msg;
    GCCommonServer *_server;
    GamePullMsgControlInfo *_pullMsgControlInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool userHasLogout; // @synthesize userHasLogout=_userHasLogout;
@property(nonatomic) _Bool dataHasLoaded; // @synthesize dataHasLoaded=_dataHasLoaded;
@property(retain, nonatomic) GamePullMsgControlInfo *pullMsgControlInfo; // @synthesize pullMsgControlInfo=_pullMsgControlInfo;
@property(retain, nonatomic) GCCommonServer *server; // @synthesize server=_server;
@property(retain, nonatomic) GameCenterBaseMsg *curQueue0Msg; // @synthesize curQueue0Msg=_curQueue0Msg;
@property(retain, nonatomic) MessageExposureStrategyControl *strategyControl; // @synthesize strategyControl=_strategyControl;
@property(retain, nonatomic) GCMRedpointExposureControlModel *controlInfo; // @synthesize controlInfo=_controlInfo;
@property(retain, nonatomic) NSMutableSet *allAvailableMsg; // @synthesize allAvailableMsg=_allAvailableMsg;
@property(retain, nonatomic, setter=setCurrentShowMsgID:) NSString *currentShowMsgID; // @synthesize currentShowMsgID=_currentShowMsgID;
@property(retain, nonatomic) GameCenterBaseMsg *findFriendMsg; // @synthesize findFriendMsg=_findFriendMsg;
- (void)onChooseRedddot:(id)arg1;
- (void)pullUserMessage:(id)arg1;
- (void)onClearFindFriendMsg:(long long)arg1;
- (void)onClickRedPoint;
- (void)updateMsgCanNotShow:(id)arg1 reason:(id)arg2;
- (void)handleMsgExit:(id)arg1 reason:(id)arg2;
- (void)onGameLifeRedPointExit:(id)arg1 reason:(id)arg2;
- (void)onReceiveNewGameLifeRedPoint:(id)arg1;
- (void)handleNewMsgReceived:(id)arg1;
- (void)updateHistoryScoreWithMsg:(id)arg1;
- (_Bool)checkCanRescore;
- (id)fetchFromDbMsg;
- (void)asyncReGetDbQueue1Array:(id)arg1;
- (float)getFactorWithParameter:(double)arg1 boundaryArgList:(id)arg2;
- (float)calcluateMsgScore:(id)arg1;
- (id)getMaxScoreMsg;
- (id)checkAllAvailableMsg;
- (void)checkNeedReportEmptyRedpoint;
- (void)upddateRedPointExposure;
- (_Bool)isCurrentRedPointNotEnough;
- (void)checkPullMessage;
- (long long)getSecondsPassToday;
- (void)onUpdateGameCenterEntrance;
- (void)chooseNewFindMsg:(id)arg1 reason:(long long)arg2;
- (_Bool)handleNewScoreLogic;
- (void)onFindFriendMsgExit:(id)arg1;
- (void)cleanCurrentFindEntry:(long long)arg1;
- (_Bool)checkCurrenFindFriendMsgExit:(_Bool)arg1;
- (void)checkGameLifeRedPointExit;
- (void)regetCurrentFindFriendMsg;
- (void)onServiceClearData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

