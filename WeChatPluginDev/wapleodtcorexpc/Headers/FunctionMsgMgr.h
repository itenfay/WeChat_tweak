//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FunctionNewXml, NSMutableArray, NSRecursiveLock, NSString;

@interface FunctionMsgMgr
{
    NSRecursiveLock *m_oLock;
    _Bool m_bGettingMsg;
    FunctionNewXml *m_oCurrNewXml;
    unsigned int m_nextActionTime;
    NSMutableArray *m_xmlList;
}

- (void).cxx_destruct;
- (void)saveAddMsg:(id)arg1;
- (id)loadAddMsg;
- (void)removeAddMsg:(id)arg1;
- (id)getAddMsg:(id)arg1;
- (void)insertAddMsg:(id)arg1;
- (void)showMessageWraps:(id)arg1 bussinessId:(unsigned long long)arg2 businessInfo:(id)arg3;
- (void)showMessageWrap:(id)arg1 bussinessId:(unsigned long long)arg2;
- (void)showAddMsg:(id)arg1 version:(unsigned long long)arg2 createTime:(unsigned int)arg3;
- (id)getFunctionMsg:(id)arg1;
- (void)updateFunctionMsg:(id)arg1 opType:(unsigned int)arg2;
- (void)removeFunctionMsg:(id)arg1;
- (void)insertFunctionMsg:(id)arg1;
- (void)saveFunctionMsg:(id)arg1;
- (id)loadFunctionMsg;
- (void)revokeMsg:(id)arg1;
- (void)handleGetFuncMsgResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetMsgFail:(id)arg1 buf:(id)arg2 businessBuf:(id)arg3;
- (void)requestCgi:(id)arg1;
- (void)requestCgiWithCgiName:(id)arg1 cgiPath:(id)arg2 cmdid:(unsigned int)arg3 businessId:(unsigned int)arg4 functionMsgId:(id)arg5 customBuff:(id)arg6;
- (void)saveFunctionNewXml:(id)arg1;
- (id)loadFunctionNewXml;
- (id)getPBPath;
- (void)updateFunctionNewXml:(id)arg1 retryCount:(unsigned int)arg2 nextRetry:(unsigned int)arg3 customBuf:(id)arg4 businessBuf:(id)arg5;
- (void)updateFunctionNewXml:(id)arg1 opType:(unsigned int)arg2 version:(unsigned long long)arg3;
- (void)mergeFunctionNewXml:(id)arg1;
- (id)removeFunctionNewXml:(id)arg1 version:(unsigned long long)arg2;
- (id)removeFunctionNewXml:(id)arg1;
- (id)getFunctionNewXml:(id)arg1;
- (void)insertFunctionNewXml:(id)arg1;
- (void)onNewSyncEnd;
- (void)tryNextTask;
- (void)handleFunctionNewXml:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)parseAddMsg:(struct XmlReaderNode_t *)arg1 baseMsg:(id)arg2;
- (void)test;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

