//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ChatRoomSpecialAttentionMemberLogic, NSArray, NSString;
@protocol ChatRoomSpecialAttentionMemberPageLogicDelegate;

@interface ChatRoomSpecialAttentionDeleteMemberLogic
{
    ChatRoomSpecialAttentionMemberLogic *m_chatRoomSpecialAttentionMemberLogic;
    CContact *_m_chatRoomContact;
    id <ChatRoomSpecialAttentionMemberPageLogicDelegate> _m_delegate;
    NSArray *_m_attentionMemberContactList;
    CContact *_m_deleteAttentionContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *m_deleteAttentionContact; // @synthesize m_deleteAttentionContact=_m_deleteAttentionContact;
@property(retain, nonatomic) NSArray *m_attentionMemberContactList; // @synthesize m_attentionMemberContactList=_m_attentionMemberContactList;
@property(nonatomic) __weak id <ChatRoomSpecialAttentionMemberPageLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact=_m_chatRoomContact;
- (void)OnModifyChatRoomSpecialAttentionMember:(id)arg1 withResult:(unsigned int)arg2 errorMsg:(id)arg3;
- (void)doDelAttentionMember;
- (void)delAttentionMemberWithSender:(id)arg1;
- (void)startWithSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

