//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet, NSString;

@interface WCTempChatMgr
{
    NSMutableSet *_tempSessionUsrNameSet;
    NSMutableDictionary *_getContactInfoDict;
    NSMutableDictionary *_dictCallBackInfo;
    NSMutableDictionary *_dictMsgControllerInfo;
}

- (void).cxx_destruct;
- (void)sendEnterTempSessionReq:(long long)arg1 sessionFrom:(id)arg2 bizUsrName:(id)arg3 userInfo:(id)arg4;
- (void)sendDelTempSessionReq:(id)arg1;
- (id)pathForUserNameSet;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onFailedToGetContactsFromSvr;
- (void)onModifyContact:(id)arg1;
- (void)processTranslateResultWithPath:(id)arg1 queryDict:(id)arg2 parentController:(id)arg3 originUrl:(id)arg4 translateInfo:(id)arg5 jumpController:(id)arg6;
- (void)startEnterTempSessionLogicWithQueryDict:(id)arg1 parentController:(id)arg2 originUrl:(id)arg3 translateInfo:(id)arg4;
- (void)asyncSaveTempChatUsrNames;
- (_Bool)isShowMenuMode:(id)arg1;
- (_Bool)isShowChatMode:(id)arg1;
- (void)handleJumpCallBack:(id)arg1;
- (long long)getJumpSceneValue:(id)arg1;
- (_Bool)isFromBusinessJump:(id)arg1;
- (_Bool)isTempChatForUserName:(id)arg1;
- (void)pushMsgControllerByContact:(id)arg1 parentController:(id)arg2;
- (void)realCreateTempSession:(id)arg1 sceneValue:(long long)arg2 sessionFrom:(id)arg3 parentViewController:(id)arg4 callBackInfo:(id)arg5;
- (void)startTempSessionFromJSApi:(id)arg1 params:(id)arg2 parentViewController:(id)arg3 scene:(unsigned int)arg4;
- (void)initData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

