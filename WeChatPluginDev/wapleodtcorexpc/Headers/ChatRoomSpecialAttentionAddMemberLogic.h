//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ChatRoomSpecialAttentionMemberLogic, ChatRoomSpecialAttentionMemberSelectViewController, NSArray, NSString, OrderedDictionary;
@protocol ChatRoomSpecialAttentionMemberPageLogicDelegate;

@interface ChatRoomSpecialAttentionAddMemberLogic
{
    ChatRoomSpecialAttentionMemberSelectViewController *m_vc;
    OrderedDictionary *m_dicModifySpecialAttentionMember;
    ChatRoomSpecialAttentionMemberLogic *m_chatRoomSpecialAttentionMemberLogic;
    NSArray *m_existAttentionMemberUserName;
    id <ChatRoomSpecialAttentionMemberPageLogicDelegate> m_delegate;
    CContact *_m_chatRoomContact;
    NSArray *_m_attentionMemberContactList;
    NSArray *_m_chatRoomMemContactList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *m_chatRoomMemContactList; // @synthesize m_chatRoomMemContactList=_m_chatRoomMemContactList;
@property(retain, nonatomic) NSArray *m_attentionMemberContactList; // @synthesize m_attentionMemberContactList=_m_attentionMemberContactList;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact=_m_chatRoomContact;
@property(nonatomic) __weak id <ChatRoomSpecialAttentionMemberPageLogicDelegate> m_delegate; // @synthesize m_delegate;
- (id)getViewController;
- (void)OnModifyChatRoomSpecialAttentionMember:(id)arg1 withResult:(unsigned int)arg2 errorMsg:(id)arg3;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (id)getAllAttentionMemberContactDic;
- (void)DoModifySpecialAttentionMember;
- (_Bool)isSelected:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (unsigned int)getSpecialAttentionMemberSelectMaxNumber;
- (void)updateRightBtn;
- (void)reloadData;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

