//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContactVerifyLogic, NSMutableArray, NSMutableDictionary, NSString, SendVerifyMsgLogicController;
@protocol SayHelloDataLogicDelegate;

@interface SayHelloDataLogic
{
    unsigned int m_uiScene;
    id <SayHelloDataLogicDelegate> m_delegate;
    NSMutableArray *m_arrHellos;
    NSMutableDictionary *m_dicSections;
    NSMutableDictionary *m_dicHellos;
    CContactVerifyLogic *m_oContactVerifyLogic;
    SendVerifyMsgLogicController *m_sendVerifylogicVC;
}

+ (id)getContactFrom:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SayHelloDataLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)onModifyContact:(id)arg1;
- (void)onSetStrangerRemark:(id)arg1;
- (void)onFriendAssistStatusChange:(id)arg1;
- (void)onFriendAssistClearMsg:(id)arg1;
- (void)onFriendAssistRelpyMsg:(id)arg1;
- (void)onFriendAssistAddMsg:(id)arg1;
- (void)onFriendAssistUnreadCountChanged;
- (void)dealloc;
- (id)initWithScene:(unsigned int)arg1 delegate:(id)arg2;
- (id)getSectionTitle:(unsigned long long)arg1;
- (unsigned int)getHelloCount:(unsigned long long)arg1;
- (unsigned int)getSectionCount;
- (void)addContact:(id)arg1;
- (void)verifyContact:(id)arg1;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)onContactVerifyFail;
- (void)handleAddedContact:(id)arg1;
- (void)clearMsg:(unsigned int)arg1;
- (void)clearMsg:(unsigned int)arg1 ForIndex:(unsigned int)arg2 Section:(unsigned int)arg3;
- (id)getChatName:(unsigned int)arg1;
- (void)insetLatestHello:(id)arg1;
- (void)loadData:(unsigned int)arg1;
- (id)getContactForIndex:(unsigned int)arg1 Section:(unsigned int)arg2;
- (id)getContactForUserName:(id)arg1;
- (void)removeArrHello:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

