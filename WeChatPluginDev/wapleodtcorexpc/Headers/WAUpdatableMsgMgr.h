//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString, WAUpdatableMsgStorage;

@interface WAUpdatableMsgMgr
{
    WAUpdatableMsgStorage *_updatableMsgStorage;
    NSMutableSet *_runningReq;
}

- (void).cxx_destruct;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)callExtAndTryUpdateShareKey:(id)arg1;
- (void)delayCallExtAndTryUpdateShareKey:(id)arg1;
- (void)handleGetChatToolMsgInfoResponse:(id)arg1;
- (void)handleGetUpdatableMsgInfoResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)tryUpdateUpdatableMsgInfoWithShareKey:(id)arg1 curInfo:(id)arg2;
- (id)getLatestUpdatableMsgInfoWithShareKey:(id)arg1 curInfo:(id)arg2;
- (void)subscribeSystemMsgWithShareKey:(id)arg1;
- (void)openSubscribeEntryWithShareKey:(id)arg1;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

