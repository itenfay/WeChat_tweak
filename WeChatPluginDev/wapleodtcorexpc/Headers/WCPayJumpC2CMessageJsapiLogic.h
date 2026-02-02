//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, WCBaseControlLogic;

@interface WCPayJumpC2CMessageJsapiLogic
{
    JSEvent *m_jsEvent;
    NSString *m_bizId;
    unsigned int m_bizType;
    WCBaseControlLogic *m_authLogic;
    NSString *m_username;
    unsigned int m_createTime;
    NSString *m_msgSvrId;
}

- (void).cxx_destruct;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)report14954WithString:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)jumpToMessage;
- (void)reportAndStopLogic;
- (id)locateMessageBySvrId;
- (id)locateMessage;
- (_Bool)checkUser;
- (void)checkJsapi;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithJSEvent:(id)arg1 bizId:(id)arg2 bizType:(unsigned int)arg3 username:(id)arg4 createTime:(unsigned int)arg5 msgSvrId:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

