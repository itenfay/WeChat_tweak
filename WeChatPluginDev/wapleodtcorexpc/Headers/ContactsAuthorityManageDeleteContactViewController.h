//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactTagData, ContactsAuthorityManageModifyContactLogic, NSMutableDictionary, NSMutableSet, NSString;
@protocol ContactsAuthorityManageDeleteContactViewControllerDelegate;

@interface ContactsAuthorityManageDeleteContactViewController
{
    NSMutableDictionary *m_loadContactDataIDic;
    NSMutableSet *m_socialBlackSuccessModifyUsrNameSet;
    ContactsAuthorityManageModifyContactLogic *m_contactsAuthorityManageModifyContactLogic;
    ContactTagData *_m_contactTagData;
    id <ContactsAuthorityManageDeleteContactViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactsAuthorityManageDeleteContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ContactTagData *m_contactTagData; // @synthesize m_contactTagData=_m_contactTagData;
@property(retain, nonatomic) ContactsAuthorityManageModifyContactLogic *m_contactsAuthorityManageModifyContactLogic; // @synthesize m_contactsAuthorityManageModifyContactLogic;
- (void)reloadAuthorityDetailDeleteContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2;
- (void)onNewContactAuthorityDeleteContactSuccess:(id)arg1;
- (id)getViewController;
- (void)reloadContactDataDic;
- (id)getReloadContactDataList;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (_Bool)onShouldSelectContact:(id)arg1;
- (void)modifyAuthorityDetailDeleteContact;
- (void)modifyAuthorityTagDetailDeleteContactConfirm:(id)arg1;
- (void)modifyTagDetailDeleteContact;
- (void)onDone:(id)arg1;
- (void)onCancel:(id)arg1;
- (id)getContactsAuthorityManageModifyContactLogic;
- (void)updatePanelBtn;
- (void)initData;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

