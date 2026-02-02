//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact;
@protocol ChatRoomSpecialAttentionMemberLogicDelegate;

@interface ChatRoomSpecialAttentionMemberLogic
{
    CContact *_m_chatRoomContact;
    id <ChatRoomSpecialAttentionMemberLogicDelegate> _m_delegate;
}

+ (void)reportChatRoomSpecialAttentionMemberLogWithActionCode:(long long)arg1 chatRoomUserName:(id)arg2 initialAttentionMemberListCount:(unsigned int)arg3 addAttentionMemberList:(id)arg4 deleteAttentionMemberList:(id)arg5;
- (void).cxx_destruct;
@property(nonatomic) __weak id <ChatRoomSpecialAttentionMemberLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact=_m_chatRoomContact;
- (void)updateLocalChatRoomRoomSpecialAttentionList:(id)arg1 andSpecialAttentionMemberList:(id)arg2;
- (void)OnModifyChatRoomSpecialAttentionMemberResponse:(id)arg1;
- (_Bool)modifyChatRoomSpecialAttentionMember:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;

@end

