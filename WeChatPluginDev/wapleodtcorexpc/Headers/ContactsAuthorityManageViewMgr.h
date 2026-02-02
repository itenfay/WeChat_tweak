//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsDataLogic, NSMutableArray, NSString;

@interface ContactsAuthorityManageViewMgr
{
    NSMutableArray *m_arSocialBlackFunctionTagContact;
    NSMutableArray *m_arSnsBlackFunctionTagContact;
    NSMutableArray *m_arSnsNointerestingFunctionTagContact;
    NSMutableArray *m_arFinderBlackFunctionTagContact;
    NSMutableArray *m_arFinderOutsideFunctionTagContact;
    NSMutableArray *m_arWowHideFunctionTagContact;
    NSMutableArray *m_arWowBlockFunctionTagContact;
    NSMutableArray *m_arWeRunBlackFunctionTagContact;
    ContactsDataLogic *m_contactsDataLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ContactsDataLogic *m_contactsDataLogic; // @synthesize m_contactsDataLogic;
- (_Bool)checkIsValidContact:(id)arg1;
- (unsigned int)getContactsAuthorityManageAuthTypeWithAuthorityID:(unsigned int)arg1;
- (unsigned int)getContactsAuthorityManageBizTypeWithAuthorityID:(unsigned int)arg1;
- (void)reportContactsAuthorityManageOperateLogWithActionCode:(unsigned int)arg1 bizType:(unsigned int)arg2 authType:(unsigned int)arg3 selectionType:(unsigned int)arg4 selectionCount:(unsigned int)arg5 selectionFriCount:(unsigned int)arg6 originListFriCount:(unsigned int)arg7 submitFriCount:(unsigned int)arg8;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)onServiceInit;
- (void)reloadNewContactFunctionTagContactList:(unsigned int)arg1;
- (_Bool)checkWowBlockWithContact:(id)arg1;
- (void)reloadWowBlockFunctionTagContactList;
- (id)getWowBlockFunctionTagContactList;
- (_Bool)checkWowHideWithContact:(id)arg1;
- (void)reloadWowHideFunctionTagContactList;
- (id)getWowHideFunctionTagContactList;
- (void)preloadWowData;
- (void)reloadWeRunBlackFunctionTagContactList;
- (id)getWeRunBlackFunctionTagContactList;
- (void)reloadFinderOutsideFunctionTagContactList;
- (id)getFinderOutsideFunctionTagContactList;
- (void)reloadFinderBlackFunctionTagContactList;
- (id)getFinderBlackFunctionTagContactList;
- (_Bool)checkSnsNointerestingWithContact:(id)arg1;
- (void)reloadSnsNointerestingFunctionTagContactList;
- (id)getSnsNointerestingFunctionTagContactList;
- (void)reloadSnsBlackFunctionTagContactList;
- (id)getSnsBlackFunctionTagContactList;
- (void)reloadSocialBlackFunctionTagContactList;
- (id)getSocialBlackFunctionTagContactList;
- (id)getNewContactFunctionTagWithTagId:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

