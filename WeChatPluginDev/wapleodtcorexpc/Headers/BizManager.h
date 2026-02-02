//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BizManager : NSObject
{
    struct BizManagerCallbackBridge *callback_;
}

+ (id)shareInstance;
- (id)getCacheData:(id)arg1;
- (_Bool)isOftenFlowInfoExpireNeedRefresh:(id)arg1;
- (void)saveOftenFlowInfo:(id)arg1;
- (void)resetDataMigrateStatusTemp;
- (id)getAffConfig;
- (id)getOftenDetailMsgList:(id)arg1 limit:(unsigned int)arg2;
- (void)onWechatIntoActive;
- (_Bool)deleteRecCardFromCache:(id)arg1;
- (void)onXmlPushReceiveAsync:(unsigned int)arg1 type:(id)arg2 content:(id)arg3;
- (void)resortV2ControlFlagChangeAsync:(unsigned int)arg1 scene:(unsigned int)arg2 flag:(unsigned int)arg3 liftReadAreaSize:(unsigned int)arg4 historyBoxWording:(id)arg5 resortSceneBitSwitch:(unsigned long long)arg6 backgroundResortBlockedSwitch:(unsigned int)arg7;
- (void)callOnCreationCenterInfoChange:(_Bool)arg1 errorMsg:(id)arg2 info:(id)arg3;
- (unsigned long long)getSyncServerTimeMs;
- (void)resetCreationCenterRedPointAsync:(unsigned int)arg1 newNum:(unsigned int)arg2;
- (id)getCacheResortConfigString;
- (void)requestCreationCenterInfoAsync:(unsigned int)arg1 scene:(unsigned int)arg2 data:(id)arg3;
- (id)getCreationCenterInfo;
- (void)requestRecDataWhenPersonalizedOpAsync:(unsigned int)arg1 scene:(unsigned int)arg2 personalizedOp:(unsigned int)arg3;
- (void)notifyRecFeedExposeFirstTimeAsync:(unsigned int)arg1;
- (void)requestMoreRecDataAsync:(unsigned int)arg1 scene:(unsigned int)arg2;
- (void)getNewMsgLinePosAsync:(unsigned int)arg1;
- (void)getRecListStartPosAsync:(unsigned int)arg1;
- (void)onTimelineBoxDeleteAsync:(unsigned int)arg1 keepData:(_Bool)arg2;
- (void)removeAllDataAsync:(unsigned int)arg1;
- (void)resetAllData;
- (unsigned long long)getLastMsgTimeByUserName:(id)arg1;
- (id)getMsgInfoByMsgId:(unsigned long long)arg1;
- (_Bool)getResortBandwidthOptSwitch;
- (id)getLastMsgInfo;
- (unsigned int)getBoxCovTime;
- (unsigned int)getLastMsgTime;
- (void)setFirstVisibleItemAsync:(unsigned int)arg1 pos:(unsigned int)arg2;
- (unsigned int)getUnReadCount;
- (void)debugPrintSnapshotList:(_Bool)arg1;
- (void)ignoreResortNextReqTimeCheck:(unsigned int)arg1;
- (void)disableResortForDebug:(_Bool)arg1;
- (void)callOnResortResultChanged;
- (void)callOnRecDataChange:(unsigned int)arg1 recInfo:(id)arg2;
- (void)callOnDataChange:(unsigned int)arg1 msgInfo:(id)arg2 userName:(id)arg3;
- (void)deleteByUserNameAndSvrIdAsync:(unsigned int)arg1 userName:(id)arg2 svrId:(unsigned long long)arg3;
- (void)deleteByUserNameAsync:(unsigned int)arg1 userName:(id)arg2;
- (_Bool)deleteByMsgId:(unsigned long long)arg1 msgType:(unsigned int)arg2;
- (void)updateMsgContentAsync:(unsigned int)arg1 localId:(unsigned long long)arg2 msgViewType:(unsigned int)arg3 content:(id)arg4;
- (void)mockInsertRecCardAsync:(unsigned int)arg1 msgCard:(id)arg2;
- (void)insertAsync:(unsigned int)arg1 msgInfo:(id)arg2;
- (void)onExpandAsync:(unsigned int)arg1 localId:(unsigned long long)arg2;
- (void)onMsgClickAsync:(unsigned int)arg1 localId:(unsigned long long)arg2 postInCard:(unsigned int)arg3;
- (void)onExposeParamListAsync:(unsigned int)arg1 list:(id)arg2;
- (void)onExposeAsync:(unsigned int)arg1 localId:(unsigned long long)arg2 validExpose:(_Bool)arg3 sessionId:(unsigned int)arg4 exposedDuration:(unsigned int)arg5 exposedAreaMaxRadio:(unsigned int)arg6;
- (void)resetAllNewMsgFlagAsync:(unsigned int)arg1;
- (void)resetNewMsgLineAsync:(unsigned int)arg1 localId:(unsigned long long)arg2;
- (void)setIsKeepPosAsync:(unsigned int)arg1 keepPos:(_Bool)arg2;
- (void)onExitAsync:(unsigned int)arg1;
- (void)onEnterAsync:(unsigned int)arg1 sessionId:(unsigned int)arg2 digestMsgId:(unsigned long long)arg3;
- (void)onTimelineBoxExposedAsync:(unsigned int)arg1;
- (void)onAppBackgroundAsync:(unsigned int)arg1;
- (void)onAppForegroundAsync:(unsigned int)arg1;
- (_Bool)hasInit;
- (void)initWithTaskIdConfigDirUinClientVersionInitConfigAsync:(unsigned int)arg1 configDir:(id)arg2 uin:(id)arg3 clientVersion:(unsigned int)arg4 initConfig:(id)arg5;
- (id)getTopNArticleUrl:(unsigned int)arg1;
- (id)getTopNData:(unsigned int)arg1;
- (void)getCacheResortSwitchInfoAsync:(unsigned int)arg1;
- (void)getResortResultInfoAsync:(unsigned int)arg1 request:(id)arg2;
- (void)getDataAsync:(unsigned int)arg1 isInit:(_Bool)arg2 isReset:(_Bool)arg3 resetSize:(unsigned int)arg4 lastLocalId:(unsigned long long)arg5;
- (_Bool)isEnableHistoryBox;
- (struct BizManagerBridge *)bridge;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end

