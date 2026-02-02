//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsDataLogic, NSString;

@interface ContactAddSocialBlackListLogic
{
    ContactsDataLogic *m_contactsDataLogic;
}

+ (void)reportBatchSocialBlackWithActionCode:(unsigned int)arg1 andSelectFriendNum:(unsigned long long)arg2 andModifiedSucFriendNum:(unsigned long long)arg3 andModifiedSucFriendsStr:(id)arg4 andBeforSocialBlackFriendNum:(unsigned long long)arg5 andAfterSocialblackFriendNum:(unsigned long long)arg6 andActionOperateNum:(unsigned long long)arg7 andSelectTagName:(id)arg8 andSelectTagID:(id)arg9 andStayTime:(double)arg10 andSessionID:(id)arg11;
- (void).cxx_destruct;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (id)getAddContactLoadContactListFromContactTagData:(id)arg1;
- (id)getAddContactLoadContactListFromChatRoom:(id)arg1;
- (id)getContactsDataLogic;
- (id)getAddContactLoadContactListWithScene:(unsigned int)arg1;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

