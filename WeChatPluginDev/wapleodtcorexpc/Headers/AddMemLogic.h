//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CContactVerifyLogic, NSArray, NSMutableArray, NSString;
@protocol AddMemLogicDelegate;

@interface AddMemLogic
{
    id <AddMemLogicDelegate> m_delegate;
    NSMutableArray *m_arrNeedVerifyUsrName;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSArray *m_arrMemberList;
    NSString *m_historyUploadTaskId;
    NSArray *m_selectedMsgList;
    NSArray *m_waitingAddedMemerList;
    NSString *m_waitingDesp;
    unsigned int _m_viewScene;
    CContact *_m_oContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *m_oContact; // @synthesize m_oContact=_m_oContact;
@property(nonatomic) unsigned int m_viewScene; // @synthesize m_viewScene=_m_viewScene;
@property(nonatomic) __weak id <AddMemLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)onNewHistoryUploadFinish:(id)arg1 uploadInfo:(id)arg2;
- (void)onHistoryUploadFinish:(id)arg1 uploadInfo:(id)arg2 errMsg:(id)arg3;
- (_Bool)shouldWaitHistoryUploadTask;
- (_Bool)checkHistoryUploadInfo:(id)arg1;
- (void)onFailToAddMemberWithHistory;
- (id)contactForContext;
- (unsigned long long)getFTSCommonScene;
- (void)onInviteAlert:(id)arg1 isCancelButton:(_Bool)arg2 historyInfo:(id)arg3;
- (void)OnInviteChatRoomMember:(id)arg1 Ret:(int)arg2 Error:(id)arg3 withUserData:(id)arg4;
- (void)verifyContact;
- (void)contactVerifyOk:(id)arg1;
- (void)onContactVerifyFail;
- (void)onMultiSelectWithMsgHistory:(id)arg1 uploadTaskId:(id)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (_Bool)addMembersToChatRoom:(id)arg1 WithDesp:(id)arg2;
- (id)getHistoryInfoWithChatRoom:(id)arg1 WithDesp:(id)arg2;
- (void)addMembersToChatRoom:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)showDespAlertView:(id)arg1;
- (void)addGroupVerifySuccessSystemNodeView:(id)arg1;
- (void)OnAddGroupMember:(id)arg1 withStatus:(unsigned int)arg2 memberList:(id)arg3 inviteList:(id)arg4 Error:(id)arg5 tipContent:(id)arg6 historyInfo:(id)arg7;
- (_Bool)canShowUpgradeStatus;
- (id)genErrorString:(id)arg1 withGroupVerify:(_Bool)arg2;
- (id)getErrorContactName:(id)arg1;
- (void)start:(id)arg1;
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

