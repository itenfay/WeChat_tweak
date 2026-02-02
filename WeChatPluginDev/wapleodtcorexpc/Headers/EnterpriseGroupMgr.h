//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EnterpriseGroupMgr
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleConvertBizChat:(id)arg1;
- (void)handleInitiateBizChat:(id)arg1;
- (void)handleQuitBizChat:(id)arg1;
- (void)handleUpdateBizChatMemberList:(id)arg1;
- (void)handleUpdateBizChat:(id)arg1;
- (void)handleCreateBizChatInfo:(id)arg1;
- (_Bool)updateGroupContactAttrToSvr:(id)arg1;
- (_Bool)updateGroupMemberListToSvr:(id)arg1;
- (_Bool)convertBizChat:(id)arg1 chatId:(id)arg2 chatType:(id)arg3 callBackId:(id)arg4;
- (_Bool)initiateBizChat:(id)arg1 chatTitle:(id)arg2 users:(id)arg3 callBackId:(id)arg4;
- (_Bool)updateGroupSetting:(id)arg1 bizFlag:(unsigned int)arg2;
- (_Bool)updateGroupName:(id)arg1 groupName:(id)arg2;
- (_Bool)deleteMemberList:(id)arg1 group:(id)arg2 brand:(id)arg3;
- (_Bool)addMemeberList:(id)arg1 group:(id)arg2 brand:(id)arg3;
- (_Bool)quitEnterpriseGroup:(id)arg1;
- (_Bool)createEnterpriseGroup:(id)arg1 extKey:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

