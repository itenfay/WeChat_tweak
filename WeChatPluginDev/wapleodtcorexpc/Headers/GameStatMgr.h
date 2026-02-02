//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface GameStatMgr
{
    unsigned int _networkType;
    NSString *_UUID;
    NSMutableDictionary *_gameLaunchTime;
    NSMutableDictionary *_gameDescSDK;
    _Bool _appInfoExtendLoaded;
    NSMutableDictionary *_dictScene2LayerID;
}

+ (id)genExternInfoWithNoticeID:(id)arg1 withNew:(_Bool)arg2 sourceScene:(int)arg3;
+ (id)genExternInfoWithNoticeID:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictScene2LayerID; // @synthesize dictScene2LayerID=_dictScene2LayerID;
@property(retain, nonatomic) NSMutableDictionary *gameDescSDK; // @synthesize gameDescSDK=_gameDescSDK;
@property(retain, nonatomic) NSMutableDictionary *gameLaunchTime; // @synthesize gameLaunchTime=_gameLaunchTime;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) unsigned int networkType; // @synthesize networkType=_networkType;
- (void)statGameCenterJsapiJump:(int)arg1 sourceScene:(int)arg2;
- (_Bool)writeToFile:(id)arg1 data:(id)arg2;
- (_Bool)loadAppInfoExtend;
- (void)saveAppInfoExtend;
- (id)convertStr:(id)arg1;
- (_Bool)isGameForStat:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)uploadGameReport:(unsigned int)arg1 withLogExt:(id)arg2;
- (void)statGameCenterAppstoreInfo:(id)arg1 productIdentifier:(id)arg2 errCode:(unsigned int)arg3;
- (void)statDiffAccountShare:(id)arg1 appID:(id)arg2 withOpID:(unsigned int)arg3;
- (void)gameStatReport:(id)arg1 scenc:(int)arg2 opType:(int)arg3 fromUsrName:(id)arg4 msgType:(unsigned int)arg5 msgID:(unsigned int)arg6 sourceScenc:(int)arg7 msgSubType:(unsigned int)arg8 giftId:(id)arg9 giftUrl:(id)arg10 extInfo:(id)arg11;
- (void)statGameCenterClickAddSubMsgType:(id)arg1 scenc:(int)arg2 opType:(int)arg3 fromUsrName:(id)arg4 msgType:(unsigned int)arg5 msgID:(unsigned int)arg6 sourceScenc:(int)arg7 msgSubType:(unsigned int)arg8 noticeID:(id)arg9;
- (void)statGameCenterClick:(id)arg1 scenc:(int)arg2 opType:(int)arg3 fromUsrName:(id)arg4 msgType:(unsigned int)arg5 msgID:(unsigned int)arg6 sourceScenc:(int)arg7;
- (void)statGameCenterClickSimpleWithExternField:(id)arg1 scenc:(int)arg2 opType:(int)arg3 msgType:(unsigned int)arg4 noticeID:(id)arg5 withNew:(_Bool)arg6;
- (void)statGameCenterClickSimpleWithExternField:(id)arg1 scenc:(int)arg2 opType:(int)arg3 noticeID:(id)arg4 withNew:(_Bool)arg5;
- (void)statGameCenterClickSimpleWithExternField:(id)arg1 scenc:(int)arg2 opType:(int)arg3 noticeID:(id)arg4 withNew:(_Bool)arg5 sourceScene:(int)arg6;
- (void)statGameCenterClickSimple:(id)arg1 scenc:(int)arg2 opType:(int)arg3;
- (void)statGameDetailView:(id)arg1 sourceScene:(int)arg2;
- (void)statGameSettingDetailView:(id)arg1 isReceived:(_Bool)arg2;
- (void)statDeleteMsgInConversation:(id)arg1;
- (void)statRefuseMsgInGameSettingView:(id)arg1 isReceived:(_Bool)arg2;
- (void)statRefuseMsgInConversation:(id)arg1 isReceived:(_Bool)arg2;
- (void)statLoadMoreGameMsgs;
- (void)statTimeLinePlaySight:(id)arg1 opType:(int)arg2 ExternInfo:(id)arg3;
- (void)statClickTimeLineTail:(id)arg1 opType:(int)arg2 ExternInfo:(id)arg3 SceneType:(int)arg4;
- (void)statClickTimeLineMessage:(id)arg1 isSource:(_Bool)arg2;
- (void)statClickInConversation:(id)arg1 OpType:(int)arg2 ExternInfo:(id)arg3;
- (void)statClickInConversation:(id)arg1;
- (void)statShowInAD:(id)arg1 index:(unsigned int)arg2;
- (void)statShowConversation:(id)arg1;
- (void)statShowTimeLineMessage:(id)arg1;
- (void)endStatAppInfoExtend;
- (void)startStatAppInfoExtend;
- (void)initScene2LayerID;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

