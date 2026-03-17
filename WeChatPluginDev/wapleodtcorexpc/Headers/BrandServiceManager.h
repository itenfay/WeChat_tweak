//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BrandServiceManager : NSObject
{
    struct BrandServiceManagerCallbackBridge *callback_;
}

+ (id)shareInstance;
- (void)resetDataMigrateStatus;
- (id)getAffConfig;
- (id)getOftenDetailMsgList:(id)arg1 limit:(unsigned int)arg2;
- (void)onWechatIntoActive;
- (_Bool)deleteRecCardFromCache:(id)arg1;
- (void)onXmlPushReceiveAsync:(unsigned long long)arg1 type:(id)arg2 content:(id)arg3;
- (void)resortV2ControlFlagChangeAsync:(unsigned long long)arg1 flag:(unsigned int)arg2 liftReadAreaSize:(unsigned int)arg3 historyBoxWording:(id)arg4 resortSceneBitSwitch:(unsigned long long)arg5;
- (void)callOnCreationCenterInfoChange:(_Bool)arg1 errorMsg:(id)arg2 info:(id)arg3;
- (void)resetCreationCenterRedPointAsync:(unsigned long long)arg1 newNum:(unsigned int)arg2;
- (id)getCacheResortConfigString;
- (void)requestCreationCenterInfoAsync:(unsigned long long)arg1 scene:(unsigned int)arg2 data:(id)arg3;
- (id)getCreationCenterInfo;
- (void)requestMoreRecDataAsync:(unsigned long long)arg1 scene:(unsigned int)arg2;
- (void)getNewMsgLinePosAsync:(unsigned long long)arg1;
- (void)getRecListStartPosAsync:(unsigned long long)arg1;
- (void)removeAllDataAsync:(unsigned long long)arg1;
- (void)resetAllData;
- (unsigned long long)getLastMsgTimeByUserName:(id)arg1;
- (id)getMsgInfoByMsgId:(unsigned long long)arg1;
- (_Bool)getResortBandwidthOptSwitch;
- (id)getLastMsgInfo;
- (unsigned int)getLastMsgTime;
- (void)setFirstVisibleItemAsync:(unsigned long long)arg1 pos:(unsigned int)arg2;
- (unsigned int)getUnReadCount;
- (void)debugPrintSnapshotList:(_Bool)arg1;
- (void)ignoreResortNextReqTimeCheck:(unsigned int)arg1;
- (void)disableResortForDebug:(_Bool)arg1;
- (void)callOnResortResultChanged;
- (void)callOnRecDataChange:(unsigned int)arg1 recInfo:(id)arg2;
- (void)callOnDataChange:(unsigned int)arg1 msgInfo:(id)arg2 userName:(id)arg3;
- (void)deleteByUserNameAndSvrIdAsync:(unsigned long long)arg1 userName:(id)arg2 svrId:(unsigned long long)arg3;
- (void)deleteByUserNameAsync:(unsigned long long)arg1 userName:(id)arg2;
- (_Bool)deleteByMsgId:(unsigned long long)arg1 msgType:(unsigned int)arg2;
- (void)updateMsgContentAsync:(unsigned long long)arg1 localId:(unsigned long long)arg2 msgViewType:(unsigned int)arg3 content:(id)arg4;
- (void)mockInsertRecCardAsync:(unsigned long long)arg1 msgCard:(id)arg2;
- (void)insertAsync:(unsigned long long)arg1 msgInfo:(id)arg2;
- (void)onExpandAsync:(unsigned long long)arg1 localId:(unsigned long long)arg2;
- (void)onRecCardExposeAsync:(unsigned long long)arg1 localId:(unsigned long long)arg2 type:(unsigned int)arg3;
- (void)onMsgClickAsync:(unsigned long long)arg1 localId:(unsigned long long)arg2 postInCard:(unsigned int)arg3;
- (void)onExposeParamListAsync:(unsigned long long)arg1 list:(id)arg2;
- (void)onExposeAsync:(unsigned long long)arg1 localId:(unsigned long long)arg2 validExpose:(_Bool)arg3 sessionId:(unsigned int)arg4 exposedDuration:(unsigned int)arg5 exposedAreaMaxRadio:(unsigned int)arg6;
- (void)resetAllNewMsgFlagAsync:(unsigned long long)arg1;
- (void)resetNewMsgLineAsync:(unsigned long long)arg1 localId:(unsigned long long)arg2;
- (void)setIsKeepPosAsync:(unsigned long long)arg1 keepPos:(_Bool)arg2;
- (void)onExitAsync:(unsigned long long)arg1;
- (void)onEnterAsync:(unsigned long long)arg1 sessionId:(unsigned int)arg2 digestMsgId:(unsigned long long)arg3;
- (void)onAppForegroundAsync:(unsigned long long)arg1;
- (_Bool)hasInit;
- (void)initWithTaskIdConfigDirUinClientVersionInitConfigAsync:(unsigned long long)arg1 configDir:(id)arg2 uin:(id)arg3 clientVersion:(unsigned int)arg4 initConfig:(id)arg5;
- (id)getTopNArticleUrl:(unsigned int)arg1;
- (id)getTopNData:(unsigned int)arg1;
- (void)getCacheResortSwitchInfoAsync:(unsigned long long)arg1;
- (void)getResortResultInfoAsync:(unsigned long long)arg1 request:(id)arg2;
- (void)getNotifyMsgDataAsync:(unsigned long long)arg1 fromLocalId:(unsigned long long)arg2 limit:(unsigned int)arg3;
- (void)getDataAsync:(unsigned long long)arg1 isInit:(_Bool)arg2 isReset:(_Bool)arg3 resetSize:(unsigned int)arg4 lastLocalId:(unsigned long long)arg5;
- (_Bool)isDataMigrateDone;
- (_Bool)isEnableHistoryBox;
- (struct BrandServiceManagerBridge *)bridge;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end

