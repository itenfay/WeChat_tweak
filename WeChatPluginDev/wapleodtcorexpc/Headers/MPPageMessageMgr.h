//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCEliminatedSlotMMKV;

@interface MPPageMessageMgr
{
    WCEliminatedSlotMMKV *_messageSlotMMKV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCEliminatedSlotMMKV *messageSlotMMKV; // @synthesize messageSlotMMKV=_messageSlotMMKV;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)markLastMsgSendTimeToPage:(id)arg1 msgWrap:(id)arg2;
- (unsigned int)getLastMsgSendTimeToPage:(id)arg1;
- (void)markFirstMsgSendTimeToPage:(id)arg1 msgWrap:(id)arg2;
- (unsigned int)getFirstMsgSendTimeToPage:(id)arg1;
- (void)markLastReferMsgSendToPage:(id)arg1 msgWrap:(id)arg2;
- (_Bool)hasSendReferMsgToPage:(id)arg1 withinTime:(unsigned int)arg2;
- (unsigned int)lastMsgExpireTime;
- (unsigned int)referMsgExpireTime;
- (void)openBrandController:(id)arg1 navigationController:(id)arg2 modelModel:(unsigned int)arg3 pageIdentityInfo:(id)arg4 referMsg:(id)arg5;
- (void)clearData;
- (void)initData;
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

